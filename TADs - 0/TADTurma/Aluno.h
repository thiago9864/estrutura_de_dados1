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
    Aluno();
    ~Aluno();
    void leitura();
    void imprime();
    float media();
    int getFaltas();
};

#endif // ALUNO_H_INCLUDED
