#ifndef TADFILACIRC_H_INCLUDED
#define TADFILACIRC_H_INCLUDED

class TadFilaCirc
{
private:
    int *x;
    int c, f, n, maximo;

public:
    TadFilaCirc(int tam);
    ~TadFilaCirc();

    void entra(int valor);
    int sai();
    void imprime();
};

#endif // TADFILACIRC_H_INCLUDED
