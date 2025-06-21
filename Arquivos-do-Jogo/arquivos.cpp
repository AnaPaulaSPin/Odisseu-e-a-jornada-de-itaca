#include <iostream>
#include <string>
#include <fstream> 
#include <sstream>
#include "arquivos.hpp"
using namespace std;

void salvarListaEmArquivo(Lista* inicio, const string& nomeArquivo) {
    ofstream arquivo(nomeArquivo); // abre para escrita

    if (!arquivo) {
        cout << "Erro ao abrir o arquivo para escrita.\n";
        return;
    }

    Lista* atual = inicio;
    while (atual != nullptr) {
        arquivo << atual->dado->id << ";"
                << atual->dado->escolha << ";"
                << atual->dado->resultado << ";"
                << atual->dado->tipoFinal << ";\n";
        atual = atual->prox;
    }

    arquivo.close();
    cout << "Lista salva no arquivo com sucesso.\n";
}


void carregarListaDeArquivo(ListaSimples& lista, const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo); // abre para leitura

    if (!arquivo) {
        cout << "Erro ao abrir o arquivo para leitura.\n";
        return;
    }

    string linha;
    while (getline(arquivo, linha)) {
        stringstream ss(linha);
        string idStr, escolha, resultado, tipoFinalStr;

        getline(ss, idStr, ';');
        getline(ss, escolha, ';');
        getline(ss, resultado, ';');
        getline(ss, tipoFinalStr, ';'); 

        Node* novo = new Node;
        novo->id = stoi(idStr);
        novo->escolha = escolha;
        novo->resultado = resultado;
        novo->tipoFinal = stoi(tipoFinalStr);

        lista.InserirElemento(novo);
    }

    arquivo.close();
    cout << "Lista carregada do arquivo com sucesso.\n";
}


