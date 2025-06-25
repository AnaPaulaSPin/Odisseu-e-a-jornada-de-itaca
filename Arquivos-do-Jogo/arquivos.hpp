#ifndef ARQUIVOS_HPP
#define ARQUIVOS_HPP

#include <string>
#include "lista_simples.hpp"
#include "lista_duplamente.hpp"

using namespace std;


void salvarListaEmArquivo(Lista* inicio, const string& nomeArquivo);
void carregarListaDeArquivo(ListaSimples& lista, const string& nomeArquivo);
void salvarHistoria();

void carregarResumoParaListaDupla(const string& nomeArquivo, ListaDupla& listaDupla);
void carregarScore(ListaDupla& lista, const string& nomeArquivo);

#endif
