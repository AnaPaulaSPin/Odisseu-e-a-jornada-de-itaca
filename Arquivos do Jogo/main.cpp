#include <iostream>
#include "arquivos.h"
#include "arvore.h"
#include <windows.h>
using namespace std;

void setColor(int cor) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
}

void exibirMenu1() {
    system("cls");
    // Ativa suporte a UTF-8 para emojis e caracteres especiais
    SetConsoleOutputCP(CP_UTF8);
    
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╔════════════════════════════════════════════╗" << endl;
    setColor(6); // Amarelo escuro
    cout << "\t\t\t\t\t\t\t\t     👑 Seja Bem Vindo Glorioso Odisseu 👑   " << endl;
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╠════════════════════════════════════════════╣" << endl;

    setColor(9); // azul claro
    cout << "\t\t\t\t\t\t\t\t║ 1 - Conhecer o seu passado                 ║" << endl;
    cout << "\t\t\t\t\t\t\t\t║ 2 - Regras dos deuses                      ║" << endl;
    cout << "\t\t\t\t\t\t\t\t║ 3 - Continuar a sua jornada                ║" << endl;
    cout << "\t\t\t\t\t\t\t\t║ 4 - Verificar o score da sua jornada       ║" << endl;

    setColor(12); // vermelho claro
    cout << "\t\t\t\t\t\t\t\t║ 5 - Abandonar a sua história               ║" << endl;
 
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╚════════════════════════════════════════════╝" << endl;

    setColor(9); // azul claro
    cout << "Digite uma opção: ";
    setColor(7);  // Cor padrão(Cinza Claro)
   
}

void exibirMenu2(){
    system("cls");
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╔════════════════════════════════════════════╗" << endl;
    setColor(9); // azul claro
    cout << "\t\t\t\t\t\t\t\t║ 1 - Repetir a sua jornada                  ║" << endl;
    cout << "\t\t\t\t\t\t\t\t║ 2 - Informações técnicas                   ║" << endl;
    setColor(12); // vermelho claro
    cout << "\t\t\t\t\t\t\t\t║ 3 - Abandonar a sua história               ║" << endl;
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╚════════════════════════════════════════════╝" << endl;

    setColor(9); // azul claro
    cout << "Digite uma opção: ";
    setColor(7);  // Cor padrão(Cinza Claro)

}

void exibirMenu3(){
    system("cls");
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╔════════════════════════════════════════════════════════════════════════════════╗" << endl;
    setColor(9); // azul claro
    cout << "\t\t\t\t\t\t\t\t║ 1 - Mostrar a lista simplesmente encadeada que dá origem à árvore              ║" << endl;
    cout << "\t\t\t\t\t\t\t\t║ 2 - Listar a árvore em ordem                                                   ║" << endl;
    cout << "\t\t\t\t\t\t\t\t║ 3 - Buscar estáticas de jogo pelo nome do jogador, por número de jogos etc.    ║" << endl;
    cout << "\t\t\t\t\t\t\t\t║ 4 - Voltar ao menu anterior                                                    ║" << endl;
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╚════════════════════════════════════════════════════════════════════════════════╝" << endl;

    setColor(9); // azul claro
    cout << "Digite uma opção: ";
    setColor(7);  // Cor padrão(Cinza Claro)
}

void regras(){
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╔═══════════════════════════════════════════════════════╗" << endl;
    setColor(14); // amarelo escuro
    cout << "\t\t\t\t\t\t\t\t                       📜 Regras 📜            \n                  " << endl;
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t║ Final normal não tem pontuação;                       ║" << endl;
    cout << "\t\t\t\t\t\t\t\t║ Final muito ruim perde 2 pontos;                      ║" << endl;
    cout << "\t\t\t\t\t\t\t\t║ final ruim perde 1 ponto;                             ║" << endl;
    cout << "\t\t\t\t\t\t\t\t║ Final muito bom ganha 2 ponto;                        ║" << endl;
    cout << "\t\t\t\t\t\t\t\t║ Final bom ganha 1 ponto.                              ║" << endl;
    cout << "\t\t\t\t\t\t\t\t╚═══════════════════════════════════════════════════════╝" << endl;
}

void historia(){
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╔═══════════════════════════════════════════════════════╗" << endl;
    setColor(14); // amarelo escuro
    cout << "\t\t\t\t\t\t\t\t             🪶  Sua história até agora 🪶              " << endl;
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╚═══════════════════════════════════════════════════════╝" << endl;
}


//g++ -o main.exe main.cpp

int main(){
    
     int opcao;
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
