#include <iostream>
#include "arquivos.hpp"
#include "arvore.hpp"
#include "lista_duplamente.hpp"
#include "menus.hpp"
#include <windows.h>
using namespace std;

ListaSimples lista;

//g++ -o main.exe main.cpp

int main(){
    
     int opcao;
     carregarListaDeArquivo(lista,"dados.txt");
     lista.imprimirElemento();
     
     system("pause");
     system("cls");

    do{
        exibirMenu1();
       
        cin >> opcao;  
        switch (opcao) {
        SetConsoleOutputCP(CP_UTF8);

        case 1:
            system("cls");
            historia();
            system("pause");         // Espera o usuário ver
            break;

        case 2:
            system("cls");
            regras();  
            system("pause");         // Espera o usuário ver       
            break;

        case 3:
            system("cls");
            cout << "\n Continuar a sua jornada ...\n";
            int subOpcao;
            do{
                exibirMenu2();
                cin >> subOpcao;

            switch (subOpcao) {
                case 1:
                system("cls");
                cout << "\n Repetir a sua jornada  ...\n";
                break;

                case 2:
                system("cls");
                 cout << "\n Informações técnicas  ...\n";
                 int subSubOpcao;
                 do{
                    exibirMenu3();
                    cin >> subSubOpcao;
                    switch (subSubOpcao) {
                        case 1:
                        system("cls");
                        cout << "\n Mostrar a lista simplesmente encadeada que dá origem à árvore ...\n";
                        break;

                        case 2:
                        system("cls");
                        cout << "\n Listar a árvore em ordem  ...\n";
                        break;

                        case 3:
                        system("cls");
                        cout << "\n  Buscar estáticas de jogo pelo nome do jogador, por número de jogos etc.  ...\n";
                        break;

                        case 4:
                        system("cls");
                        cout << "\n Voltar ao menu anterior ...\n";
                        break;

                        default:
                        system("cls");
                        cout << "❌ Sub-opção inválida.\n";
                        system("pause");         // Espera o usuário ver

                    }

                }while(subSubOpcao != 4);
                break;

            case 3: 
            system("cls");
                 cout << "\n Abandonar a sua história ...\n";
                 exit(0);

            default:
            system("cls");
                 cout << "❌ Sub-opção inválida.\n";
                 system("pause");         // Espera o usuário ver
                 

            }
            }while(subOpcao !=1);
            
            break;

        case 4:
            system("cls");
            cout << "\n Verificar o score da sua jornada ...\n";
            break;
        case 5:
            system("cls");
            cout << "\n Abandonar a sua história ...\n";
            break;
        default:
            system("cls");
            cout << "\n❌ Opção inválida.\n";
            system("pause");         // Espera o usuário ver
    }

    }while(opcao!=5);
    
    return 0;

}
