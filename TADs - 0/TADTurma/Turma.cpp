#include <iostream>
#include "Aluno.h"
#include "Turma.h"

using namespace std;

Turma::Turma(char n, int q)
{
    cout << "Contrutor Turma" << endl;
    nome = n;
    qtde = q;
    alunos = new Aluno[qtde];
    leitura();
}

Turma::~Turma()
{
    cout << "Destrutor Turma" << endl;
    delete [] alunos;
}

void Turma::leitura()
{
    for(int i = 0; i < qtde; i++)
    {
        cout << "Aluno " << i+1 << ":" << endl;
        alunos[i].leitura();
    }
}

float Turma::media()
{
    float m = 0;
    for(int i = 0; i < qtde; i++)
        m += alunos[i].media();
    return m/qtde;
}

float Turma::maiorNota()
{
    float maior = alunos[0].media();
    for(int i = 1; i < qtde; i++)
        if(alunos[i].media() > maior)
            maior = alunos[i].media();
    return maior;
}

void Turma::aprovados()
{
    cout << "Aprovados: " << endl;
    for(int i = 0; i < qtde; i++)
        if(alunos[i].media() >= 60 && alunos[i].getFaltas() < 8)
            alunos[i].imprime();
}
