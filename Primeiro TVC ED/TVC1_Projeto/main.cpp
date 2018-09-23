#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Ponto.h"
#include "Triangulo.h"
#include "MatrizTriDiagSec.h"

using namespace std;

// ############################################################################
// TVC 1 -- ESTRUTURA DE DADOS e LABORATORIO DE PROGRAMACAO II
// DATA: 17/04/2017
// PREENCHER ESTE CABECALHO COM SUAS INFORMACOES
// ALUNO(A):
// MATRICULA:
// ############################################################################

// ----------------------------------------------------------------------------
//Q1
void funcao()
{
    // Implemente aqui sua solucao!
    int *ab;
    int c;
    cout << "Atribuir 29 a c." << endl;
    c = 29;
    cout << "Endereco de memoria de c: " << &c << endl;
    cout << "Valor de c: " << c << endl << endl;
    cout << "Atribuir o endereco de memoria de c a ab." << endl;
    ab = &c;
    cout << "Valor de ab: " << ab << endl;
    cout << "Endereco de memoria de ab: " << &ab << endl;
    cout << "Conteudo apontado por ab: " << *ab << endl;
    cout << "Atribuir 34 a c." << endl;
    c = 34;
    cout << "Valor de ab: " << ab << endl;
    cout << "Endereco de memoria de ab: " << &ab << endl;
    cout << "Conteudo apontado por ab: " << *ab << endl << endl;
    cout << "Atribuir 7 ao valor apontado por ab." << endl;
    *ab = 7;
    cout << "Endereco de memoria de c: " << &c << endl;
    cout << "Valor de c: " << c << endl;
}
// ----------------------------------------------------------------------------
//-Q1

// ----------------------------------------------------------------------------
//Q2
/*
void funcao1(char a, char b)
{
    char c = a;
    a = b;
    b = c;
}

void funcao2(char *s, int l, int r)
{
    if (l == r)
        cout << s << endl;
    else
    {
        for(int i = l; i <= r; i++)
        {
            funcao1(s[l], s[i]);
            funcao2(s, l+1, r);
            funcao1(s[l], s[i]);
        }
    }
}
*/
/* Solucao 1
void funcao1(char *s, int a, int b)
{
    char c = s[a];
    s[a] = s[b];
    s[b] = c;
}

void funcao2(char *s, int l, int r)
{
    if (l == r)
        cout << s << endl;
    else
    {
        for(int i = l; i <= r; i++)
        {
            funcao1(s, l, i);
            funcao2(s, l+1, r);
            funcao1(s, l, i);
        }
    }
}
*/
void funcao1(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
}

void funcao2(char *s, int l, int r)
{
    if (l == r)
        cout << s << endl;
    else
    {
        for(int i = l; i <= r; i++)
        {
            funcao1(s+l, s+i);
            funcao2(s, l+1, r);
            funcao1(s+l, s+i);
        }
    }
}
//-Q2
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
//Q3
float soma(float x, int n)
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.

    if(n==1){
        return x;
    }

    float a = pow(-1, n-1) * (pow(x, n) / n);

    return a + soma(x, n-1);
}
//-Q3
// ----------------------------------------------------------------------------

int main()
{
    cout << "TVC 1 -- ESTRUTURA DE DADOS e LAB. DE PROG. II" << endl;
    cout << "FAVOR PREENCHER OS SEUS DADOS" << endl;

    // TESTE DA QUESTAO 1 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 1" << endl;
    funcao();
    cout << endl;

    // TESTE DA QUESTAO 2 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 2" << endl;
    char str[] = "abcde";
    funcao2(str, 0, 4);
    cout << endl;
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 3 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 3" << endl;
    cout << soma(2, 4) << endl;
    cout << endl;
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 4 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 4" << endl;
    Triangulo t(0, 0, 0, 2, sqrt(3), 1);
    cout << "b) " << t.tipo() << endl;
    cout << "c) " << t.areaEq() << endl;
    cout << endl;
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 5 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 5" << endl;
    srand(0);
    int dim = 5;
    MatrizTriDiagSec m(dim);
    for(int i = 0; i < dim; i++)
        for(int j = 0; j < dim; j++)
            m.atribui(i, j, rand()%9+1);
    for(int i = 0; i < dim; i++)
    {
        for(int j = 0; j < dim; j++)
            cout << m.consulta(i, j) << "  ";
        cout << endl;
    }
    cout << endl;
    // ------------------------------------------------------------------------

    return 0;
}
