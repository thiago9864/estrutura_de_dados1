#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

class No
{
  public:
    No()                  { };
    ~No()                 { };
    void setEsq(No *p)    { esq = p; };
    void setInfo(int val) { info = val; };
    void setDir(No *p)    { dir = p; };
    No* getEsq()          { return esq; };
    int getInfo()         { return info; };
    No* getDir()          { return dir; };

  private:
    No *esq;  // ponteiro para o filho a esquerda
    int info; // informa��o do No (int)
    No *dir;  // ponteiro para o filho a direita
};

#endif // NO_H_INCLUDED
