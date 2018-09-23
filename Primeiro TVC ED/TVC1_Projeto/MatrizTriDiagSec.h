#ifndef MATRIZTRIDIAGSEC_H_INCLUDED
#define MATRIZTRIDIAGSEC_H_INCLUDED

class MatrizTriDiagSec
{
public:
    MatrizTriDiagSec(int dim);
    ~MatrizTriDiagSec();
    float consulta(int i, int j);
    void atribui(int i, int j, float val);

private:
    int n;
    float *diagSec, *superDiagSec, *subDiagSec;
    bool verifica(int i, int j);
};

#endif // MATRIZTRIDIAGSEC_H_INCLUDED
