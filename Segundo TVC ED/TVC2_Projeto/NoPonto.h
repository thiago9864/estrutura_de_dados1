#ifndef NOPONTO_H
#define NOPONTO_H


class NoPonto
{
    public:
        NoPonto() {}
        ~NoPonto() {}

        float getX() { return x; }
        float getY() { return y; }
        NoPonto* getProx() { return prox; }
        void setX(float xx) { x = xx; }
        void setY(float yy) { y = yy; }
        void setProx(NoPonto *p) { prox = p; }

    private:
        float x, y;
        NoPonto *prox;
};

#endif // NOPONTO_H
