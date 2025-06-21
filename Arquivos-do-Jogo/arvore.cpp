#include "arvore.hpp"
#include <iostream>

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

 void ArvoreBinaria:: inserirArvoreEscolhas(ListaSimples lista){
      Lista *atual = lista.getInicio();
      
    while(atual != nullptr){
       this->raiz = inserir(this->raiz, atual->dado);
       atual = atual->prox;
    }
 } 
