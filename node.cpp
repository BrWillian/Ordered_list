#include "node.h"

Node::Node()
{

}
Node *Node::MontaNO(int *dat)
{
    Node *p = new Node;

    if(p)
    {
        p->D = *dat;
        p->next = nullptr;
    }

    return p;
}
void Node::DesmontaNO(int *dat, Node *p)
{
    if(p)
    {
        *dat = p->D;
        delete p;
    }

}
