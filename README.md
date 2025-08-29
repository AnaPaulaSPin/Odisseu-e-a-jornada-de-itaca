# Projeto: “Odisseia” – Jogo de Árvore de Decisão em C++

**Autores:** Ana Paula e Kessia Silva
**Disciplina:** Estrutura de Dados I – 2025.1

## Descrição do Projeto

O projeto consiste em um **jogo baseado em árvore de decisão**, onde o jogador percorre uma jornada de aventuras, tomando decisões estratégicas que determinam se ele conseguirá completar a história ou se encontrará um fim prematuro. Cada decisão leva a um novo caminho da história, permitindo múltiplos desfechos.

O tema do jogo é inspirado na **Odisseia**, e o roteiro contém **pelo menos 6 níveis de decisão**, utilizando estruturas de dados para armazenar e organizar o fluxo do jogo.

---

## Funcionalidades do Jogo

1. **Menu Principal**

   * **História do Jogo:** Apresenta o contexto e o objetivo da aventura.
   * **Regras do Jogo:** Explica como tomar decisões e como o score será registrado.
   * **Jogar:** Inicia a aventura baseada na árvore de decisão.
   * **Verificar Score:** Exibe o histórico de jogos e resultados dos jogadores.
   * **Sair:** Encerra o programa.

2. **Árvore de Decisão**

   * Cada nodo da árvore contém uma **lista simplesmente encadeada** com as opções de decisão.
   * A árvore **não precisa ser equilibrada**, permitindo caminhos mais longos ou curtos dependendo das escolhas.
   * A árvore é percorrida dinamicamente conforme as decisões do jogador.
   * Possibilidade de utilizar arquivos para salvar ou carregar a árvore de decisão.

3. **Lista de Scores**

   * Utiliza uma **lista duplamente encadeada ordenada pelo número de jogos ganhos**.
   * Cada registro contém:

     * Nome do jogador
     * Número total de jogos
     * Quantidade de vitórias
     * Quantidade de derrotas
   * Permite consulta por nome, número de jogos ou número de vitórias.

4. **Menu Final**

   * Aparece ao término da aventura, permitindo:

     * **Jogar novamente**
     * **Informações Técnicas**: submenu com:

       * Exibição da lista simplesmente encadeada que forma a árvore.
       * Listagem da árvore em ordem.
       * Busca de estatísticas de jogadores (nome, número de jogos, vitórias, derrotas).
       * Voltar ao menu anterior.
     * **Sair**

---

## Estruturas de Dados Utilizadas

1. **Lista simplesmente encadeada**

   * Armazena as informações de cada nodo da árvore de decisão.
   * Permite flexibilidade na adição ou remoção de decisões sem precisar reorganizar toda a árvore.

2. **Lista duplamente encadeada ordenada**

   * Armazena o score dos jogadores.
   * Mantém os dados ordenados por número de vitórias, facilitando consultas rápidas.

3. **Árvore de decisão**

   * Construída a partir das listas simplesmente encadeadas.
   * Cada nodo representa um ponto de decisão da história, com pelo menos duas opções (ex.: Sim / Não).
   * O percurso da árvore depende das escolhas do jogador, permitindo múltiplos finais possíveis.
