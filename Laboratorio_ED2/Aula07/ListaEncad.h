#ifndef LISTAENCAD_H_INCLUDED
#define LISTAENCAD_H_INCLUDED
#include "No.h"

class ListaEncad
{
public:
    ListaEncad();
    ~ListaEncad();
    bool busca(float val);        /// retorna true caso val esteja na lista e false caso contrario
    float get(int k);             /// retorna o valor do k-ésimo elemento
    void set(int k, float val);   /// altera o valor do k-ésimo elemento
    void insereInicio(float val); /// insere um novo No contendo val no início da lista
    void insereFinal(float val);  /// insere um novo No contendo val no final da lista
    void eliminaInicio();         /// elimina o primeiro No da lista
    void eliminaFinal();          /// elimina o último No da lista

    //exercicio 1
    void imprime();
    int numNos();
    int buscaMaior(float val);
    void limpar();
    float calculaMedia();
    ListaEncad* concatena(ListaEncad *L2);
    No* getNo(int k);
    ListaEncad* partir(float x);


private:
    No *primeiro;  /// ponteiro para o primeiro No da lista
    No *ultimo;    /// ponteiro para o ultimo No da lista
    int n;         /// numero de nos na lista
};
#endif
