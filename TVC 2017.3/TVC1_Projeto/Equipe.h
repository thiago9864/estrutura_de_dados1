#ifndef EQUIPE_H_INCLUDED
#define EQUIPE_H_INCLUDED
#include "Jogador.h"

class Equipe
{
private:
    int n;
    Jogador *jogadores;
public:
    Equipe(int tam);
    ~Equipe();
    void imprimeEquipe();
    int maiorPontuador();
};

#endif // EQUIPE_H_INCLUDED
