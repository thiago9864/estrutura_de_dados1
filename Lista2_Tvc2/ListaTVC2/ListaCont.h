#ifndef LISTACONT_H_INCLUDED
#define LISTACONT_H_INCLUDED

class ListaCont
{
public:
    ListaCont(int tam);
    ~ListaCont();
    float get(int k);
    void set(int k, float val);
    void insereK(int k, float val); // antes de xk
    void insereUlt(float val); // insere ultimo no
    void eliminaK(int k); // elimina no xk
    void eliminaUlt(); // elimina ultimo
    void imprime();
    bool troca (int posicao1 , int posicao2);
    bool aumentaCapacidade (int novoMax );
private:
    int max; // capacidade maxima de elementos
    int ultimo; // indice do ultimo no da lista
    float *x; // vetor que armazena a lista
};

#endif // LISTACONT_H_INCLUDED
