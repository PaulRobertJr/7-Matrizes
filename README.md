# Atividade de Algoritmo 7:

> Essas atividades têm como objetivo praticar o uso de matrizes na linguagem C, explorando conceitos como
> declaração, inicialização, leitura de dados, percorrimento com laços aninhados e manipulação de elementos 
> em diferentes posições. Ao resolvê-las, o estudante exercita fundamentos de programação como estruturas de 
> repetição, condições e operações matemáticas aplicadas a dados organizados em tabelas bidimensionais. São 
> trabalhados cálculos de soma, produto, mínimos, máximos e médias, além de buscas, manipulação de diagonais, 
> regiões específicas da matriz e troca de valores entre matrizes, consolidando o raciocínio lógico e a aplicação 
> prática do conceito de estruturas de dados.

## Lista de Atividades: 
```md
1. Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros e, utilizando 
estruturas de repetição, apresente na tela a soma de todos os elementos da matriz.
```
---
```md
2. Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros e, utilizando
estruturas de repetição, apresente na tela o produto de todos os elementos da matriz.
```
---
```md
3. Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros. Em seguida, leia um
número qualquer do teclado e mostre na tela o índice em que o número se encontra na matriz, ou
então a mensagem "Número não encontrado!", se o número não estiver presente na matriz.
```
---
```md
4. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando 
estruturas de repetição, apresente na tela o menor valor da matriz, o maior valor da matriz 
a soma dos valores da matriz e a média dos valores da matriz.
```
---
```markdown
5. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando 
estruturas de repetição, apresente na tela a soma de todos os elementos marcados com x.
```
|.|.|.|.|.|
|-|-|-|-|-|
|.|.|.|.|.|
|.|.|.|.|.|
|x|x|x|x|x|
|.|.|.|.|.|
---
```md
6. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando 
estruturas de repetição, apresente na tela a soma de todos os elementos marcados com x.
```
|.|.|x|.|.|
|-|-|-|-|-|
|.|.|x|.|.|
|.|.|x|.|.|
|.|.|x|.|.|
|.|.|x|.|.|
---
```md
7. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando
estruturas de repetição, apresente na tela a soma dos elementos da diagonal
principal da matriz.
```
|x|.|.|.|.|
|-|-|-|-|-|
|.|x|.|.|.|
|.|.|x|.|.|
|.|.|.|x|.|
|.|.|.|.|x|
---
```md
8. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando 
estruturas de repetição, apresente na tela a soma dos elementos da diagonal 
secundária da matriz.
```
|.|.|.|.|x|
|-|-|-|-|-|
|.|.|.|x|.|
|.|.|x|.|.|
|.|x|.|.|.|
|x|.|.|.|.|
---
```md
9. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando 
estruturas de repetição, apresente na tela a soma dos elementos marcados com x.
```
|x|x|.|.|
|-|-|-|-|
|x|x|.|.|
|.|.|.|.|
|.|.|.|.|
---
```md
10. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando
estruturas de repetição, apresente na tela a soma dos elementos marcados com x.
```
|.|.|.|.|
|-|-|-|-|
|.|.|.|.|
|.|.|x|x|
|.|.|x|x|
---
```md
11. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando 
estruturas de repetição, apresente na tela a soma dos elementos marcados com x.
```
|x|.|.|.|
|-|-|-|-|
|x|x|.|.|
|x|x|x|.|
|x|x|x|x|
---
```md
12. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando 
estruturas de repetição, apresente na tela a soma dos elementos marcados com x.
```
|.|.|.|x|
|-|-|-|-|
|.|.|x|x|
|.|x|x|x|
|x|x|x|x|
---
```md
13. Escreva um programa que leia uma matriz M de 4 x 5 elementos e, utilizando 
uma estrutura de repetição, armazene em um vetor V o menor elemento 
de cada linha da matriz. Exemplo:
```

**Matriz M preenchida**
|   | 0 | 1 | 2 | 3 | 4 |
|---|---|---|---|---|---|
| 0 | 5 | 4 | 2 | 8 | 7 |
| 1 | 3 | 6 | 9 | 1 | 4 |
| 2 | 0 | 3 | 5 | 2 | 9 |
| 3 | 4 | 9 | 7 | 6 | 2 |

**Vetor V preenchido**
| 0 | 1 | 2 | 3 |
|---|---|---|---|
| 2 | 1 | 0 | 2 | 

---
```md
14. Escreva um programa que leia duas matrizes (A e B) de 2 linhas e 3 colunas e
 utilizando uma estrutura de repetição, realize a troca dos elementos destas matrizes. 
Exemplo:
```
**Matriz A**
| |0 |1 |2 |
|-|--|--|--|
|0|10|20|30|
|1|40|50|60|

**Matriz B**

| |0|1|2|
|-|-|-|-|
|0|1|2|3|
|1|4|5|6|

**Após a troca: Matriz A**

| |0|1|2|
|-|-|-|-|
|0|1|2|3|
|1|4|5|6|

**Após a troca: Matriz B**

| |0 |1 |2 |
|-|--|--|--|
|0|10|20|30|
|1|40|50|60|