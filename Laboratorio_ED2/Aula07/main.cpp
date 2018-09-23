#include <iostream>
#include <cstdlib> ///rand()
#include <ctime>   ///time()
#include "ListaEncad.h"

using namespace std;

int numAleatorio(int a, int b)
{
    return a + rand()%(b - a + 1) ; /// retorna um numero inteiro aleatório entre a e b
}

int main()
{
    ListaEncad l; /// cria lista vazia
    int NumNos = 12;

    srand(time(NULL));
    /// ATENCAO: os valores inseridos na lista sao gerados
    /// aleatoriamente e mudam em cada execucao do programa!!!
    cout << "Inserindo valores: ";
    for(int i = 1; i <= NumNos; i++)
    {
        float val =  numAleatorio(0, 50); /// cria um valor aleatório entre 0 e 50
        cout << val << ", ";
        l.insereInicio(val);
    }
    cout << endl;

    bool existe = l.busca(20);
    cout << "O valor 20 esta na lista? ";
    if(existe)
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;


    //exercicio 1
    l.imprime();

    cout << "Numero de Nos: " << l.numNos() << endl;
    cout << "Busca Maior que 40: " << l.buscaMaior(40.0) << endl;



    cout << "Calcula Media: " << l.calculaMedia() << endl;

    //l.limpar();

    cout << "Concatenar " << endl;

    ListaEncad *L2 = new ListaEncad();
    L2->insereFinal(1.5);
    L2->insereFinal(4.65);
    L2->insereFinal(9.2);

    ListaEncad *L3 = l.concatena(L2);

    delete L2;

    L3->imprime();

    ListaEncad *L4 = new ListaEncad();

    cout << "Partir lista a partir do " << L3->get(9) << endl;
    L4 = L3->partir(L3->get(9));

    L4->imprime();

    return 0;
};

