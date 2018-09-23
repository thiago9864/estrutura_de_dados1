#ifndef LISTADUPLA_H
#define LISTADUPLA_H

#include "NoDuplo.h"

class ListaDupla
{
    public:
        ListaDupla();
        ~ListaDupla();

        void insereInicio(float val);
        void imprime();
        ListaDupla* particiona(float val);
        void removeMaior();

    private:
        NoDuplo *primeiro;
        int n;
        NoDuplo *ultimo;
};

#endif // LISTADUPLA_H
