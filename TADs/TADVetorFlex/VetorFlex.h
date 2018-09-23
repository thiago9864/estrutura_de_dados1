#ifndef VETORFLEX_H_INCLUDED
#define VETORFLEX_H_INCLUDED

class VetorFlex
{
public:
    VetorFlex(int cc, int ff);
    ~VetorFlex();
    float get(int indice);
    void set(int indice, float valor);
private:
    int c, f;
    int n; // tamanho do vetor
    float *vet; // array que armazena n floats
    int detInd(int indice);
};

#endif // VETORFLEX_H_INCLUDED
