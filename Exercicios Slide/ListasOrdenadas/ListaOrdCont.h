#ifndef LISTAORDCONT_H_INCLUDED
#define LISTAORDCONT_H_INCLUDED

class ListaOrdCont
{
public:
    ListaOrdCont(int tam);
    ~ListaOrdCont();
    float get(float val); // busca binaria
    float getPos(int pos); // busca binaria
    void insere(float val); // insere na ordem
    void elimina(float val); // elimina no
    void imprime();
private:
    int max; // capacidade maxima de elementos
    int ultimo; // indice do ultimo no da lista
    float *x; // vetor que armazena a lista
    int buscaBinaria(float val);
};

#endif // LISTAORDCONT_H_INCLUDED
