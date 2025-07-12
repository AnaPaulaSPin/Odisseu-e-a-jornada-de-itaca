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
    cout << "\t\t\t\t\t\t\t\t║ 1 - Conhecer o seu passado                 ║" << endl; //Conhecer a História do Jogo; 
    cout << "\t\t\t\t\t\t\t\t║ 2 - Regras dos deuses                      ║" << endl; //Regras do Jogo; 
    cout << "\t\t\t\t\t\t\t\t║ 3 - Continuar a sua jornada                ║" << endl; //Jogar; 
    cout << "\t\t\t\t\t\t\t\t║ 4 - Rank global                            ║" << endl; //Verificar o Score do jogo

    setColor(12); // vermelho claro
    cout << "\t\t\t\t\t\t\t\t║ 5 - Abandonar a sua história               ║" << endl; //Sair.
 
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
    cout << "\t\t\t\t\t\t\t\t║ 1 - Repetir a sua jornada                  ║" << endl; //Jogar novamente; 
    cout << "\t\t\t\t\t\t\t\t║ 2 - Informações técnicas                   ║" << endl; //Informações Técnicas; 
    setColor(12); // vermelho claro
    cout << "\t\t\t\t\t\t\t\t║ 3 - Abandonar a sua história               ║" << endl; //Sair.
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╚════════════════════════════════════════════╝" << endl;

    setColor(9); // azul claro
    cout << "Digite uma opção: ";
    setColor(7);  // Cor padrão(Cinza Claro)

}

void exibirMenu3(){
    system("cls");
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╔══════════════════════════════════════════════════════╗" << endl;
    setColor(9); // azul claro
    cout << "\t\t\t\t\t\t\t\t║ 1 - Verificar a lista simplesmente encadeada         ║" << endl; //Mostrar a lista simplesmente encadeada que dá origem à árvore;
    cout << "\t\t\t\t\t\t\t\t║ 2 - Verificar a árvore em ordem                      ║" << endl; //Listar a árvore em ordem;
    cout << "\t\t\t\t\t\t\t\t║ 3 - Buscar estáticas de jogo pelo nome do jogador    ║" << endl;
    cout << "\t\t\t\t\t\t\t\t║ 4 - Voltar ao menu anterior                          ║" << endl; //Buscar estáticas de jogo pelo nome do jogador, 
    setColor(1); // Azul escuro
    cout << "\t\t\t\t\t\t\t\t╚══════════════════════════════════════════════════════╝" << endl; //Voltar ao menu anterior.

    setColor(9); // azul claro
    cout << "Digite uma opção: ";
    setColor(7);  // Cor padrão(Cinza Claro)
}

void regras(){
    setColor(1); // Azul escuro
    cout << "\t\t\t\t╔════════════════════════════════════════════════════════════════════╗" << endl;
    setColor(14); // amarelo escuro
    cout << "\t\t\t\t                            📜 Regras 📜            \n                  " << endl;
    setColor(1); // Azul escuro
    cout << "\t\t\t\t║ 1) Você é único, ao sair do jogo, seu nome estará salvo            ║" << endl;
    cout << "\t\t\t\t║ nas listas dos deuses e não poderá mais ser usado.                 ║" << endl;
    cout << "\t\t\t\t║ 2) Tipos de Finais:                                                ║" << endl;
    cout << "\t\t\t\t║    2.1 Final normal não tem pontuação,                             ║" << endl;
    cout << "\t\t\t\t║    2.2 Final muito ruim perde 2 pontos;                            ║" << endl;
    cout << "\t\t\t\t║    2.3 final ruim perde 1 ponto;                                   ║" << endl;
    cout << "\t\t\t\t║    2.4 Final muito bom ganha 2 ponto;                              ║" << endl;
    cout << "\t\t\t\t║    2.5 Final bom ganha 1 ponto.                                    ║" << endl;
    cout << "\t\t\t\t║ 3) A cada final que voce chegar aumenta em 1 o número de jogos.    ║" << endl;
    cout << "\t\t\t\t║ 4) Você não pode voltar atrás em uma escolha, pense com cuidado.   ║" << endl;
    cout << "\t\t\t\t╚════════════════════════════════════════════════════════════════════╝" << endl;
}

void historia(){
    setColor(1); // Azul escuro
    cout << "\t\t\t╔══════════════════════════════════════════════════════════════════════════════════════════════════════════╗" << endl;
    setColor(14); // amarelo escuro
    cout << "\t\t\t\t\t\t             🪶  Sua história até agora 🪶              "                                            << endl;
    setColor(1); // Azul escuro
    cout << "\t\t\t║                                                                                                          ║" << endl;
    cout << "\t\t\t║   Você é Odisseu, rei de Ítaca e herói da Guerra de Tróia. Após dez anos de batalhas sangrentas,         ║" << endl;
    cout << "\t\t\t║ a guerra finalmente chegou ao fim, e agora tudo o que você deseja é voltar para casa, ao encontro        ║" << endl;
    cout << "\t\t\t║ da sua esposa Penélope e de seu filho Telêmaco.                                                          ║" << endl;
    cout << "\t\t\t║   Mas o caminho até a sua casa está longe de ser seguro.                                                 ║" << endl;
    cout << "\t\t\t║   Você pode enfrentar monstros, tempestades, armadilhas... e o mais perigoso: a fúria dos deuses.        ║" << endl;
    cout << "\t\t\t║   Os deuses do Olimpo estão observando cada passo seu. Suas decisões podem mudar o rumo de tudo — não    ║" << endl;
    cout << "\t\t\t║ só o seu destino, mas o de toda a sua tripulação.                                                        ║" << endl;
    cout << "\t\t\t║   Seu objetivo é claro: chegar em casa com vida. Se possível, com seus homens ao seu lado.               ║" << endl;
    cout << "\t\t\t╚══════════════════════════════════════════════════════════════════════════════════════════════════════════╝" << endl;
}




