#ifndef NODE_H
#define NODE_H


class Node
{
private:

public:
    int D;
    Node *next;
    Node();
    static Node* MontaNO(int *dat);
    static void DesmontaNO(int *dat, Node *p);
};

#endif // NODE_H
