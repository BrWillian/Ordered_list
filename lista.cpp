#include "lista.h"

Lista::Lista()
{
    head = nullptr;
}
bool Lista::insere(int *dat)
{
    Node *p = Node::MontaNO(dat);

    if(!p)
    {
        return false;
    }
    int k = *dat;
    Node **aux = &head;
    while((*aux) && k < (*aux)->D)
    {
        aux = &(*aux)->next;
    }
    p->next = *aux;
    *aux = p;
    return true;
}
bool Lista::remove(int *dat, int k)
{
    Node **p = &head;

    while((*p) && k < (*p)->D)
    {
        p = &(*p)->next;
    }
    if(!(*p) && k != (*p)->D)
    {
        return false;
    }
    Node *aux = *p;
    *p = aux->next;
    Node::DesmontaNO(dat, aux);
    return true;
}
bool Lista::search(int *dat, int k)
{
    Node *p = head;

    while(p && p->D > k)
    {
        p = p->next;
    }
    if(p && p->D == k)
    {
        *dat = p->D;
        return true;
    }
    return false;
}
