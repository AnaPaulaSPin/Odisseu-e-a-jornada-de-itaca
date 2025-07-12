#include <iostream>
#include <string>
#include <fstream> 
#include <sstream>
#include "arquivos.hpp"
#include <cstdlib> // se usar atoi
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
         novo->id = atoi(idStr.c_str());               // alternativa ao stoi
        novo->escolha = escolha;
        novo->resultado = resultado;
       novo->tipoFinal = atoi(tipoFinalStr.c_str()); // alternativa ao stoi

        lista.InserirElemento(novo);
    }

    arquivo.close();
    
}
//K

void carregarScore(ListaDupla& lista, const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        cout << "Arquivo de score nao encontrado.\n";
        return;
    }

    string linha;
    while (getline(arquivo, linha)) {
        stringstream ss(linha);
        string nome;
        int jogos, vitorias, derrotas;

        getline(ss, nome, ';');
        ss >> jogos;
        ss.ignore();
        ss >> vitorias;
        ss.ignore();
        ss >> derrotas;
        ss.ignore();

        lista.inserirOrdenado(nome, jogos, vitorias, derrotas);
    }

    arquivo.close();
}



void carregarResumoParaListaDupla(const string& nomeArquivo, ListaDupla& listaDupla){
    ifstream arquivo(nomeArquivo);
    if(arquivo.is_open() == false){
        cout << "Arquivo não encontrado\n";
        return;
    }

string linha;

while (getline(arquivo,linha)){
    stringstream ss(linha);
    string nome;
    int jogos, vitorias, derrotas;

    getline(ss, nome, ',');
    ss >> jogos;
    ss.ignore();
    ss >> vitorias;
    ss.ignore();
    ss >> derrotas;

    listaDupla.inserirOrdenado(nome, jogos, vitorias, derrotas);
    }  

}



