#ifndef NODUPLO_H_INCLUDED
#define NODUPLO_H_INCLUDED

class NoDuplo
{
public:
    NoDuplo()                { };
    ~NoDuplo()               { } ;
    void setAnt(NoDuplo *p)  { ant = p; };
    void setProx(NoDuplo *p) { prox = p; };
    void setInfo(float val)  { info = val; };
    NoDuplo* getAnt()        { return ant; };
    NoDuplo* getProx()       { return prox; };
    float getInfo()          { return info; };
private:
    NoDuplo *ant;  /// ponteiro para anterior
    float info;    /// informacao do no
    NoDuplo *prox; /// ponteiro para proximo
};
#endif
