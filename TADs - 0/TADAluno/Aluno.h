#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

class Aluno
{
private:
    int mat;
    int qtde;
    float *notas;
    int faltas;
public:
    Aluno(int m, int q);
    ~Aluno();
    void imprime();
    float media();
};

#endif // ALUNO_H_INCLUDED
