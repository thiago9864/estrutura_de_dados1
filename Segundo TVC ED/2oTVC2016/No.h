#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED


class No
{
public:
    No(){}
    ~No(){}

    void setInfo(float val){info = val;}
    float getInfo(){return info;}

    void setProx(No *p){prox = p;}
    No* getProx(){return prox;}

private:
    float info; // informacao do No
    No *prox;
};


#endif // NO_H_INCLUDED
