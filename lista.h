#ifndef LISTA_H
#define LISTA_H
#include <node.h>

class Lista
{
private:
    Node *head;
public:
    Lista();
    bool insere(int *dat);
    bool remove(int *dat, int k);
    bool search(int *dat, int k);
};

#endif // LISTA_H
