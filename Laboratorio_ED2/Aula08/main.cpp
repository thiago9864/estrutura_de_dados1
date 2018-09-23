#include <iostream>
#include <cstdlib> ///rand()
#include <ctime>   ///time()
#include "ListaDupla.h"

using namespace std;

int numAleatorio(int a, int b)
{
    return a + rand()%(b - a + 1); /// retorna um numero inteiro aleat—rio entre a e b
}

int main()
{
    ListaDupla l; /// cria lista vazia
    int NumNos = 10;

    srand(time(NULL));

    /// ATENCAO: os valores inseridos na lista sao gerados
    /// aleatoriamente e mudam em cada execucao do programa!!!
    cout << "Inserindo valores: ";
    for(int i = 1; i <= NumNos; i++)
    {
        float val =  numAleatorio(0, 50); /// cria um valor aleat—rio entre 0 e 50
        cout << val << ", ";
        l.insereInicio(val);
    }

    cout << endl;
    cout << endl;

    cout << "Imprimindo Lista (->): " << endl;
    l.imprimir();
    cout << "Imprimindo Lista (<-): " << endl;
    l.imprimirReverso();

    cout << endl;
    cout << endl;


    cout << "Inserindo valores no fim" << endl;
    l.insereFinal(-1);
    l.insereFinal(-2);
    l.insereFinal(-3);

    cout << endl;
    cout << endl;

    cout << "Imprimindo Lista (->): " << endl;
    l.imprimir();
    cout << "Imprimindo Lista (<-): " << endl;
    l.imprimirReverso();

    cout << endl;
    cout << endl;

    cout << "Elimina elementos do fim" << endl;
    l.eliminaFinal();
    l.eliminaFinal();
    l.eliminaFinal();
    l.eliminaFinal();
    l.eliminaFinal();

    cout << endl;
    cout << endl;

    cout << "Imprimindo Lista (->): " << endl;
    l.imprimir();
    cout << "Imprimindo Lista (<-): " << endl;
    l.imprimirReverso();

    cout << endl;
    cout << endl;

    bool existe = l.busca(20);
    cout << "O valor 20 esta na lista? ";
    if(existe)
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;

    ListaDupla l2;

    NumNos = 5;

    cout << "Inserindo valores na lista 2: ";
    for(int i = 1; i <= NumNos; i++)
    {
        float val =  numAleatorio(80, 100); /// cria um valor aleat—rio entre 0 e 50
        cout << val << ", ";
        l2.insereInicio(val);
    }

    cout << endl;
    cout << endl;

    cout << "Imprimindo Lista 2 (->): " << endl;
    l2.imprimir();
    cout << "Imprimindo Lista 2 (<-): " << endl;
    l2.imprimirReverso();

    cout << endl;
    cout << endl;;

    ListaDupla *l3 = l.concatena(&l2);

    cout << endl;
    cout << endl;

    cout << "Imprimindo Lista 3 (->): " << endl;
    l3->imprimir();
    cout << "Imprimindo Lista 3 (<-): " << endl;
    l3->imprimirReverso();

    cout << endl;
    cout << endl;

    cout << "Partindo lista no 40" << endl;
    ListaDupla *l4 = l3->partir(40);

    cout << endl;
    cout << endl;

    cout << "Imprimindo Lista 4 (->): " << endl;
    l4->imprimir();
    cout << "Imprimindo Lista 4 (<-): " << endl;
    l4->imprimirReverso();

    cout << endl;
    cout << endl;

    return 0;
};

