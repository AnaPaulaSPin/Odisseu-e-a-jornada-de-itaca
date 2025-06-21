#include "lista_simples.hpp"
#include <iostream>
using namespace std;

Lista* ListaSimples:: getInicio(){
      return inicio;
    }

void ListaSimples::InserirElemento(Node *elemento){
        Lista *novo;
        novo = new Lista;
        if(novo == nullptr){
            cout <<"Nao foi possivel alocar memoria\n";
            return;
        } 
        novo->dado = elemento;

        if(inicio == nullptr){
            inicio = novo;
            novo->prox = nullptr;

        } else{
            Lista *atual = inicio, *ant = inicio;

            while(atual != nullptr){
                ant = atual;
                atual = atual->prox;

            }
                ant->prox = novo;
                novo->prox = nullptr;
        }
    }

    void ListaSimples:: imprimirElemento(){        
        if(inicio == nullptr){
            cout << "Nao existe lista";
            return;
        }
        
        Lista *atual = inicio;

        while(atual != nullptr){
            cout << "ID: " << atual->dado->id << " | Escolha: " << atual->dado->escolha << " | Resultado: " << atual->dado->resultado << " | Num Final: " << atual->dado->tipoFinal << endl;
            atual = atual->prox;

        }
    }


