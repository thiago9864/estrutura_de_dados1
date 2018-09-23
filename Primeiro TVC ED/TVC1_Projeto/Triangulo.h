#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

class Triangulo
{
public:
    Triangulo(float x1, float y1, float x2, float y2, float x3, float y3);
    ~Triangulo();
    int tipo();
    float areaEq();
private:
    Ponto *p1, *p2, *p3;
};

#endif // TRIANGULO_H_INCLUDED
