#include <QCoreApplication>
#include "node.h"


int main()
{
    Node *raiz=NULL;
    int opcao,numero;
    bool parar=true;
    while(parar)


    {
        system("cls");
        cout<<"\t _____________________________________________\n"
              "\t|0-SAIR                                       |\n"
              "\t|1-INSERIR                                    |\n"
              "\t|2-EXCLUIR                                    |\n"
              "\t|3-IMPRIMIR                                   |\n"
              "\t|_____________________________________________|\n"<<endl;

        cin>>opcao;
        switch(opcao)
        {
        case 0:
            parar=false;
            break;

        case 1:
            if(raiz==NULL)
            {

                cout<<"INICIAR UMA ARVORE BINARIA! INSIRA O VALOR DA RAIZ:"<<endl;
                cin>>numero;

                raiz = new Node(numero);
            }
            else
            {
                while(numero!=0)
                {
                    cout<<"INSIRA NOVO VALOR NA ARVORE OU DIGITE 0 PARA SAIR:"<<endl;
                    cin>>numero;
                    if(numero!=0)
                        raiz->inserir(raiz,numero);
                }
            }
            break;

        case 2:
            cout<<"INSIRA O VALOR A SER REMOVIDO"<<endl;
            cin>>numero;
            cout<<"O ENDERECO QUE ESTA NA RAIZ EH:"<<raiz<<endl;
            cout<<"O ENDERECO DA RAIZ EH:"<<&raiz<<endl;
            if(raiz != NULL)
            raiz->remover(raiz,numero);
            else
            {
                cout<<"NÃO HÁ NADA NA ARVORE!"<<endl;
                system("pause");
            }
            break;

        case 3:
            raiz->imprimir(raiz);
            system("pause");
            break;
        }
    }

    system("pause");
    return 0;

   }

