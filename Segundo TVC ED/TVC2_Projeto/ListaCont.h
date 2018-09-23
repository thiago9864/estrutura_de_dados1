#ifndef LISTACONT_H
#define LISTACONT_H


class ListaCont
{
    public:
        ListaCont(int tam);
        ~ListaCont();

        void insereUlt(int val);
        int contaValores(int val);
        void imprime();

    private:
        int *x;
        int max;
        int ultimo;
};

#endif // LISTACONT_H
