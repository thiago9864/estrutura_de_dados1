#ifndef MATRIZTRIINF_H_INCLUDED
#define MATRIZTRIINF_H_INCLUDED

class MatrizTriInf
{
private:
    int n;
    float *vet;
    bool verifica(int i, int j);
public:
    MatrizTriInf(int dim);
    ~MatrizTriInf();
    float get(int i, int j);
    void set(int i, int j, int val);
};

#endif // MATRIZTRIINF_H_INCLUDED
