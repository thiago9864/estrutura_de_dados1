#ifndef MATRIZ3LINHAS_H_INCLUDED
#define MATRIZ3LINHAS_H_INCLUDED

class Matriz3Linhas
{
private:
    int m, n;
    float *vet;
    int detInd(int i, int j);
public:
    Matriz3Linhas(int mm, int nn);
    ~Matriz3Linhas();
    float get(int i, int j);
    void set(int i, int j, float val);
};

#endif // MATRIZ3LINHAS_H_INCLUDED
