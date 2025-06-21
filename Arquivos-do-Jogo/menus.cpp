#include "menus.hpp"
#include <iostream>
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
