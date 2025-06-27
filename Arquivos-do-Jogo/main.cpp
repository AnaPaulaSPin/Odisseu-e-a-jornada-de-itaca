#include <iostream>
#include <fstream>
#include <sstream>
#include "arquivos.hpp"
#include "arvore.hpp"
#include "lista_duplamente.hpp"
#include "menus.hpp"
#include <windows.h>
using namespace std;


ListaDupla listaDupla;
ListaSimples listaSimples;

ArvoreBinaria listaArvore; //listar ordem, pre ordem....
ArvoreBinaria estruturaJogo; // arvore do nosso jogo

void jogar(Arvore* raiz, string nomeJogador) {
    Arvore* atual = raiz;
    int vitorias = 0, derrotas = 0, jogos = 0;

    if (atual == nullptr) {
        cout << "Árvore vazia, não há jogo para executar.\n";
        return;
    }

    while (true) {
        system("cls");
        cout << "\n========================\n";
        cout << "Escolha: " << atual->dado->escolha << endl;

        //  Verifica se é um nó final
        if (atual->escolha1 == nullptr && atual->escolha2 == nullptr) {
            cout << "\n==== FIM DE JOGO ====\n";
            jogos = 1;

            // imprime o final do jogo:
            cout << atual->dado->resultado << endl;

            if (atual->dado->tipoFinal == 1) {
                vitorias = 1;
                cout << "🎉 Final BOM!\n\n";
            } else if (atual->dado->tipoFinal == 2) {
                derrotas = 1;
                cout << "💀 Final RUIM!\n\n";
            } else {
                cout << "😐 Final neutro.\n\n";
            }

            // 👉 Salvar score e encerrar
            estruturaJogo.gerarResumoParaArquivoScore("score.txt", nomeJogador, jogos, vitorias, derrotas);
            listaDupla.limparLista();
            carregarScore(listaDupla, "score.txt");
            break;
        }

        // imprime o resultado da escolha
        cout << atual->dado->resultado << endl;

        // Mostrar as opções de escolha
        int opcao;
        cout << "\nDigite:\n";
        cout << "1 - " << atual->escolha1->dado->escolha << "\n";
        cout << "2 - " << atual->escolha2->dado->escolha << "\n";
        cout << "Opcao: ";
        cin >> opcao;

        // Atualiza o nó atual com base na escolha
        if (opcao == 1) {
            atual = atual->escolha1;
        } else if (opcao == 2) {
            atual = atual->escolha2;
        } else if (opcao == 3) {
            cout << "Saindo do jogo....\n";
            break;
        } else {
            cout << "Opção inválida! Escolha 1 ou 2.\n";
            system("pause");
        }
    }

    system("pause");
}


// Verificar se nome de jogador já existe no arquivo
 bool nomeExiste(const string& nomeProcurado, const string& nomeArquivo){
    ifstream arquivo(nomeArquivo);
    if(arquivo.is_open() == false){
        return false; //  // Se o arquivo ainda não existe, o nome não existe
    }

    string linha;
    while(getline(arquivo,linha)){
        stringstream ss(linha);
        string nome;
        getline(ss, nome, ';'); // lê o nome até o primeiro ;

        if(nome == nomeProcurado){
            return true; //nome ja usado
        }
    }

    return false;
 }

//g++ -o main.exe main.cpp

int main(){
    //Késsia
    string nomeJogador;
    do{
        cout << "Digite o seu nome, guerreiro: ";
        cin >> nomeJogador;

        if(nomeExiste(nomeJogador, "score.txt") == true){
            cout << "Nome já usado, escreva outro por favor\n";
        }

    }while(nomeExiste(nomeJogador, "score.txt") == true);
    listaDupla.limparLista();
    carregarScore(listaDupla, "score.txt");

     // testes Ana:
     int opcao; 
     Arvore *raiz;
     carregarListaDeArquivo(listaSimples,"historia.txt");

     raiz = estruturaJogo.inserirArvoreEscolhas(listaSimples);
     cout << endl;

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
            jogar(raiz, nomeJogador);
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
                        listaSimples.imprimirElemento(); // imprimir lista Simples
                        cout << "\n";
                        system("pause");         // Espera o usuário ver 
                        break;

                        case 2:
                        system("cls");
                        cout << "\n Listar a árvore em ordem  ...\n";
                        listaArvore.imprimirEmOrdem(raiz);
                        cout << "\n";
                        system("pause");         // Espera o usuário ver 
                        break;

                        case 3: {
                        system("cls");
                        string nome;
                        cout << "Digite o nome que deseja procurar: ";
                        cin >> nome;
                        cout << "\n";
                        listaDupla.procurarJogadorPeloNome(nome);
                        system("pause");         // Espera o usuário ver 
                        }
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
            setColor(14); // amarelo escuro
            cout << "Lista de jogadores ordenada por vitórias:\n\n";
            setColor(9); // amarelo escuro
            listaDupla.exibir();
            cout << "\n";
            system("pause");         // Espera o usuário ver
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