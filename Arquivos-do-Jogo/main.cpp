//Trabalho feito por Kessia e Ana Paula
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
        setColor(5); // Roxo escuro
        cout << "Escolha: " << atual->dado->escolha << endl;

        //  Verifica se é um nó final
        if (atual->escolha1 == nullptr && atual->escolha2 == nullptr) {
            setColor(11); // azul escuro
            cout << "\n==== FIM DE JOGO ====\n";
            jogos = 1;
        

            // imprime o final do jogo:
            cout << atual->dado->resultado << endl;

            if (atual->dado->tipoFinal == 1) {
                vitorias = 1;
                 setColor(10); // Verde claro
                cout << "\n🎉 Final BOM!\n\n";
                setColor(8); // cinza claro
            } else if (atual->dado->tipoFinal == 2) {
                derrotas = 1;
                 setColor(12); // vermelho claro
                cout << "\n💀 Final RUIM!\n\n";
                setColor(8); // cinza claro
            } else {
                 setColor(8); // cinza escuro
                cout << "\n😐 Final neutro.\n\n";
                setColor(8); // cinza claro
            }

            // 👉 Salvar score e encerrar
            estruturaJogo.gerarResumoParaArquivoScore("score.txt", nomeJogador, jogos, vitorias, derrotas);
            listaDupla.limparLista();
            carregarScore(listaDupla, "score.txt");
            break;
        }

        // imprime o resultado da escolha
        setColor(11); // azul escuro
        cout << atual->dado->resultado << endl;

        // Mostrar as opções de escolha
        int opcao;
        setColor(8); // cinza escuro
        cout << "\nDigite:\n";
        setColor(3); // ciano escuro
        cout << "1 - " << atual->escolha1->dado->escolha << "\n";
        setColor(3); // ciano escuro
        cout << "2 - " << atual->escolha2->dado->escolha << "\n";
        setColor(4); // vermelho escuro
        cout << "3 - Abandonar sua jornada\n";
        setColor(7); // cinza claro (padrão)
        cout << "Opcao: ";
        setColor(6); // amarelo escuro
        cin >> opcao;
        setColor(7); // cin claro (padrão)

        // Atualiza o nó atual com base na escolha
        if (opcao == 1) {
            atual = atual->escolha1;
        } else if (opcao == 2) {
            atual = atual->escolha2;
        } else if (opcao == 3) {
            cout << "Saindo do jogo....\n";
            setColor(7);  // Cor padrão(Cinza Claro)
            break;
        } else {
            setColor(4); // vermelho escuro
            cout << "Opção inválida! Escolha 1 ou 2.\n";
            setColor(7); // cinza claro
            system("pause");
        }
    }
    setColor(7); // cinza claro
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
   
    string nomeJogador;
    do{
        system("cls");
        setColor(1); // Azul escuro
        cout << "\n\n\n\n\t\t\t\t\t\tDigite o seu nome, guerreiro: ";
        setColor(6); // Amarelo escuro
        cin >> nomeJogador;
        setColor(7);  // Cor padrão(Cinza Claro)

        if(nomeExiste(nomeJogador, "score.txt") == true){
            setColor(12); // vermelho claro
            cout << "\n";
            cout << "Nome já usado, escreva outro por favor\n";
            setColor(7);  // Cor padrão(Cinza Claro)
            system("pause");         // Espera o usuário ver
        }

    }while(nomeExiste(nomeJogador, "score.txt") == true);
    listaDupla.limparLista();
    carregarScore(listaDupla, "score.txt");

   
     int opcao; 
     Arvore *raiz;
     carregarListaDeArquivo(listaSimples,"historia.txt");

     raiz = estruturaJogo.inserirArvoreEscolhas(listaSimples);
     cout << endl;

     system("pause");
     system("cls");

    do{
        exibirMenu1();
        setColor(6); // amarelo escuro
        cin >> opcao;
        setColor(7); // cinza claro
        switch (opcao) {
        SetConsoleOutputCP(CP_UTF8);

        case 1:
            system("cls");
            historia();
            setColor(7); // cinza claro
            cout << "\n";
            system("pause");         // Espera o usuário ver
            break;

        case 2:
            system("cls");
            regras();  
            setColor(7); // cinza claro
            cout << "\n";
            system("pause");         // Espera o usuário ver       
            break;

        case 3:
            system("cls");
            jogar(raiz, nomeJogador);
            setColor(7);  // Cor padrão(Cinza Claro)
            int subOpcao;
            do{
                exibirMenu2();
                setColor(6); // amarelo escuro
                cin >> subOpcao;
                setColor(7);  // Cor padrão(Cinza Claro)

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
                    setColor(6); // amarelo escuro
                    cin >> subSubOpcao;
                    setColor(7);  // Cor padrão(Cinza Claro)
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
                        setColor(6); // amarelo escuro
                        cin >> nome;
                        cout << "\n";
                        setColor(1); // azul escuro
                        listaDupla.procurarJogadorPeloNome(nome);
                        setColor(7); // cor padrão (cinza claro)
                        cout << "\n";
                        system("pause");         // Espera o usuário ver 
                        }
                        break;

                        case 4:
                        system("cls");
                        cout << "\n Voltar ao menu anterior ...\n";
                        break;

                        default:
                        system("cls");
                        setColor(4); // vermelho escuro
                        cout << "❌ Opção inválida.\n";
                        cout << "\n";
                        setColor(7);  // Cor padrão(Cinza Claro)
                        system("pause");         // Espera o usuário ver

                    }

                }while(subSubOpcao != 4);
                break;

            case 3: 
            system("cls");
                 setColor(6); // amarelo escuro
                 cout << "\n Até logo destemido guerreiro ... \n";
                 setColor(7); // cinza claro
                 exit(0);

            default:
            system("cls");
                 setColor(4); // vermelho escuro
                 cout << "❌ Opção inválida.\n";
                 cout << "\n";
                 setColor(7);  // Cor padrão(Cinza Claro)
                 system("pause");         // Espera o usuário ver
                 

            }
            }while(subOpcao !=1);
            
            break;

        case 4:
            system("cls");
            setColor(6); // amarelo escuro
            cout << "Lista de jogadores ordenada por vitórias:\n\n";
            setColor(1); // azul escuro
            listaDupla.exibir();
            setColor(7); // cinza claro
            cout << "\n";
            system("pause");         // Espera o usuário ver
            break;
        case 5:
            system("cls");
            setColor(6); // amarelo escuro
            cout << "\n Até logo destemido guerreiro ... \n";
            setColor(7); // cinza claro
            break;
        default:
            system("cls");
            setColor(4); // vermelho escuro
            cout << "\n❌ Opção inválida.\n";
            cout << "\n";
            setColor(7);  // Cor padrão(Cinza Claro)
            system("pause");         // Espera o usuário ver
    }

    }while(opcao!=5);
    
    return 0;

}