# Aulas de C++ com o Professor Augusto Manzano - IFSP

## Sobre este repositório
Este repositório contém todo o material didático das aulas de programação C++ ministradas pelo professor Augusto Manzano no Instituto Federal de Educação, Ciência e Tecnologia de São Paulo (IFSP).

## Conteúdo
O conteúdo abrange desde os conceitos mais básicos da linguagem C++, como o tradicional "Olá, mundo!", até tópicos avançados, como:

* **Fundamentos:**
  * Sintaxe básica
  * Variáveis e tipos de dados
  * Operadores
  * Estruturas de controle (if, else, for, while)
* **Estruturas de dados:**
  * Vetores
  * Matrizes
  * Listas ligadas
* **Ponteiros e alocação de memória:**
  * Conceito de ponteiro
  * Operadores de endereçamento
  * Alocação dinâmica de memória
* **Arquivos:**
  * Manipulação de arquivos texto e binários
* **Programação orientada a objetos:**
  * Classes e objetos
  * Herança
  * Polimorfismo
  * Encapsulamento
* **Entrada e saída de dados:**
  * Manipulação de streams
  * Formatação de saída

## Como utilizar este repositório
1. Clone o repositório: Use o comando git clone https://docs.github.com/pt para criar uma cópia local dos arquivos.
2. Escolha um compilador: Plataformas como Replit e CodeSandbox oferecem ambientes de desenvolvimento online gratuitos.
3. Carregue o código: Importe os arquivos do repositório para o compilador e execute-os.

Link para o repositório do professor

[!Manzano](https://github.com/J-AugustoManzano/livro_cpp20_Windows/blob/main/Fontes/)

Stack (Pilha)
Váriaveis locais } estáticas
quem cria é o programador

Heap (Monte)
váriaveis dinâmicas
Não são declaradas no programa, são citadas na hora que o programa entra em execução a váriavel é criada. Por exemplo uma lista que o tamnho será definido pela quantidade de valores que o usuário deseja inserir, assim o programa precisar definir o tamanho da lista na hora da execução. Ponteiro em linguagem c, c++ é muito usada para criar váriavel dinamica.
Código
Instruções de programa 

Váriaveis globais estaticas .

O que é ponteiro ? 
Ponteiro é uma variável especial que armazena endereço de memória de uma váriavel de uma função, de um procedimento.
Declaração de pontiro
tipo * nome;
int * valor; // Não é muito usado
int* valor;
int *valor;
O ponteiro tem tipo de dado porque o * aponta para o 1° bit de memória do endereço de uma váriavel, o tipo de dado vai indicar o ultimo bit do endereço.
Uma das vantagens do ponteiro que é o programa não precisa gerenciar o endereço de memória e vai direto par ao valor tornando o processamento mais rápido

Tipos de variáveis
Convencionais
Simples e compostas } Dados
* Variaveis Ponteiro } Endereço de memória
  Precisa ser inicialoizado sempre aponta par aum endereço que pode ser null, 0;


Para executar um programa que depende de outro no windows:
1 Acessar cmd 
2 Digitar g++ nome_do_programa1 nome_do_programa2 -o nome_que_o_executavel_vai_receber
3 Exemplo : g++ C05EX15.CPP C05EX14.CPP -o cebola

*************************
Anotação 
Toda cadeia de caracter termina com 
'\0' então é precisar adicionar uma posição a mais na hora de reservar memória

02/05/2024
POO
Tipos dados
  Primitivos : int, float, double, string
  Derivados : typoff, struct, union
A classe é da programação orientada a objeto é semelhante a estrutura de dados. Os atributos por padrão na POO são privados e na linguagem C++ por padrão os campos da estruct são publicos.
O nome mais correto para os atributos na POO é * Campos membros*
Os campos de uma classe são substantivos.
Os métodos tambem possui um nome mais correto chamado subrotinas membros
08/05/2024
Os campos membros deve ser substantivos

09/05/2024
Tipos de dados privados não são passados por herança, apenas protegido e publico

Construtor aceita paramentro somente por valor
O uso de construtor elimina nescessidade um ou mais settters



Construtor aceita paramentro somente por valor
O uso de construtor elimina nescessidade um ou mais settters

Publico e protegido passa por herança privado não
Poliformismo de sobrecarga a quantidade de argumentos e o tipo determina qual subrotina será chamada
O programa 13 mostra a criação de um objeto usando uma biblioteca externa.

15/05/2024
Cap 9 do livro c++ 
Aula sobre arquivos. 
Quem faz a conexão ou caminho com arquivo é a linguagem. Arquivo tem entrada e saída mas não tem processamento.
Quando se abre o arquivo é para ler ou escrever e realizado a tarefa se fecha o arquivo.
Oracle e PostegresQL são para grande porte.
Os arquivos podem ser texto ou binário, texto grava de 8 em 8 bit binário grava bit a bit.
Sempre feche os arquivos depois de usar ou pode perder os dados permanetemente.

16/05/2024
Aula sobre arquivos Binários
23/05/24
Continuação da aula sobre arquivos binários.
quando for gravar um texto em binário primeiro verifica o tamanho do texto 

29/05/24
Aula sobre Datas e Calendário.
O ano tem 365, 25 dias por isso a cada 4 ano tem o ano bissexto. 
06/06/24
Aula sobre string
Calendário Juliano foi corrigido em 05/10/1582 nasce o calendário Gregoriano.
O mês de julho é em homenagem a o imperador Juliano e ganhou um dia a mais que foi tirado de fevereiro, assim como Agosto.

05/06/24 Quarta-Feira
Dia Juliano
Para que fosse possivel calcular as datas foi criado um dia denominado dia 1 e não possui data negativa nem dia 0.

