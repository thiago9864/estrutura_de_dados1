#ifndef NOPOLINOMIO_H_INCLUDED
#define NOPOLINOMIO_H_INCLUDED

class NoPolinomio
{
    private:
        float coeficiente;
        int expoente;
        NoPolinomio *prox;

    public:
        NoPolinomio() {}
        ~NoPolinomio() {}

        float getCoeficiente() { return coeficiente; }
        void setCoeficiente(float c) { coeficiente = c; }

        int getExpoente() { return expoente; }
        void setExpoente(int e) { expoente = e; }

        void setProx(NoPolinomio *p) { prox = p; }
        NoPolinomio* getProx() { return prox; }
};

#endif // NOPOLINOMIO_H_INCLUDED
