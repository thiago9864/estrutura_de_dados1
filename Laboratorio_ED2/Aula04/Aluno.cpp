#include "Aluno.h"

Aluno::Aluno(string n, string m)
{
    cout << "Criando aluno" << endl;
    nome = n;
    matricula = m;
}

Aluno::~Aluno()
{
    cout << "Destruindo objeto aluno" << endl;
}

// ----------------------------------------------------------------------------
// Exercicio 1
// ----------------------------------------------------------------------------

void Aluno::leNotas()
{
    // Implemente sua solucao aqui
    float nota;
    int i=0;

    cout << "Digite as notas do aluno" << endl;

    while(i < 7)
    {

        cout << "Nota da disciplina " << i+1 << ": ";
        cin >> nota;

        if(nota >= 0 && nota <= 100)
        {
            //nota valida
            notas[i] = nota;
            i++;
        }
        else
        {
            cout << "Valor invalido de nota!" << endl;
        }

    }
}

double Aluno::calculaMedia()
{
    // Implemente sua solucao aqui
    float m=0;
    for(int i=0; i < 7; i++)
    {
        m += notas[i];
    }
    return m / 7;
}

// ----------------------------------------------------------------------------

void Aluno::setNome(string novo)
{
    nome = novo;
}

string Aluno::getNome()
{
    return nome;
}

// ----------------------------------------------------------------------------
// Exercicio 2
// ----------------------------------------------------------------------------

// Implemente aqui a sua solucao

int Aluno::getIdade()
{
    return idade;
}

void Aluno::setIdade(int id)
{
    if(id > 0)
    {
        idade = id;
    }
    else
    {
        cout << "Valor de idade invalido!" << endl;
    }
}

string Aluno::getMatricula()
{
    return matricula;
}

void Aluno::setMatricula(string mat)
{
    if(mat != "")
    {
        matricula = mat;
    }
    else
    {
        cout << "Valor de matricula invalido!" << endl;
    }
}



// ----------------------------------------------------------------------------
// Exercicio 3
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao


void Aluno::leFrequencia()
{
    int freq;
    int i=0;

    cout << "Digite 1 para 'Aluno com Frequencia'" << endl;
    cout << "Digite 0 para 'Aluno infrequente" << endl;

    while(i < 7)
    {
        cout << "Foi frequente na disciplina " << i+1 << "?: ";
        cin >> freq;

        if(freq == 1 || freq == 0)
        {
            alunoFrequente[i] = freq;
            i++;
        }
        else
        {
            cout << "Valor invalido!" << endl;
        }
    }
}


// ----------------------------------------------------------------------------
// Exercicio 6
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao



