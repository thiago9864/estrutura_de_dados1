#ifndef MATRIZTRIDIAGONAL_H_INCLUDED
#define MATRIZTRIDIAGONAL_H_INCLUDED

class MatrizTriDiagonal
{
private:
    int n;
    float *vet;
    bool verifica(int i, int j);
public:
    MatrizTriDiagonal(int dim);
    ~MatrizTriDiagonal();
    float get(int i, int j);
    void set(int i, int j, int val);
};

#endif // MATRIZTRIDIAGONAL_H_INCLUDED
