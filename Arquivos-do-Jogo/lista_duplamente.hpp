#ifndef LISTADUPLA_HPP
#define LISTADUPLA_HPP

#include <string>
using namespace std;

struct nodo{
    string nome;
    int jogos;
    int vitorias;
    int derrotas;
    struct nodo *anterior;
    struct nodo *proximo;

};

class ListaDupla{
    private:
    nodo *inicio;

    public:
    ListaDupla(); 
   // ~ListaDupla();
    void inserirOrdenado(string nome, int jogos, int vitorias, int derrotas);
    void exibir();
    void procurarJogadorPeloNome(string nome);
    void limparLista();
    //nodo *getInicio();

};


#endif