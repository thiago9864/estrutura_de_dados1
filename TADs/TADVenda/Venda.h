#ifndef VENDA_H_INCLUDED
#define VENDA_H_INCLUDED

class Venda
{
public:
    Venda(int n);
    ~Venda();
    double calculaTotal();
    double itemMaisCaro();
private:
    int numItensVendidos;
    double *valorItens;
};

#endif // VENDA_H_INCLUDED
