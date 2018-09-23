#ifndef TADMATRIZTRIANGULAR_H_INCLUDED
#define TADMATRIZTRIANGULAR_H_INCLUDED

class TADMatrizTriangular {

private:
    int *mat;
    int _n;
    int tam;
    bool verifica(int i, int j);
    int indice(int i, int j);

public:
    TADMatrizTriangular(int n);
    ~TADMatrizTriangular();
    void set(int i, int j, int valor);
    int get(int i, int j);

};


#endif // TADMATRIZTRIANGULAR_H_INCLUDED
