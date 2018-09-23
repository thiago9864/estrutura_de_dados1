#ifndef PILHA_H
#define PILHA_H

class NoPilha;/// https://stackoverflow.com/questions/17333934/class-name-does-not-name-a-type-in-c

class Pilha
{

    private:
        NoPilha *topo;

    public:
        Pilha();
        ~Pilha();

        char getTopo();
        void empilha(char c);
        char desempilha();
        bool vazia();
        void imprime();

};

#endif // PILHA_H
