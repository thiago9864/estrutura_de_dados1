// ############################################################################
// TVC 3 -- ESTRUTURA DE DADOS e LABORATORIO DE PROGRAMACAO II
// DATA: 03/07/2017
// PREENCHER ESTE CABECALHO COM SUAS INFORMACOES
// ALUNO:
// MATRICULA:
// ############################################################################

#include <iostream>
#include "ArvBinBusca.h"

using namespace std;

int main()
{
    cout << "TVC3 -- ESTRUTURA DE DADOS e LAB. DE PROG. II" << endl;
    cout << "FAVOR PREENCHER OS SEUS DADOS" << endl;
    cout << "Exemplo de ABB: " << endl;
    ArvBinBusca abb;
    //arvore diferente do exemplo que esta na prova
    //abb.insere(25); abb.insere(15); abb.insere(35);
    //abb.insere(3);  abb.insere(16); abb.insere(33);
    //abb.insere(45);
    //arvore igual ao exemplo da prova
    abb.insere(40); abb.insere(15); abb.insere(10);
    abb.insere(20); abb.insere(19); abb.insere(35);
    abb.insere(75); abb.insere(50); abb.insere(45);
    abb.insere(60);
    abb.imprime();

    // TESTE DA QUESTAO 1 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 1" << endl;
    cout << abb.alturaNo(15) << endl;
    cout << abb.alturaNo(20) << endl;
    cout << abb.alturaNo(35) << endl;
    cout << abb.alturaNo(99) << endl;
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 2 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 2" << endl;
    int n = 0;
    int *v = abb.criaVetAteNivel(2, &n);
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
    delete v;
    cout << endl;
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 3 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 3" << endl;
    abb.removeSubNiveis(1);
    abb.imprime();
    cout << endl;
    // ------------------------------------------------------------------------

    return 0;
}
