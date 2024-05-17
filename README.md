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