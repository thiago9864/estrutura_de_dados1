#ifndef MATRIZDIAGONAL_H_INCLUDED
#define MATRIZDIAGONAL_H_INCLUDED

class MatrizDiagonal
{
private:
    int n;
    float *vet;
    bool verifica(int i, int j);
public:
    MatrizDiagonal(int dim);
    ~MatrizDiagonal();
    float get(int i, int j);
    void set(int i, int j, int val);
};

#endif // MATRIZDIAGONAL_H_INCLUDED
