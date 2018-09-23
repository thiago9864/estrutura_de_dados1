#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED
#include <cstdlib>

class Jogador
{
private:
    int numero;
    int pontos;
public:
    Jogador() { numero = rand()%20+1; pontos = rand()%40+1; };
    ~Jogador() { };
    int getNumero() { return numero; };
    void setNumero(int n) { numero = n; };
    int getPontos() { return pontos; };
    void setPontos(int p) {pontos = p; };
};

#endif // JOGADOR_H_INCLUDED
