
Passo a passo para compilar e rodar nosso projeto no VSCode:

1. Abrir o VSCode na pasta raiz do projeto (onde está a pasta "Arquivos do Jogo").

2. Abrir o terminal integrado do VSCode:
   - Menu superior: Terminal -> Novo Terminal
   - Ou usar o atalho Ctrl + ` (crase)

3. Navegar até a pasta onde estão os arquivos .cpp:
   - Digitar: cd "Arquivos do Jogo"
   - Pressionar Enter

4. Compilar todos os arquivos .cpp juntos:
   - Digitar:
     g++ main.cpp menus.cpp arvore.cpp arquivos.cpp lista_duplamente.cpp lista_simples.cpp -o main.exe

   - Pressionar Enter

   (Se usarmos lista_simples.cpp, acrescentar no comando também)

5. Executar o programa:
   - Digitar:
     ./main    
     main      (Windows)

6. Para compilar novamente depois de mudanças, repetir o passo 4. (ou vc pode usar o arquivo zcompilar.bat que ele faz isso automatico para vc)


