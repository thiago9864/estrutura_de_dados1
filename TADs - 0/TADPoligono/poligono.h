#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED

class Poligono
{
private:
    int numLados; // numero de lados do poligono
    float tamLado; // tamanho de cada lado
public:
    Poligono(int n, int l);
    ~Poligono();
    float area(); // calcula area
    float perimetro(); // calcula perimetro
    float angInterno(); // calcula angulo interno
    void alteraNumLados(int n);
    int consultaNumLados();
};

#endif // POLIGONO_H_INCLUDED
