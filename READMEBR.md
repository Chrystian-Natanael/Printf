# `Vamos falar sobre: PRINTF` 💬

[<img src="https://raw.githubusercontent.com/Chrystian-Natanael/Aleatorios/master/Mycovers/coverprintf.png" alt="libft_banner" width="1000">](https://github.com/Chrystian-Natanael/Aleatorios/blob/master/Mycovers/coverprintf.png)

### `Selecione um idioma:`

<p align="center">
  <a href="https://github.com/Chrystian-Natanael/Printf/blob/main/READMEBR.md">
  <img src="https://github.com/Chrystian-Natanael/Aleatorios/raw/master/Flags/Round_Brazil_Flag.png" alt="libft" width="50">
  </a>
  &nbsp &nbsp &nbsp &nbsp
  <a href="https://github.com/Chrystian-Natanael/Printf">
  <img src="https://github.com/Chrystian-Natanael/Aleatorios/raw/master/Flags/Round_EUA_Flag.png" alt="libft" width="50">
  </a>
</p>

<h3> 🦮 Resumo: 🦮 <br>
<br>
<a href="https://github.com/Chrystian-Natanael/Printf?tab=readme-ov-file#what-is-printf-" style="color: inherit; text-decoration: none;">🔗 O que é PRINTF? </a> <br> <br>
<a href="https://github.com/Chrystian-Natanael/Printf?tab=readme-ov-file#mandatory-part-" style="color: inherit; text-decoration: none;">🔗 Parte obrigatória </a> <br> <br>
<a href="https://github.com/Chrystian-Natanael/Printf?tab=readme-ov-file#cspdiuxx" style="color: inherit; text-decoration: none;">🔗 cspdiuxX% </a> <br><br>
<a href="https://github.com/Chrystian-Natanael/Printf?tab=readme-ov-file#variadic-function-" style="color: inherit; text-decoration: none;">🔗 Função variádica </a> <br><br>
<a href="https://github.com/Chrystian-Natanael/Printf?tab=readme-ov-file#how-to-use-the-printf-" style="color: inherit; text-decoration: none;">🔗 Como usar o printf? </a> <br><br>
<a href="https://github.com/Chrystian-Natanael/Printf?tab=readme-ov-file#bonus-part-" style="color: inherit; text-decoration: none;">🔗 Parte de bônus </a> <br><br>
<a href="https://github.com/Chrystian-Natanael/Printf?tab=readme-ov-file#how-to-use-my-printf" style="color: inherit; text-decoration: none;">🔗 Como usar meu printf? </a> <br><br>
</h3>

## `O que é PRINTF?` 🤔

<p align="center">
  <a href="https://github.com/Chrystian-Natanael/Printf">
  <img src="https://github.com/Chrystian-Natanael/Aleatorios/raw/master/badges/ft_printfm.png" alt="libft" width="125">
  </a>
  <br>
</p>

O projeto `ft_printf` envolve recriar a função printf em C. Os estudantes têm a tarefa de implementar sua própria versão do printf, que pode formatar e imprimir texto no console, lidando com especificadores de formato como `%d`, `%s`, `%f`, etc.
Junto com suas respectivas bandeiras e modificadores. Através deste projeto, os alunos ganham uma compreensão mais profunda da manipulação de strings em C, manipulação de funções variádicas e de argumentos variádicos, manipulação de ponteiros e a implementação de funções de biblioteca padrão.
Alguns desafios que os alunos podem enfrentar incluem a análise correta de strings de formato, lidar com vários especificadores e bandeiras de formato e garantir o tratamento adequado de erros.

A melhor maneira de adquirir um primeiro conhecimento sobre o projeto é através do vídeo abaixo:

<br>

<p align="center">
	<a href="https://youtu.be/byRw36Y3Hjs">
	<img src="https://img.shields.io/badge/YouTube-FF0000?style=for-the-badge&logo=youtube&logoColor=white">
	</a>
</p>

<br>

# `Parte Obrigatória` 📑

- O protótipo do `ft_printf` deve ser `int ft_printf(const char *, ...);`
- Você deve recriar a função printf da libc
- Não deve gerenciar o buffer como o printf real
- Irá gerenciar as seguintes conversões: `cspdiuxX%`

<br>

# `cspdiuxX%:`

- `C`: imprime um único caractere
- `S`: imprime uma string de caracteres
- `P`: imprime um endereço de ponteiro
- `D`: imprime um número decimal (base 10)
- `I`: imprime um inteiro em base 10
- `U`: imprime um número decimal sem sinal (base 10)
- `x`: imprime um número em formato hexadecimal (base 16) em minúsculas
- `X`: imprime um número em formato hexadecimal (base 16) em maiúsculas
- `%`: imprime um sinal de porcentagem (\%)

<br>

# `Função Variádica` 📦

A `função variádica` é uma função que pode aceitar um número variável de argumentos. O arquivo de cabeçalho `stdarg.h` fornece uma maneira de acessar os argumentos passados para uma função que recebe um número variável de argumentos.
Para entender mais sobre `argumentos variádicos` e `função variádica`, você pode acessar o link abaixo:

<br>
<p align="center">
	<a href="https://youtu.be/oDC208zvsdg">
	<img src="https://img.shields.io/badge/YouTube-FF0000?style=for-the-badge&logo=youtube&logoColor=white">
	</a>
</p>
<br>

Mas resumindo, para usar uma `função variádica`, você precisa declarar uma variável do tipo `va_list` na função e, em seguida, usar as macros `va_start`, `va_arg` e `va_end` para acessar os argumentos.

<br>

# `Como usar o printf?` 📌

A função `printf` é uma função variádica, o que significa que ela pode aceitar um número variável de

 argumentos. O primeiro argumento é uma string de formato que especifica como formatar os argumentos restantes. A string de formato pode conter texto simples e especificadores de formato. Os especificadores de formato são espaços reservados que são substituídos pelos valores dos argumentos restantes.

Por exemplo:

```c
#include <stdio.h>

int main() {
    int num = 42;
    printf("A resposta é %d\n", num);
    return 0;
}
```

A string de formato "A resposta é %d\n" contém o especificador de formato `%d`, que é substituído pelo valor da variável `num`. A saída do programa é "A resposta é 42".

<br>

# `Parte de Bônus` 📑

A parte de bônus do projeto é lidar com as seguintes bandeiras e modificadores:

- `+`: imprime um sinal de mais (+) na frente de números positivos e um sinal de menos (-) na frente de números negativos
- `0`: imprime zeros (0) em vez de espaços ao preencher números
- `#`: imprime o número em um formato alternativo
- ` `: imprime um espaço na frente de números positivos
- `-`: alinha à esquerda o número dentro da largura especificada
- `.`: especifica o número de casas decimais a serem impressas para números em ponto flutuante

<br>

# `Como usar meu printf?`

Primeiro, você vai clonar meu repositório:

<br>

- Com uma chave `SSH`:
```shell
git clone git@github.com:Chrystian-Natanael/Printf.git
```
<br>

- Sem uma chave `SSH`:
```shell
git clone https://github.com/Chrystian-Natanael/Printf.git
```
<br>

Depois disso, você vai compilar o projeto com o comando abaixo:

- Para a parte obrigatória:

```shell
make
```
<br>

- Para a parte de bônus:

```shell
make bonus
```
<br>

Agora você pode usar a biblioteca `libftprintf.a` em seu projeto. Você pode usar a função `ft_printf` da mesma maneira que usaria a função `printf` da biblioteca padrão.

- Exemplo principal:

```c
#include "ft_printf.h"

int main() {
    int num = 42;
    ft_printf("A resposta é %d\n", num);
    return 0;
}
```
<br>

Para compilar o programa, você vai usar o comando abaixo:

```shell
gcc main.c libftprintf.a
```
