#include "arvore.hpp"
#include <iostream>
#include <fstream> 
#include <string>
#include <sstream>

using namespace std;

Arvore* ArvoreBinaria:: criarNo(Node* dado){
    Arvore* novo = new Arvore;
    novo->dado = dado;
    novo->escolha1 = nullptr;
    novo->escolha2 = nullptr;
    return novo;
}
Arvore* ArvoreBinaria:: getRaiz(){
      return raiz;
   }

Arvore* ArvoreBinaria:: inserir(Arvore* raiz, Node* dado){
    if (raiz == nullptr) {
        // Árvore vazia: cria o nó
        return criarNo(dado);
    }

    if (dado->id < raiz->dado->id) {
        // Vai para a subárvore esquerda
        raiz->escolha1 = inserir(raiz->escolha1, dado);
    } else if (dado->id > raiz->dado->id) {
        // Vai para a subárvore direita
        raiz->escolha2 = inserir(raiz->escolha2, dado);
    } else {
        // id igual: aqui pode decidir o que fazer (ignorar ou atualizar)
        cout << "ID " << dado->id << " já existe na árvore." << endl;
    }

    return raiz;
}

void ArvoreBinaria:: imprimirEmOrdem(Arvore* raiz){
   if (raiz == nullptr) {
       return;
   }
        imprimirEmOrdem(raiz->escolha1);
        cout << raiz->dado->id << " ";
        imprimirEmOrdem(raiz->escolha2);
    
}

void ArvoreBinaria:: imprimirPreOrdem(Arvore *raiz){
    if(raiz == nullptr){
            return;
        } else{
            cout << raiz->dado->id << " ";
           imprimirPreOrdem(raiz->escolha1);
           imprimirPreOrdem(raiz->escolha2);
        }
}
void ArvoreBinaria:: imprimirPosOrdem(Arvore *raiz){
      if(raiz == nullptr){
            return;
            
     } else{
          imprimirPosOrdem(raiz->escolha1);
          imprimirPosOrdem(raiz->escolha2);
          cout << raiz->dado->id << " ";
        }
}

void ArvoreBinaria::imprimirJogo(Arvore* raiz){
     if (raiz == nullptr) {
        return;
    }

    // Imprime os dados do nó atual
    cout << "ID: " << raiz->dado->id<< endl;
    cout << "Escolha: " << raiz->dado->escolha<< endl;
    cout << "Resultado: " << raiz->dado->resultado<< endl;
    cout << "Tipo de Final: " << raiz->dado->tipoFinal<< endl;
    cout << "-----------------------------";

    // Percorre a primeira escolha (filho esquerdo)
    imprimirJogo(raiz->escolha1);

    // Percorre a segunda escolha (filho direito)
    imprimirJogo(raiz->escolha2);
}


 Arvore* ArvoreBinaria:: inserirArvoreEscolhas(ListaSimples lista){
      Lista *atual = lista.getInicio();
      
    while(atual != nullptr){
       this->raiz = inserir(this->raiz, atual->dado);
       atual = atual->prox;
    }
    return this->raiz;
 } 

 
// K

 void ArvoreBinaria::gerarResumoParaArquivoScore(const string& nomeArquivo, const string& nomeJogador, int jogos, int vitorias, int derrotas){
    // atualiza um arquivo de score (nomeArquivo) para um jogador específico (nomeJogador), somando as vitórias, derrotas e jogos.
    ifstream arquivoEntrada(nomeArquivo); // Abre o arquivo original (nomeArquivo) para leitura. 
    ofstream arquivoTemp("temp.txt"); // Cria um arquivo temporário chamado "temp.txt" para escrita. 

    bool encontrado = false; // Cria uma variável para marcar se o jogador já existe no arquivo (se foi encontrado).
    string linha; // Uma variável para armazenar a linha que será lida.

    while (getline(arquivoEntrada, linha)) { // Lê o arquivo linha a linha (cada linha com os dados de um jogador).
        stringstream ss(linha); //  para "quebrar" a linha em partes separadas por ;.
        string nome;
        int j, v, d;

        getline(ss, nome, ';');
        ss >> j;
        ss.ignore(); // ignorar o ;
        ss >> v;
        ss.ignore();
        ss >> d;
        ss.ignore();

        if (nome == nomeJogador) {
            encontrado = true;
            j = j + jogos;
            v = v + vitorias;
            d = d + derrotas;
        }

        arquivoTemp << nome << ";" << j << ";" << v << ";" << d << ";\n";
    }

    if (encontrado == false) {
        arquivoTemp << nomeJogador << ";" << jogos << ";" << vitorias << ";" << derrotas << ";\n";
    }

    arquivoEntrada.close();
    arquivoTemp.close();

    // Substitui o antigo pelo novo
    remove(nomeArquivo.c_str()); // Remove o arquivo original.
    rename("temp.txt", nomeArquivo.c_str()); // Renomeia o arquivo temporário (temp.txt) para o nome original do arquivo.
 }
