#ifndef ARQUIVOS_HPP
#define ARQUIVOS_HPP

#include <string>
#include "lista_simples.hpp"
using namespace std;


void salvarListaEmArquivo(Lista* inicio, const string& nomeArquivo);
void carregarListaDeArquivo(ListaSimples& lista, const string& nomeArquivo);

#endif
