#include <iostream>
#include "Arvore.h"

using namespace std;

int main()
{
    Arvore a, b, c, d, e, f, g;

    f.cria(14, NULL, NULL);
    e.cria(38, NULL, NULL);
    e.cria(25, &e, &f);

    d.cria(19, NULL, NULL);
    c.cria(16, NULL, NULL);
    b.cria(18, &c, &d);

    a.cria(10, &b, &e);

    //anula raizes das arvores auxiliares
    b.anulaRaiz();
    c.anulaRaiz();
    d.anulaRaiz();
    e.anulaRaiz();
    f.anulaRaiz();
    g.anulaRaiz();

    cout << "Imprime arvore em pre ordem" << endl;
    a.imprime();

    cout << endl << "Busca pelo valor (38) : " << a.busca(38) << endl;
    cout << "Busca pelo valor (55) : " << a.busca(55) << endl;

    ///arvore montada
    /*
    Arvore am;

    cout << "Monta arvore manualmente" << endl;
    am.montaArvore();
    cout << "Imprime arvore montada" << endl;
    am.imprime();
    cout << "Insere nos" << endl;
    am.insere(4);
    am.insere(6);
    cout << "Imprime arvore depois de inserções" << endl;
    am.imprime();
    */

    ///percurso em largura
    cout << "Imprime arvore em largura" << endl;
    a.imprimeEmLargura();

    ///altura
    cout << "Altura da arvore: " << a.altura() << endl;

    ///conta nos
    cout << "Numero de nos da arvore: " << a.numeroDeNos() << endl;
    cout << "Numero de folhas: " << a.numeroDeFolhas() << endl;

    ///exercicios
    cout << "Arvore esta cheia?: " << a.isArvoreCheia() << endl;
    //cout << "Excluir folhas" << endl;
    //a.excluirFolhas();
    //cout << "Imprime arvore em pre ordem depois de excluir as folhas" << endl;
    //a.imprime();

    cout << "Imprime em pre ordem usando uma pilha" << endl;
    a.imprimePreOrdemComPilha();

    return 0;
}
