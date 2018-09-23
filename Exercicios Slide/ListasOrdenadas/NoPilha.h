#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

class NoPilha
{
    private:
        char info;
        NoPilha *prox;

    public:
        NoPilha() {}
        ~NoPilha() {}

        char getInfo() { return info; }
        void setInfo(char c) { info = c; }
        void setProx(NoPilha *p) { prox = p; }
        NoPilha* getProx() { return prox; }


};

#endif // NO_H_INCLUDED
