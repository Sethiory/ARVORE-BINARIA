#include "node.h"



Node::Node(int valor)
{
    this->valor = valor;
    this->esquerdo = NULL;
    this->direito = NULL;
}

void Node::imprimir(Node *arvore) {
    if (arvore == NULL) {
        cout << "()";
        return; //Condição de parada, não impimir árvores vazias
    }
        cout << "(";
        cout << arvore->valor; //Escreve o valor da raiz
        imprimir (arvore->esquerdo); //Imprime a subarvore da esquerda
        imprimir (arvore->direito); //Imprime a subarvore da direita
        cout << ")";
}

Node Node::buscar(Node *no, int valor){
    if(valor == no->valor)
        return *no;
    else
    {
        if(valor > no->valor)
            buscar(no->direito,valor);
        else
            buscar(no->esquerdo,valor);
    }
}

void Node::inserir(Node *raiz, int numero) {
    if(numero < raiz->valor)
    {
        if(raiz->esquerdo==0)
        {
            Node *novoFilho = new Node (numero);
            raiz->esquerdo = novoFilho;
        }
        else
        {
            inserir(raiz->esquerdo,numero);
        }
        cout<<"inserido"<<endl;
    }
    if(numero > raiz->valor)
    {
        if(raiz->direito==0)
        {
            Node *novoFilho = new Node(numero);
            raiz->direito = novoFilho;
        }
        else
        {
            inserir(raiz->direito,numero);
        }
        cout<<"inserido";

    }
}

void Node::remover(Node *arvore,int valor)
{
    if(valor == arvore->valor)
    {
        cout<<"IMPRIMINDO OS VALORES DA ESQUERDA E DIREITA"<<endl;

        if((arvore->esquerdo == NULL)&&(arvore->direito == NULL))
        {
            cout<<"NAO TEM FILHOS"<<endl;
            system("pause");
        }
        if(((arvore->esquerdo !=NULL) && (arvore->direito ==NULL)) ||((arvore->esquerdo ==NULL) && (arvore->direito !=NULL)))
        {
            cout<<"NO TEM UM FILHO"<<endl;
            system("pause");
        }
        if((arvore->direito != NULL) && (arvore->esquerdo!=NULL))
        {
            cout<<"NO TEM DOIS FILHOS"<<endl;
            system("pause");
        }
    }
    else
    {
        cout<<"não ha esse valor";
        system("pause");
    }
//    {
//        Node *temp;
//        temp=arvore;
//        arvore = NULL;
//  //      delete[] temp;
//        cout<<"DELETADO!";
//        system("pause");
//    }

//    cout<<"O ENDEREÇO QUE ESTA NA ARVORE EH:"<<arvore<<endl;
//    Node *no=NULL;
//    *no = (arvore->buscar(arvore,valor));
//    if((no->esquerdo == 0)&&(no->direito == 0))
//    {
//        Node *temp = no;
//        no = NULL;
//        delete temp;
//    }
//    cout<<"\t***NO EXCLUIDO!***";
}

