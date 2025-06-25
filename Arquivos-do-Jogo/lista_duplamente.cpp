#include "lista_duplamente.hpp"
#include <iostream>
#include <string>
using namespace std;

ListaDupla::ListaDupla(){
    inicio = nullptr;
}

void ListaDupla::inserirOrdenado(string nome, int jogos, int vitorias, int derrotas){
    nodo *novo, *atual, *aux;
    novo = new nodo();
    novo -> nome = nome;
    novo -> jogos = jogos;
    novo -> vitorias = vitorias;
    novo -> derrotas = derrotas;
    novo -> anterior = nullptr;
    novo -> proximo = nullptr;

    if(inicio == nullptr){
        inicio = novo;
        return;
    }
    atual = inicio;
    while((atual!=nullptr) && (novo -> vitorias < atual -> vitorias)){
        aux = atual;
        atual = atual -> proximo;
    }

    if(atual == nullptr){
        aux -> proximo = novo;
        novo -> anterior = aux;
        return;
    }

    else
    if(atual == inicio){
        novo -> proximo = atual;
        atual -> anterior = novo;
        inicio = novo;
        return;
    }

    else{
        inicio -> proximo = novo;
        novo -> anterior = inicio;
        novo -> proximo = atual;
        atual -> anterior = novo;
    }
    
}

void ListaDupla::exibir(){
    nodo *aux;
    aux = inicio;

    if(inicio == nullptr){
        cout<<"Lista vazia\n";
        return;
    }

    while(aux != nullptr){
        cout << aux -> nome << " | Jogos:" << aux -> jogos 
             << " | Vitórias: " << aux-> vitorias
             << " | Derrotas: " << aux -> derrotas << "\n";
             aux = aux -> proximo;
    }
}

void ListaDupla::procurarJogadorPeloNome(string nome){
    nodo *atual;
    atual = inicio;
    if(inicio == nullptr){
        cout<<"Lista vazia\n";
        return;
    }

    while((atual!=nullptr) && (nome != atual ->nome)){
        atual = atual -> proximo;
    }
    if((atual!=nullptr) && (nome == atual -> nome)){
        cout << atual -> nome << " | Jogos:" << atual -> jogos 
             << " | Vitórias: " << atual-> vitorias
             << " | Derrotas: " << atual -> derrotas << "\n";
    }
}

void ListaDupla::limparLista(){
    nodo *atual;
    atual = inicio;
    while((atual != nullptr)) {
        nodo *aux;
        aux = atual;
        atual = atual -> proximo;
        delete aux;
    }
    
    inicio = nullptr;

}