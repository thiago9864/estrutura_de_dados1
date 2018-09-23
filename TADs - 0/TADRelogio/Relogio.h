#ifndef RELOGIO_H_INCLUDED
#define RELOGIO_H_INCLUDED

class Relogio
{
public:
    Relogio();
    Relogio(int h, int m, int s);
    void acertar(int h, int m, int s);
    int getHora();
    int getMinuto();
    int getSegundo();
    void tique();
private:
    int horas, minutos, segundos;
};

#endif // RELOGIO_H_INCLUDED
