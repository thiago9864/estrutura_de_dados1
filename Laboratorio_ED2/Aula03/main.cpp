#include <iostream>

using namespace std;

/** Exercicio 01 **/

/*
int fatorial(int n)
{

    if(n == 0 || n == 1)
    {
        return 0;
    }

    n = n * fatorial(n-1);

    return n;
}

int main()
{

    int n = 0;
    cout << "Fatorial de " << n << ": " << fatorial(n) << endl;

    return 0;
}
*/


/** Exercicio 02 **/

/*
void imprimeIntervalo(int a, int b, int inc)
{
    if(a <= b)
    {
        cout << a << " ";
        imprimeIntervalo(a+inc, b, inc);
    }
}

int main()
{

    imprimeIntervalo(1, 8, 2);
    return 0;
}
*/


/** Exercicio 03 **/

/*
void imprimeDecrescente(int n)
{
    if(n >= 0)
    {
        cout << "n: " << n << endl;
        imprimeDecrescente(n-1);
    }
}

int main()
{

    imprimeDecrescente(10);
    return 0;
}
*/

/** Exercicio 04 **/

/*
#include <iostream>

using namespace std;

float soma(int n, float vetor[])
{
    if(n >= 1)
    {
        int ind = n-1;
        float r = vetor[ind] + soma(ind, vetor);
        cout << r << endl;
        return r;
    }
}

int main()
{

    float vet[5] = {1.0, 6.5, 0.5, 2.2, 6.8};

    float resultado = soma(5, vet);

    cout << "Soma = " << resultado << endl;

    return 0;
}
*/


/** Exercicio 06 **/

/*
float menor_it(int n, float vetor[])
{
    float m = vetor[0];

    for(int i=0; i < n; i++)
    {
        if(vetor[i] < m)
        {
            m = vetor[i];
        }
    }

    return m;
}


float menor_rec(int n, float vetor[])
{

    if(n == 1)
        return vetor[0];
    else
    {
        int i = n-1;
        //cout << "vetor[" << i << "]: " << vetor[i] << endl;
        float m = menor_rec(n-1, vetor);
        //cout << "vetor[" << i << "]: " << vetor[i] << endl;

        if(m < vetor[i])
        {
            return m;
        }
        else
        {
            return vetor[i];
        }
    }

}

int main()
{
    float vet[5] = {1.0, 6.5, 0.5, 2.2, 6.8};

    float resultado = menor_it(5, vet);
    cout << "Menor Iterativo = " << resultado << endl;

    resultado = menor_rec(5, vet);
    cout << "Menor Recursivo = " << resultado << endl;

    return 0;
}
*/

/** Exercicio 07 **/

/*
int contaPares(int n, int vetor[])
{

    if(n == 0)
    {
        return 0;
    }
    else
    {

        int par=0;
        if(vetor[n-1] % 2 == 0)
        {
            par = 1;
        }

        return par + contaPares(n-1, vetor);
    }
}

int main()
{

    int vet[] = {6,2,4,5,3,4,5,6,7,8,9,11,15};//5 pares e 8 impares

    int numPares = contaPares(13, vet);

    cout << "Numero de pares: " << numPares << endl;

    return 0;
}
*/
