#ifndef TADMATRIZDIAGONAL_H_INCLUDED
#define TADMATRIZDIAGONAL_H_INCLUDED

class TADMatrizDiagonal {

    private:
        int *mat;
        int _n;
        int tam;
        bool verifica(int i, int j);
        int indice(int i, int j);

    public:
        TADMatrizDiagonal(int n);
        ~TADMatrizDiagonal();
        void set(int i, int j, int valor);
        int get(int i, int j);
};

#endif // TADMATRIZDIAGONAL_H_INCLUDED
