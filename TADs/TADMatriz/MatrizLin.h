#ifndef MATRIZLIN_H_INCLUDED
#define MATRIZLIN_H_INCLUDED

class MatrizLin
{
public:
    MatrizLin(int m, int n);
    ~MatrizLin();
    float get(int i, int j);
    void set(int i, int j, float val);
    void imprime();
    int getLinhas();
    int getColunas();
private:
    int nl, nc; // numero de linhas e colunas
    float *vet; // vetor de tamanho nl*nc
    int detInd(int linha, int coluna);
};

#endif // MATRIZLIN_H_INCLUDED
