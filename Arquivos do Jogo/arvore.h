#ifndef ARVORE_HPP
#define ARVORE_HPP

#include <string>
#include "lista_simples.h"

using namespace std;

struct Arvore {
    Node* dado;
    Arvore* esquerda;
    Arvore* direita;
};

class ArvoreBinaria{
   Arvore* criarNo(Node* dado);
   Arvore* inserir(Arvore* raiz, Node* dado);
   void imprimirEmOrdem(Arvore* raiz);

};




#endif
