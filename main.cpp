#include <iostream>
#include <lista.h>

using namespace std;

int main()
{
    Lista lista;

    int elemento = 1;
    int elemento2 = 2;
    int elemento3 = 3;

    int result;

    lista.insere(&elemento);

    lista.insere(&elemento3);

    lista.search(&result, 1);

    lista.remove(&result, 3);

    cout<<result;

}
