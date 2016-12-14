#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node
{
public:
    int valor;
    Node *esquerdo;
    Node *direito;

    Node(int valor);
    void imprimir(Node *arvore);
    void inserir (Node *raiz, int valor);
    void remover (Node *arvore, int valor);
};

#endif // NODE_H
