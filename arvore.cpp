//#include "arvore.h"

//ARVORE::ARVORE()
//{
//    raiz=NULL;
//    tamanho=0;
//}



//bool ARVORE::inserir(Node *no)
//{
//    //SE A ARVORE ESTIVER VAZIA O PONTEIRO RAIZ PASSA A APONTAR PARA O PRIMEIRO ELEMENTO.
//    if(raiz==NULL)
//    {
//        raiz=no;
//    }
//    //SE JA EXISTIR ELEMENTOS NA ARVORE, ENTAO...
//    else
//    {
//        //CRIA UM PONTEIRO AUXILIAR QUE INICIALMENTE APONTA PARA O RAIZ E IRÁ PERCORRER A ARVORE ATÉ ENCONTRAR A ULTIMA POSIÇÃO
//        Node *aux=raiz;
//        if(no.valor < raiz->valor)
//        {
//            //cria uma arvore esquerda
//            ARVORE *esquerda;
//            //a raiz da arvore
//            esquerda->raiz = aux->esquerdo;
//            esquerda->inserir(no);
//        }
//        while(aux->proxima!=NULL)
//        {
//            aux=aux->proxima;
//        }
//        //LOGO SE O ULTIMO ELEMENTO DA ARVORE ESTIVER APONTANDO PARA NULO, ENTÃO ELE PASSA A APONTAR PARA O NOVO ELEMENTO INSERIDO
//        aux->proxima=a;
//    }
//    //INCREMENTA O TAMANHO DA ARVORE
//    tamanhoArvore++;
//    return true;
//}
