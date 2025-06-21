#ifndef ARVORE_HPP
#define ARVORE_HPP

#include <string>
#include "lista_simples.hpp"


struct Arvore {
    Node* dado;
    Arvore* escolha1;
    Arvore* escolha2;
};

class ArvoreBinaria{
    private:
     Arvore *raiz;

    public:
   ArvoreBinaria(){
     raiz = nullptr;
   }

   Arvore *getRaiz();

   Arvore* criarNo(Node* dado);
   Arvore* inserir(Arvore* raiz, Node* dado);
   void imprimirEmOrdem(Arvore* raiz);
   void imprimirJogo(Arvore* raiz); // Funcao teste para verificar se ta salvadondo a escolha e resultado
   Arvore* inserirArvoreEscolhas(ListaSimples lista); // insere a lista na arvore
   void imprimirPreOrdem(Arvore *raiz);
   void imprimirPosOrdem(Arvore *raiz);
   

};




#endif
