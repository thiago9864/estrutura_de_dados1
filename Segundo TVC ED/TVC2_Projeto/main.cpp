#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include "ListaCont.h"
#include "ListaSimplesOrd.h"
#include "ListaDupla.h"
#include "Pilha.h"

using namespace std;

// ############################################################################
// TVC 2 -- ESTRUTURA DE DADOS e LABORATORIO DE PROGRAMACAO II
// DATA: 29/05/2017
// PREENCHER ESTE CABECALHO COM SUAS INFORMACOES
// ALUNO(A):
// MATRICULA:
// ############################################################################

// ----------------------------------------------------------------------------
//Q4
bool verificaPadrao(char* vet, int n)
{
    Pilha P1, P2;

    for(int i=0; i < n; i++){
        char x = vet[i];

        if(P1.vazia() && P2.vazia()) /// 1
        {
            P1.empilha(x);
        }
        else if((!P1.vazia() && P1.getTopo() == x) || (!P2.vazia() && P2.getTopo() == x))/// 2
        {
            if(!P1.vazia() && P1.getTopo() == x){
                P1.empilha(x);
            }
            if(!P2.vazia() && P2.getTopo() == x){
                P2.empilha(x);
            }
        }
        else if(P1.vazia() || P2.vazia())/// 3
        {
            if(P1.vazia()){
                P1.empilha(x);
            } else {
                P2.empilha(x);
            }
        }
        else if((!P1.vazia() && P1.getTopo() != x) && (!P2.vazia() && P2.getTopo() != x))/// 4
        {
            P1.desempilha();
            P2.desempilha();
        }
    }

    if(P1.vazia() && P2.vazia()){
        return true;
    }
    return false;
}
//-Q4
// ----------------------------------------------------------------------------

int main()
{
    cout << "TVC 2 -- ESTRUTURA DE DADOS e LAB. DE PROG. II" << endl;
    cout << "FAVOR PREENCHER OS SEUS DADOS" << endl;

    // TESTE DA QUESTAO 1 -----------------------------------------------------
    srand(time(0));
    cout << endl << "TESTE DA QUESTAO 1" << endl;
    ListaCont lista(20);
    for(int i = 0; i < 20; i++)
    {
        lista.insereUlt(rand() % 100);
    }
    lista.imprime();
    int val = rand() % 100;
    cout << "Total de valores impares maiores que " << val << ": " << lista.contaValores(val) << endl;
    cout << endl;
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 2 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 2" << endl;
    ListaSimplesOrd lista_ord;
    lista_ord.inserir(2, 3);
    lista_ord.inserir(2, 3.5);
    lista_ord.inserir(2, 1);
    lista_ord.inserir(1, 1);
    lista_ord.inserir(1, 5);
    lista_ord.inserir(1, 9);
    lista_ord.inserir(1, 0);
    lista_ord.imprime();
    cout << endl;
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 3 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 3" << endl;
    ListaDupla listadup1, *listadup2;
    listadup1.insereInicio(5);
    listadup1.insereInicio(2);
    listadup1.insereInicio(-8);
    listadup1.insereInicio(7);
    listadup1.insereInicio(12);
    listadup1.insereInicio(8);
    listadup1.insereInicio(3);
    cout << "ANTES DE PARTICIONAR:" << endl;
    listadup1.imprime();
    listadup2 = listadup1.particiona(2);
    cout << "DEPOIS DE PARTICIONAR:" << endl;
    listadup1.imprime();
    listadup2->imprime();
    cout << endl;
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 4 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 4" << endl;
    char strs[6][50] = {"acbcab",
                      "aabbcc",
                      "aacabcbbc",
                      "ab",
                      "aacbb",
                      "caab"};

    for(int i = 0; i < 6; i++)
    {
        bool teste = verificaPadrao(strs[i], strlen(strs[i]));
        if( teste )
            cout << strs[i] << ": SATISFAZ O PADRAO!" << endl;
        else
            cout << strs[i] << ": NAO SATISFAZ O PADRAO!" << endl;
    }
    cout << endl;
    // ------------------------------------------------------------------------

    return 0;
}
