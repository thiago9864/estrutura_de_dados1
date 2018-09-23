#ifndef MATRIZ2D_H_INCLUDED
#define MATRIZ2D_H_INCLUDED

class Matriz2D
{
public:
    Matriz2D(int nnl, int nnc);
    ~Matriz2D();
    float get(int i, int j);
    void set(int i, int j, float valor);
    void imprime();
private:
    int nl, nc; // numero de linhas e colunas
    float **mat; // array com nl*nc floats
    bool verifica(int i, int j);
};

#endif // MATRIZ2D_H_INCLUDED
