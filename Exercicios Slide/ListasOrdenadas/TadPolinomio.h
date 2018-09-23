#ifndef TADPOLINOMIO_H_INCLUDED
#define TADPOLINOMIO_H_INCLUDED

class {
public:
    TadPolinomio();
    ~TadPolinomio();
    void inserir(float coeficiente, int expoente);
    void soma(TadPolinomio *pol);
    void imprimir();

private:
    NoPolinomio *primeiro;

};


#endif // TADPOLINOMIO_H_INCLUDED
