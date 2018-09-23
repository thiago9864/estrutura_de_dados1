#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

class No
{
private:
    float info; /// valor real armazenado no No
    No *prox;   /// ponteiro para o proximo No
public:
    No()                    { };
    ~No()                   { };
    float getInfo()         { return info; };
    No* getProx()           { return prox; };
    void setInfo(float val) { info = val; };
    void setProx(No *p)     { prox = p; };
};
#endif // NO_H_INCLUDED
