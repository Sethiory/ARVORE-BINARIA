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
              "\t|1-BUSCAR NO                                  |\n"
              "\t|2-INSERIR NO                                 |\n"
//              "\t|3-EXCLUIR                                    |\n"
              "\t|4-IMPRIMIR                                   |\n"
              "\t|5-BUSCAR NO  PAI                             |\n"
              "\t|_____________________________________________|\n"<<endl;

        cin>>opcao;
        switch(opcao)
        {
        case 0:{
            parar=false;
            break;}

        case 1:{
            cout<<"INSIRA O VALOR QUE QUER ENCONTRAR:"<<endl;
            cin>>numero;

            //Cria um ponteito auxiliar
            Node *aux;

            //O Ponteiro auxiliar aponta para o nó retornado pelo MÉTODO buscar
            aux=raiz->buscar(raiz,numero);

            //Se não tiver encontrado o valor na árvore, aux recebeu nulo...
            if(aux == NULL)
            {
                cout<<"\t**NAO TEM NO COM ESSE VALOR!"<<endl;
                system("pause");
            }

            //...ou então
            else
            {
                cout<<"\t**VALOR ENCONTRADO! ["<<aux->valor<<"]"<<endl;
                system("pause");
            }
            break;}

        case 2:{
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
                numero=1;
            }
            break;}

//        case 3:{
//            cout<<"INSIRA O VALOR A SER REMOVIDO"<<endl;
//            cin>>numero;

//            Node *remove;
//            remove=raiz->buscar(raiz,numero);
//            if(remove == NULL)
//            {
//                cout<<"NAO TEM ESSE VALOR NA ARVORE!"<<endl;
//            }
//            else
//            {
//                remove->remover(raiz,numero);
//            }
//            break;}

        case 4:{
            raiz->imprimir(raiz);
            system("pause");
            break;}

        case 5:{
            cout<<"INSIRA O VALOR QUE QUER ENCONTRAR O NO PAI:"<<endl;
            cin>>numero;
            Node *buscapai;
            buscapai=raiz->pai(raiz->buscar(raiz,numero),raiz);
            if(buscapai == NULL)
            {
                cout<<"\t**NAO TEM PAI PARA ESSE VALOR!"<<endl;
                system("pause");
            }
            else
            {
                cout<<"\t**O PAI DO VALOR INSERIDO EH: ["<<buscapai->valor<<"]"<<endl;
                system("pause");
            }
            break;}
        }

        }


    system("pause");
    return 0;

}

