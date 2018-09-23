#ifndef NOFILA_H_INCLUDED
#define NOFILA_H_INCLUDED
#include "No.h"

class NoFila
{
private:
    No* info;
    NoFila* prox;
public:
    NoFila()                    {};
    ~NoFila()                   {};
    void setInfo(No* val) { info = val; };
    void setProx(NoFila* p)     { prox = p; };
    No* getInfo()         { return info; };
    NoFila* getProx()          { return prox; };
};

#endif // NOFILA_H_INCLUDED
