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

Node* Node::buscar(Node *no, int valor){
    //Se o nó do parâmetro não for nulo, entra no if
    if(no != NULL)
    {
        //Compara o valor do nó com o valor a ser buscado
        if(no->valor == valor) //Se forem iguais retorna o nó.
            return no;
        else //Se não forem iguais, faz as seguintes verificações...
        {
            if(no->valor > valor) //...o valor buscado é menor que o valor do nó?
            {
                Node *temp;
                temp=buscar(no->esquerdo,valor);
                return temp;
            }
            if(no->valor < valor) //...o valor buscado é maior que o valor do nó?
            {
                Node *temp;
                temp=buscar(no->direito,valor);
                return temp;
            }
        }
    }
    //O nó do parâmetro é nulo, então retorna o nó NULL;
    return no=NULL;
}

Node* Node::pai(Node *filho, Node *raiz){
    if((filho != NULL) && (&filho->valor != &raiz->valor))
    {

        if(filho->valor < raiz->valor)
        {
            if(raiz->esquerdo->valor == filho->valor)
            {
                Node *pai;
                pai = raiz;
                return pai;
            }
            else
            {
                Node *temp;
                temp = pai(filho,raiz->esquerdo);
                return temp;
            }
        }
        if(filho->valor > raiz->valor)
        {
            if(raiz->direito->valor == filho->valor)
            {
                Node *pai;
                pai=raiz;
                return pai;
            }
            else
            {
                Node *temp;
                temp = pai(filho,raiz->direito);
                return temp;
            }
        }
    }
    return raiz=NULL;
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

    }
}

//void Node::remover(Node *arvore, int numero){
//    Node *filho;
//    filho = filho->buscar(arvore,numero);
//    Node *pai;
//    pai = pai->pai(filho, arvore);
//    Node *nulo;
//    nulo = NULL;

//    if((filho != NULL) && (pai != NULL))
//    {
//        if(filho->esquerdo != NULL)
//        {
//            if((filho->esquerdo == NULL) && (filho->direito == NULL))
//            {
//                if(pai->esquerdo->valor == filho->valor)
//                    pai->esquerdo = nulo;
//                if(pai->direito->valor == filho->valor)
//                    pai->direito = nulo;
//            }
//            delete filho;
//        }
//    }
//}



//    Node no=arvore->buscar(arvore,valor);
//    if(valor == no.valor)
//    {
//        if((no.esquerdo == NULL)&&(no.direito == NULL))
//        {
//            cout<<"NAO TEM FILHOS"<<endl;
//            //HÁ UM PROBLEMA AQUI, POIS O PARÂMETRO É UMA VARIÁVEL LOCAL EM QUE PRECISO QUE RECEBA O VALOR NULO PARA RETORNAR Á VARIAVEL REAL.
//            arvore->valor=0;
//            system("pause");
//            return true;
//        }
//        if(((arvore->esquerdo !=NULL) && (arvore->direito ==NULL)) ||((arvore->esquerdo ==NULL) && (arvore->direito !=NULL)))
//        {
//            cout<<"NO TEM UM FILHO"<<endl;
//            system("pause");
//        }
//        if((arvore->direito != NULL) && (arvore->esquerdo!=NULL))
//        {
//            cout<<"NO TEM DOIS FILHOS"<<endl;
//            system("pause");
//        }
//    }
//    else
//    {
//        cout<<"não ha esse valor";
//        system("pause");
//        return false;
//    }
//}

