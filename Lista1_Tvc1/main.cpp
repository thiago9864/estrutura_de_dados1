#include <iostream>

using namespace std;

/** 18 **/

/*
int main()
{
    int n;
    float *vet, media = 0;

    cout << "Digite o numero de itens do vetor: ";
    cin >> n;

    vet = new float[n];

    for(int i=0; i < n; i++)
    {
        cout << "Digite o valor para a posicao [" << i << "]: ";
        cin >> vet[i];
    }

    for(int i=0; i < n; i++)
    {
        media += vet[i];
    }

    cout << "Media: " << (media / n) << endl;

    delete [] vet;

    return 0;
}
*/

/** 19 **/

/*
float calculaMedia(int n, float *vet)
{
    float media = 0;

    for(int i=0; i < n; i++)
    {
        media += vet[i];
    }

    return media / n;
}

int main()
{
    int n;
    float *vet, media = 0;

    cout << "Digite o numero de itens do vetor: ";
    cin >> n;

    vet = new float[n];

    for(int i=0; i < n; i++)
    {
        cout << "Digite o valor para a posicao [" << i << "]: ";
        cin >> vet[i];
    }

    cout << "Media: " << calculaMedia(n, vet) << endl;

    delete [] vet;

    return 0;
}
*/


/** 20 **/

/*
float* alocaVetorF(int n)
{

    //cria o vetor na HEAP
    float *vet = new float[n];

    //verifica se deu erro (tem no enunciado pedindo isso)
    if(vet == NULL)
    {
        cout << "Ocorreu um erro ao alocar o vetor" << endl;
    }

    //retorna o endereço do vetor na HEAP
    return vet;
}
double* alocaVetorD(int n)
{
    //cria o vetor na HEAP
    double *vet = new double[n];

    //verifica se deu erro (tem no enunciado pedindo isso)
    if(vet == NULL)
    {
        cout << "Ocorreu um erro ao alocar o vetor" << endl;
    }

    //retorna o endereço do vetor na HEAP
    return vet;
}

int main()
{
    // cria os ponteiros
    float *vf;
    double *vd;

    //recebe os endereços retornados pelas funções
    vf = alocaVetorF(100);
    vd = alocaVetorD(1000);

    return 0;
}
*/


/** 21 **/

/*
void alocaVetorF2(int n, float *v)
{

    //cria o vetor na HEAP
    v = new float[n];

    //verifica se deu erro (tem no enunciado pedindo isso)
    if(v == NULL)
    {
        cout << "Ocorreu um erro ao alocar o vetor" << endl;
    }
}
void alocaVetorD2(int n, double *v)
{
    //cria o vetor na HEAP
    v = new double[n];

    //verifica se deu erro (tem no enunciado pedindo isso)
    if(v == NULL)
    {
        cout << "Ocorreu um erro ao alocar o vetor" << endl;
    }
}

int main()
{
    float *vf;
    double *vd;

    alocaVetorF2(100, vf);
    alocaVetorD2(100, vd);

    return 0;
}
*/


/** 22 **/

/*
float* calculaSoma(int n, float a[], float b[])
{
    float *result = new float[n];

    if(sizeof(a)/8 != sizeof(b)/8)
    {
        cout << "Os vetores tem tamanhos diferentes" << endl;
    }

    for(int i=0; i < n; i++)
    {
        result[i] = a[n] + b[n];
    }

    return result;
}

int main()
{

    float vetA[3] = {1.4, 2.1, 3.3};
    float vetB[4] = {1.4, 2.1, 3.3, 4.6};

    float *resultado = calculaSoma(3, vetA, vetB);

    return 0;
}
*/


/** 23 **/

/*
float** alocaMatrizF(int m, int n)
{

    float **mt = new float*[m];

    for(int i=0; i<m; i++)
    {

        mt[i] = new float[n];

        for(int j=0; j<n; j++)
        {
            mt[i][j] = 0;
        }

    }

    return mt;
}

void imprimeMatriz(float **matriz, int m, int n)
{

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

}

int main()
{

    float **m = alocaMatrizF(3, 3);

    imprimeMatriz(m, 3, 3);

    return 0;
}
*/

/** 24 **/

/*
float** alocaMatrizF(int m, int n)
{

    float **mt = new float*[m];

    for(int i=0; i<m; i++)
    {

        mt[i] = new float[n];

        for(int j=0; j<n; j++)
        {
            mt[i][j] = 0;
        }

    }

    return mt;
}

void imprimeMatriz(float **matriz, int m, int n)
{

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

}

float** transposta(int m, int n, float **mat)
{
    float ** m_tr = alocaMatrizF(n, m);

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            m_tr[j][i] = mat[i][j];
        }
    }

    return m_tr;
}

int main()
{

    float ** m_tr = alocaMatrizF(3, 2);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            m_tr[i][j] = i+j;
        }
    }

    imprimeMatriz(m_tr, 3, 2);

    float **transp = transposta(3, 2, m_tr);

    imprimeMatriz(transp, 2, 3);

    return 0;
}
*/


