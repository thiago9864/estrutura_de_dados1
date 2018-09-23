#include <iostream>

using namespace std;

/**
Exercicio 1
*/
/*
int main()
{
    int *pt;
    cout << "Endereco de pt: " << &pt << endl;

    //Crie uma variavel inteira  ́ x.
    int x;

    //Leia um valor para x.
    cout << "Digite um valor: ";
    cin >> x;

    //Faça com que pt aponte para x.
    pt = &x;

    //Imprima o conteudo da variavel   pt.
    cout << "Valor de pt: " << *pt << endl;

    //Imprima o endereco de x.
    cout << "Endereco de x: " << &x << endl;

    //Usando apenas o ponteiro pt multiplique x por 10 e altere o seu valor.
    *pt = *pt * 10;

    //Imprima o conteudo apontado por pt.
    cout << "Valor de pt: " << *pt << endl;

    //Some 10 a variavel pt.
    pt = pt + 10;

    //Imprima o conteudo apontado por pt.
    cout << "Valor de pt: " << *pt << endl;

    //Qual e a sáıda? O que significa?
    //O ponteiro passou a apontar para outro lugar, a 40 bytes de distancia do endereco original
    //e assim não hã garantia do valor exibido ser correto.

    return 0;
}
*/

/** Exercicio 2 **/

/*
void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int *pt_a, a, *pt_b, b;

    pt_a = &a;
    pt_b = &b;

    cout << "Digite o valor para 'a': ";
    cin >> a;

    cout << "Digite o valor para 'b': ";
    cin >> b;

    cout << "Antes: a = " << *pt_a << ", b =" << *pt_b << endl;

    troca(pt_a, pt_b);

    cout << "Depois: a = " << *pt_a << ", b =" << *pt_b << endl;

    return 0;
}
*/

/** Exercicio 3 **/

/*
void divisao(int num, int div, int *q, int *r){
    if(div==0){
        cout << "Impossivel dividir por zero!" << endl;
        return;
    }

    *q = num / div;
    *r = num % div;
}

int main(){
    int n, d, q, r;
    int *quociente, *resto;

    quociente = &q;
    resto = &r;

    cout << "Digite um numero inteiro: ";
    cin >> n;

    cout << "Digite o divisor inteiro: ";
    cin >> d;

    divisao(n, d, quociente, resto);

    cout << "Resultado da divisao - quociente: " << *quociente << ", resto: " << *resto << endl;


    return 0;
}
*/


/** Exercicio 4 **/

/*
bool func(int tam, int vet[], int *par, int *impar, int *negativos)
{

    *par = 0;
    *impar = 0;
    *negativos = 0;

    for(int i=0; i < tam; i++)
    {
        if(vet[i] < 0)
        {
            (*negativos)++;
        }
        else if(vet[i] % 2 == 0)
        {
            (*par)++;
        }
        else
        {
            (*impar)++;
        }
    }

    if(*negativos > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int vet[5] = {1,2,-3,4,-5};
    int p, *par, i, *impar, n, *neg;

    par = &p;
    impar = &i;
    neg = &n;

    if(func(5, vet, par, impar, neg))
    {
        cout << "Existem " << *neg << " numeros negativos, " << *par << " numeros pares, " << *impar << " impares, " << endl;
    }
    else
    {
        cout << "Nao existem numeros negativos, " << *par << " numeros pares, " << *impar << " impares, " << endl;
    }
    return 0;
}
*/

/** Exercicio 5 **/

/*
int main()
{
    int n, *p_vet;
    float soma = 0;

    cout << "Digite o numero de itens do vetor: ";
    cin >> n;

    p_vet = new int[n];

    for(int i=0; i < n; i++)
    {
        cout << "Digite o valor para a posicao [" << i << "]: ";
        cin >> p_vet[i];
    }

    for(int i=0; i < n; i++)
    {
        soma += p_vet[i];
    }

    cout << "Media: " << (soma / n) << endl;

    delete [] p_vet;

    return 0;
}
*/


/** Exercicio 6 **/

/*
float prodEscalar(int n, float x[], float y[])
{
    float resultado = 0;

    for(int i=0; i < n; i++)
    {
        resultado += x[i] * y[i];
    }
}

int main()
{
    int n;
    float *vet1, *vet2;

    cout << "Digite o numero de itens dos vetores: ";
    cin >> n;

    vet1 = new float[n];
    vet2 = new float[n];

    cout << "Digite os valores do vetor 1" << endl;

    for(int i=0; i < n; i++)
    {
        cout << "[" << i << "]: ";
        cin >> vet1[i];
    }

    cout << "Digite os valores do vetor 2" << endl;

    for(int i=0; i < n; i++)
    {
        cout << "[" << i << "]: ";
        cin >> vet2[i];
    }

    float res = prodEscalar(n, vet1, vet2);

    cout << "Produto Escalar: " << res << endl;

    delete [] vet1;
    delete [] vet2;


    return 0;
}
*/
