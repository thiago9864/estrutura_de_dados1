#include "Relogio.h"

Relogio::Relogio()
{
    horas = 0;
    minutos = 0;
    segundos = 0;
}
Relogio::Relogio(int h, int m, int s)
{
    acertar(h, m, s);
}
void Relogio::acertar(int h, int m, int s)
{
    horas = h;
    minutos = m;
    segundos = s;
}
int Relogio::getHora()
{
    return horas;
}
int Relogio::getMinuto()
{
    return minutos;
}
int Relogio::getSegundo()
{
    return segundos;
}
void Relogio::tique()
{
    segundos++;
    if(segundos >= 60)
    {
        minutos++;
        segundos -= 60;
    }
    if(minutos >= 60)
    {
        horas++;
        minutos -= 60;
    }
    if(horas > 12)
    {
        horas -= 12;
    }
}
