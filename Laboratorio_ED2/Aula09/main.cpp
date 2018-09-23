#include <iostream>
#include "PilhaEncad.h"
#include "FilaEncad.h"

using namespace std;

float* inverte(float *vet, int n)
{
    PilhaEncad p;
    float *r = new float[n];

    for(int i=0; i < n; i++)
    {
        p.empilha(vet[i]);
    }
    for(int i=0; i < n; i++)
    {
        r[i] = p.desempilha();
    }

    return r;
}

void inverteFila(FilaEncad *f)
{
    PilhaEncad p;

    while(f->vazia() == false)
    {
        p.empilha(f->desenfileira());
    }
    while(p.vazia() == false)
    {
        f->enfileira(p.desempilha());
    }
}

FilaEncad* concatena(FilaEncad *f1, FilaEncad *f2)
{
    FilaEncad *f = new FilaEncad();

    while(f1->vazia() == false)
    {
        f->enfileira(f1->desenfileira());
    }
    while(f2->vazia() == false)
    {
        f->enfileira(f2->desenfileira());
    }

    return f;
}

void removeDaPilha(PilhaEncad *p, float x)
{
    PilhaEncad pa;

    while(p->vazia() == false)
    {
        pa.empilha(p->desempilha());
    }
    while(pa.vazia() == false)
    {
        float valor = pa.desempilha();

        if(valor != x)
        {
            p->empilha(valor);
        }
    }


}

int main()
{
    /// TESTE COM PILHA
    PilhaEncad p;

    for(int i = 0; i < 5; i++) p.empilha(i);
    cout << "Pilha apos inserir 5 valores" << endl;
    p.imprime();
    cout << endl;

    cout << "Tamanho da Pilha: " << p.tamanho() << endl << endl;

    for(int i = 20; i < 25; i++) p.empilha(i);
    cout << "Pilha apos inserir mais 5 valores" << endl;
    p.imprime();
    cout << endl;

    cout << "Tamanho da Pilha: " << p.tamanho() << endl << endl;


    /// TESTE COM FILA

    FilaEncad f;
    FilaEncad f2;

    for(int i=0; i<5; i++)
    {
        f.enfileira(i);
        f2.enfileira(i*2);
    }

    cout << "Fila apos inserir 5 valores" << endl;
    f.imprime();
    cout << endl;

    for(int i = 20; i < 25; i++) f.enfileira(i);
    cout << "Fila apos inserir mais 5 valores" << endl;
    f.imprime();
    cout << endl;

    /// Exercicios

    cout << "Inverte vetor: {";
    float *vet = new float[5];
    for(int i=0; i < 5; i++)
    {
        vet[i] = i*3;
        cout << vet[i] << ", ";
    }
    cout << "}" << endl;

    vet = inverte(vet, 5);

    cout << "Vetor Invertido: {";
    for(int i=0; i < 5; i++)
    {
        cout << vet[i] << ", ";
    }
    cout << "}" << endl;

    cout << "Inverte Fila" << endl;
    f.imprime();
    cout << endl;

    inverteFila(&f);

    cout << "Fila apos inversao" << endl;
    f.imprime();
    cout << endl;

    cout << "Concatena Filas" << endl;
    f.imprime();
    cout << "e" << endl;
    f2.imprime();

    cout << endl;

    cout << "Filas concatenadas" << endl;

    FilaEncad *fc = concatena(&f, &f2);

    fc->imprime();

    cout << endl;

    cout << "Remove o 20 da pilha" << endl;

    removeDaPilha(&p, 20);

    p.imprime();

    return 0;
}
