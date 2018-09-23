#include <iostream>
#include <cmath>

using namespace std;

/* Slide Aula 01*/

/*
Exercicio 01  ́
*/
/*
int main()
{
    int N;
    float F, soma = 0;
    cout << "Digite um numero inteiro: ";
    cin >> N;

    for(int i=1; i <= N; i++)
    {
        cout << "Numero Real #" << i << ": ";
        cin >> F;
        soma += F;
    }

    cout << "Média: " << (soma / N) << endl;


    return 0;
}
*/

/*
Exercicio 02
*/

/*
void leCalculaMedia(int n){
    float F, soma = 0;

    for(int i=1; i <= n; i++)
    {
        cout << "Numero Real #" << i << ": ";
        cin >> F;
        soma += F;
    }

    return soma / n;
}

int main()
{
    int N;
    cout << "Digite um numero inteiro: ";
    cin >> N;

    float r = leCalculaMedia(N);

    cout << "Média: " << r << endl;

    return 0;
}
*/


/*
Exercicio 03
*/

/*
float leVetorCalculaMedia(int n, float vet[]){
    float soma = 0;
    for(int i=0; i<n; i++){
        cout << "Valor " << i << ": ";
        cin >> vet[i];
        soma += vet[i];
    }
    return soma/n;
}

int main(){
    float v[5];
    cout << "Media: " << leVetorCalculaMedia(5, v);
    return 0;
}
*/


/*
Exercicio 04
*/

/*
int procuraCharNaString(string str, char ch){
    for(int i=0; i < str.size(); i++){
        if(str[i] == ch){
            return i;
        }
    }
    return -1;
}

int main(){
    char procurar;
    string str;

    cout << "Digite uma linha de texto: ";
    getline(cin, str);
    cout << "Digite um caracter para procurar: ";
    cin >> procurar;

    int pos = procuraCharNaString(str, procurar);
    if(pos != -1){
        cout << "Caracter encontrado na posicao " << pos << "!" << endl;
    } else {
        cout << "Caracter nao encontrado!" << endl;
    }
    return 0;
}
*/

/*
Exercicio 05
*/

/*
bool ehPrimo(int n) {
    for(int i=2; i< n/2; i++){
        if(i != n && n%i == 0){
            return false;
        }
    }
    return true;
}

int main (){
    int N;
    cout << "Digite um numero inteiro: ";
    cin >> N;
    if(ehPrimo(N)){
        cout << "O numero é primo" << endl;
    } else {
        cout << "O numero nao é primo" << endl;
    }
    return 0;
}
*/

/*
Exercicio 06
*/

/*
int main(){

    bool X, Y, Z;
    cout << "Digite 1 para true ou 0 para false: " << endl << "X: ";
    cin >> X;
    cout << "Y: ";
    cin >> Y;
    cout << "Z: ";
    cin >> Z;

    bool operacao1 = (X && Y) || (X && !Z);
    bool operacao2 = (X || Y) && (!X && Z);

    if(operacao1){
        cout << "(X && Y) || (X && !Z) = true" << endl;
    } else {
        cout << "(X && Y) || (X && !Z) = false" << endl;
    }

    if(operacao2){
        cout << "(X || Y) && (!X && Z) = true" << endl;
    } else {
        cout << "(X || Y) && (!X && Z) = false" << endl;
    }

    return 0;
}
*/

/*
Exercicio 07
*/

/*
int fatorial(int n){
    int fat = 1;
    for(int i=2; i <= n; i++){
        fat *= i;
    }
    return fat;
}

int main(){
    int N;
    cout << "Digite um numero inteiro maior que zero: ";
    cin >> N;

    cout << N << "! = " << fatorial(N);
    return 0;
}
*/

/*
Exercicio 08
*/

int main(){

    int N;
    float X, soma = 0;
    cout << "Digite um numero inteiro: " << endl;
    cin >> N;
    cout << "Digite um numero real X: ";
    cin >> X;

    for(int i=0; i <= N; i++){
        soma += pow(X, i);
    }
    cout << "Resultado do somatorio: " << soma << endl;
    return 0;
}