/** 25 **/


/*
int soma(int n) {

    if(n==1){
        return 1;
    }

    int s = n + soma(n-1);

    return s;
}

int main (){
    int v_soma = soma(5);

    cout << "Soma: " << v_soma << endl;

    return 0;
}
*/


/** 26 **/

//8+7+6+5+4+3+2

/*
int soma(int a, int b)
{

    if(b==a)
    {
        return a;
    }

    int s = b + soma(a, b-1);

    return s;
}

int main ()
{
    int v_soma = soma(2,8);//35

    cout << "Soma: " << v_soma << endl;

    return 0;
}
*/

/** 27 **/

/*
int numDigitos(int n)
{

    if(n < 10)
    {
        return 1;
    }

    return 1 + numDigitos(n/10);
}

int main()
{

    int teste = 1234567; //6 digitos

    int nd = numDigitos(teste);

    cout << "Num. Digitos: " << nd << endl;

    return 0;
}
*/

/** 28 **/

/*
bool ehPalindromoIt(char a[], int n)
{

    for(int i=0; i < n/2; i++)
    {
        if(a[i] != a[n-i-1])
        {
            return false;
        }
    }

    return true;
}



bool ehPalindromoRecAux(char a[], int n, int i)
{

    if(i == 0)
    {
        return true;
    }
    //cout << "i: " << i;

    char L = a[i];
    char R = a[n-i-1];

    if(L==R && ehPalindromoRecAux(a, n, i-1))
    {
        return true;
    }
    else
    {
        return false;
    }

}
bool ehPalindromoRec(char a[], int n)
{
    return ehPalindromoRecAux(a, n, n/2);
}

int main()
{
    char teste1[] = "ovo";
    char teste2[] = "arara";
    char teste3[] = "mussum";
    char teste4[] = "programacao";
    char teste5[] = "anavitoria";

    cout << "Iterativo" << endl << endl;

    cout << "Palindromo 1: " << ehPalindromoIt(teste1, 3) << endl;
    cout << "Palindromo 2: " << ehPalindromoIt(teste2, 5) << endl;
    cout << "Palindromo 3: " << ehPalindromoIt(teste3, 6) << endl;
    cout << "Palindromo 4: " << ehPalindromoIt(teste4, 11) << endl;
    cout << "Palindromo 5: " << ehPalindromoIt(teste5, 10) << endl << endl;

    cout << "Recursivo" << endl << endl;

    cout << "Palindromo 1: " << ehPalindromoRec(teste1, 3) << endl;
    cout << "Palindromo 2: " << ehPalindromoRec(teste2, 5) << endl;
    cout << "Palindromo 3: " << ehPalindromoRec(teste3, 6) << endl;
    cout << "Palindromo 4: " << ehPalindromoRec(teste4, 11) << endl;
    cout << "Palindromo 5: " << ehPalindromoRec(teste5, 10) << endl;


    return 0;
}
*/

/** 29 **/

/*
bool buscaBinariaAux(int vet[], int n, int chave, int a, int b)
{

    int i = ((b-a)/2) + a;//meio do segmento

    if(a==i || vet[i] == chave) //casos base
    {
        if(vet[i]==chave)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //cout << "i: " << i << " a: " << a << " b: " << b << endl;

    if(vet[i] < chave) //reorganza indices
    {
        a = i;
    }
    else
    {
        b = i;
    }

    //cout << "i: " << i << " a: " << a << " b: " << b << endl;

    //cout << "-----" << endl;
    return buscaBinariaAux(vet, n, chave, a, b);
}

bool buscaBinaria(int vet[], int n, int chave)
{
    buscaBinariaAux(vet, n, chave, 0, n);
}

int main()
{
    int vet[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    if(buscaBinaria(vet, 15, 22))
    {
        cout << "A chave1 existe" << endl;
    }
    else
    {
        cout << "A chave1 nao existe" << endl;
    }

    if(buscaBinaria(vet, 15, 8))
    {
        cout << "A chave2 existe" << endl;
    }
    else
    {
        cout << "A chave2 nao existe" << endl;
    }

    if(buscaBinaria(vet, 15, 3))
    {
        cout << "A chave2 existe" << endl;
    }
    else
    {
        cout << "A chave2 nao existe" << endl;
    }

    return 0;
}
*/

/** 30 **/

/// a) n+1
/// b) sqrt(n)
/// c) n * (n / 2) + 1
/// d) sqrt(n)
/// e) n^2 + 1
/// f) (n * (n + 1) / 2) + 2
/// g) n^3 + 2

/** 31 **/

/*
int fatorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n * fatorial(n-1);
}

int main()
{

    cout << "Fatorial: " << fatorial(5) << endl;
    cout << "Tempo: 3n + 1" << endl;
    return 0;
}
*/

/** 32 **/

/// a funcao calcula n
/// n+3

/** 33 **/

/** 34 **/

/** 35 **/

/** 36 **/


