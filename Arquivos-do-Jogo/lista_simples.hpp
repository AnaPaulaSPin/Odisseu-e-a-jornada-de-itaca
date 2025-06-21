#ifndef LISTA_SIMPLES_HPP
#define LISTA_SIMPLES_HPP

#include <string>
using namespace std;

struct Node {
    int id;
    string escolha;
    string resultado;
    int tipoFinal;
};

struct Lista{
    Node *dado;
    struct Lista *prox;
};

class ListaSimples{
    private:
     Lista *inicio;

    public:
    ListaSimples(){
        inicio = nullptr;
    }

void InserirElemento(Node *elemento);
void imprimirElemento();

};

#endif
