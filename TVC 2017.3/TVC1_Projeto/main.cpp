#include <iostream>
#include "Jogador.h"
#include "Equipe.h"
#include "Matriz3Linhas.h"

using namespace std;

// ############################################################################
// TVC 1 -- ESTRUTURA DE DADOS e LABORATORIO DE PROGRAMACAO II
// DATA: 18/09/2017
// PREENCHER ESTE CABECALHO COM SUAS INFORMACOES
// ALUNO(A): Thiago de Almeida Lopes
// MATRICULA: 201765556AC
// ############################################################################

// ----------------------------------------------------------------------------
//Q1
int func1(int n, int *v, int ch)
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.
    int numMaiores = 0;

    for(int i=0; i < n; i++)
    {
        if(v[i] > ch)
        {
            cout << "posicao " << i << "   valor " << v[i] << "   endereco " << &v[i] << endl;
            numMaiores++;
        }
    }

    return numMaiores;
}

int* func2(int n, int *v, int ch, int tam)
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.
    int *vetM = new int[tam];
    int indice=0;

    for(int i=0; i < n; i++)
    {
        if(v[i] > ch)
        {
            vetM[indice] = v[i];
            indice++;
        }
    }

    if(indice > 0)
    {
        return vetM;
    }
    else
    {
        return NULL;
    }
}
// ----------------------------------------------------------------------------
//-Q1

// ----------------------------------------------------------------------------
//Q2
int sequencia(int n)
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.
    if(n < 0)
    {
        return -1;
    }
    if(n == 0)
    {
        return 1;
    }
    if(n == 1)
    {
        return 2;
    }

    return sequencia(n-1) + 2 * sequencia(n-2) + 1;
}
//-Q2
// ----------------------------------------------------------------------------

int main()
{
    srand(3);
    cout << "TVC 1 -- ESTRUTURA DE DADOS e LAB. DE PROG. II" << endl;
    cout << "FAVOR PREENCHER OS SEUS DADOS" << endl;

    // TESTE DA QUESTAO 1 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 1" << endl;
    int v[5] = {50, 10, 30, 40, 20};
    int t = func1(5, v, 25);
    int *p = func2(5, v, 25, t);
    for(int i = 0; i < t; i++)
        cout << p[i] << " ";
    cout << endl;
    cout << endl;
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 2 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 2" << endl;
    cout << "sequencia(-1) = " << sequencia(-1) << endl;
    cout << "sequencia( 1) = " << sequencia(1) << endl;
    cout << "sequencia( 5) = " << sequencia(5) << endl;
    cout << "sequencia(10) = " << sequencia(10) << endl;
    cout << endl;
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 3 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 3" << endl;
    Equipe e1(3);
    cout << "Equipe: " << endl;
    e1.imprimeEquipe();
    cout << "Maior pontuador: " << e1.maiorPontuador() << endl;
    cout << endl;
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 4 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 4" << endl;
    int m = 6, n = 6;
    Matriz3Linhas mat(m, n);

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            mat.set(i, j, rand()%40+1);

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cout << mat.get(i, j) << "\t";
        cout << endl;
    }
    cout << endl;
    m = 7;
    n = 4;
    Matriz3Linhas mat1(m, n);
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            mat1.set(i, j, rand()%40+1);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cout << mat1.get(i, j) << "\t";
        cout << endl;
    }
    cout << endl;
    // ------------------------------------------------------------------------

    return 0;
}
