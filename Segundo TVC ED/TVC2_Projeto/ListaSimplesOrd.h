#ifndef LISTASIMPLESORD_H
#define LISTASIMPLESORD_H

#include "NoPonto.h"


class ListaSimplesOrd
{
    public:
        ListaSimplesOrd();
        ~ListaSimplesOrd();

        void inserir(float x, float y);
        void imprime();

    private:
        NoPonto *primeiro;
};

#endif // LISTASIMPLESORD_H
