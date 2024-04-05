# ProfManzano
Repositório para aulas do professor Augusto Manzano
Link fontes do original
https://github.com/J-AugustoManzano/livro_cpp20_Windows/blob/main/Fontes/

Stack (Puilha)
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
