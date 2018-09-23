#include <iostream>
#include "Aluno.h"
#include "Prova.h"

using namespace std;

int main()
{
    cout << "LABORATORIO DE PROGRAMACAO II - AULA 04\n" << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 1
    // ------------------------------------------------------------------------
    Aluno a("Carlos", "201566123AB");

    //sets do exercicio 2
    a.setIdade(30);
    a.setMatricula("2017222222AC");

    // leitura das notas do aluno
    a.leNotas();
    double m = a.calculaMedia();

    cout << "Media do aluno: " << m << endl;



    // ------------------------------------------------------------------------
    // EXERCICIO 3
    // ------------------------------------------------------------------------

    // Implemente aqui

    cout << "--- Informacoes do aluno ---" << endl;
    cout << "Nome: " << a.getNome() << endl;
    cout << "Idade: " << a.getIdade() << endl;
    cout << "Matricula: " << a.getMatricula() << endl;


    // ------------------------------------------------------------------------
    // EXERCICIO 5
    // ------------------------------------------------------------------------

    // Implemente aqui
    a.leFrequencia();

    // ------------------------------------------------------------------------
    // EXERCICIO 6
    // ------------------------------------------------------------------------

    // Implemente aqui

    // ------------------------------------------------------------------------
    // EXERCICIO 7
    // ------------------------------------------------------------------------

    //Prova p(3);


    return 0;
}
