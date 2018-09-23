#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

class No {

public:
    No(){};
    ~No(){};
    void setEsq(No* e){esq = e;};
    void setDir(No* d){dir = d;};
    void setInfo(int i){info = i;};
    No* getEsq(){return esq;};
    No* getDir(){return dir;};
    int getInfo(){return info;};

private:
    int info;
    No *esq;
    No *dir;
};


#endif // NO_H_INCLUDED
