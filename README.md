<h2 align="center">
  :computer: Programação Paralela :computer:
</h2>

Para executar o código deste diretório, basta seguir os seguintes passos:

1) Realize o download ou clone dos arquivos deste diretório para a sua máquina.
2) Abra o terminal da sua máquina na pasta que contém os arquivos baixados. Lembrando que o compilador g++ da sua máquina deve possuir suporte para OpenMP.
3) Compile o código com o seguinte comando:
> $ g++ -std=c++17 -O2 -Wall -fopenmp -pedantic stringMatch.cpp -o execName

4) Execute o código com o seguinte comando:
> $ ./execName

5) Durante a execução, você deve responder três perguntas:
* **Digite o texto de busca:**
Você deve digitar o trecho que deseja buscar dentro do texto de entrada. Exemplo: tempus

* **Digite o nome do arquivo que contém o texto de entrada:**
Você deve digitar o nome do arquivo (com a extensão dele) que contém o texto de entrada para ser lido durante a execução. Você pode usar um dos três arquivos que estão neste diretório junto com o código fonte (small.txt ou medium.txt ou big.txt). Você também pode definir um arquivo de texto para usar como texto de entrada para o programa, basta seguir o mesmo padrão dos arquivos de texto já criados neste repositório. Exemplo: small.txt

* **Digite a quantidade de threads que deseja utilizar nesta execução:**
Você deve digitar uma quantidade válida de threads, valores válidos são quaisquer valores inteiros maior ou igual a 1. Logo, não são permitidos valores negativos ou igual a zero para a quantidade de threads. Caso você digite um valor inválido, será exibido a pergunta "**Digite uma quantidade de threads válida:**". Essa pergunta irá se repetir até que você digite um valor válido de thread (>= 1). Exemplo: 1

6) Após responder as perguntas, o algoritmo irá realizar a busca pelas correspondências no texto. Quando terminar, ele retornará os seguintes resultados na saída terminal:
* **Comprimento do texto de entrada:**
O comprimento total do texto de entrada do arquivo escolhido na segunda pergunta.

* **Comprimento do texto de busca:**
O comprimento total do texto de busca (digitado na primeira pergunta)

* **Duração do for-loop (em microsegundos):**
A duração total em microsegundos (us) do trecho for-loop que busca as correspondências no texto.

* **Quantidade de string match:**
A quantidade total de correspondências no texto.
