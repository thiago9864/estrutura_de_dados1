#ifndef LISTAORDENCAD_H_INCLUDED
#define LISTAORDENCAD_H_INCLUDED

class No;

class ListaOrdEncad
{
public:
    ListaOrdEncad();
    ~ListaOrdEncad();
    void insere(int val);
    bool busca(int val);
    void imprime();
private:
    No *primeiro; // ponteiro para o primeiro
};

#endif // LISTAORDENCAD_H_INCLUDED
