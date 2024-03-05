# `Let's talk about: PRINTF` 💬

[<img src="https://raw.githubusercontent.com/Chrystian-Natanael/Aleatorios/master/Mycovers/coverprintf.png" alt="libft_banner" width="1000">](https://github.com/Chrystian-Natanael/Aleatorios/blob/master/Mycovers/coverprintf.png)

### `Select a language:`

<p align="center">
  <a href="https://github.com/Chrystian-Natanael/Printf/blob/main/README_BR.md">
  <img src="https://github.com/Chrystian-Natanael/Aleatorios/raw/master/Flags/Round_Brazil_Flag.png" alt="libft" width="50">
  </a>
  &nbsp &nbsp &nbsp &nbsp
  <a href="https://github.com/Chrystian-Natanael/Printf">
  <img src="https://github.com/Chrystian-Natanael/Aleatorios/raw/master/Flags/Round_EUA_Flag.png" alt="libft" width="50">
  </a>
</p>

<h3> 🦮 Summary: 🦮 <br>
<br>
<a href="" style="color: inherit; text-decoration: none;">🔗 What's the PRINTF? </a> <br> <br>
<a href="" style="color: inherit; text-decoration: none;">🔗 Mandatory part </a> <br> <br>
<a href="" style="color: inherit; text-decoration: none;">🔗 cspdiuxX% </a> <br><br>
<a href="" style="color: inherit; text-decoration: none;">🔗 Variadic function </a> <br><br>
<a href="" style="color: inherit; text-decoration: none;">🔗 How to use the printf? </a> <br><br>
<a href="" style="color: inherit; text-decoration: none;">🔗 Bonus part </a> <br><br>
<a href="" style="color: inherit; text-decoration: none;">🔗 How to use the printf? </a> <br><br>
<a href="" style="color: inherit; text-decoration: none;">🔗 How to use my printf? </a> <br><br>
</h3>

## `What is PRINTF?` 🤔

<p align="center">
  <a href="https://github.com/Chrystian-Natanael/Printf">
  <img src="https://github.com/Chrystian-Natanael/Aleatorios/raw/master/badges/ft_printfm.png" alt="libft" width="125">
  </a>
  <br>
</p>

The `ft_printf` project involves recreating the printf function in C. Students are tasked with implementing their own version of printf, which can format and print text to the console, handling format specifiers such as `%d`, `%s`, `%f`, etc.
Along with their respective flags and modifiers. Through this project, students gain a deeper understanding of string manipulation in C, `variadic function` `variadic arguments` handling, pointer manipulation, and the implementation of standard library functions.
Some challenges students may `parsing` format strings correctly, handling various format `specifiers` and `flags`, and ensuring proper error handling.

The good way to adquire a first knowledge about the project is the video bellow:

<br>

<p align="center">
	<a href="https://youtu.be/byRw36Y3Hjs">
	<img src="https://img.shields.io/badge/YouTube-FF0000?style=for-the-badge&logo=youtube&logoColor=white">
	</a>
</p>

<br>

# `Mandatory part` 📑

- The prototype of `ft_printf` should be `int ft_printf(const char *, ...);`
- You have to recode the libc’s printf function
- It must not do the buffer management like the real printf
- It will manage the following conversions: `cspdiuxX%`

<br>

# `cspdiuxX%:`

- `C`: print a single character
- `S`: print a string of characters
- `P`: print a pointer address
- `D`: print a decimal (base 10) number
- `I`: print an integer in base 10
- `U`: print an unsigned decimal (base 10) number
- `x`: print a number in hexadecimal (base 16) format in lowercase
- `X`: print a number in hexadecimal (base 16) format in uppercase
- `%`: print a percent sign (\%)

<br>

# `Variadic function` 📦

The `variadic function` is a function that can accept a variable number of arguments. The `stdarg.h` header file provides a way to access the arguments passed to a function that takes a variable number of arguments. The `stdarg.h` header file provides a way to access the arguments passed to a function that takes a variable number of arguments.
To understand more about `variadic arguments` and `variadic function` you can access the link bellow:

<br>
<p align="center">
	<a href="https://youtu.be/oDC208zvsdg">
	<img src="https://img.shields.io/badge/YouTube-FF0000?style=for-the-badge&logo=youtube&logoColor=white">
	</a>
</p>
<br>

But in resume to use a `variadic function` you need to declare a `va_list` type variable in the function, and then use the `va_start`, `va_arg`, and `va_end` macros to access the arguments.

<br>

# `How to use the printf?` 📌

The `printf` function is a variadic function, which means it can accept a variable number of arguments. The first argument is a format string that specifies how to format the remaining arguments. The format string can contain plain text and format specifiers. The format specifiers are placeholders that are replaced with the values of the remaining arguments.

For example: 

```c
#include <stdio.h>

int main() {
    int num = 42;
    printf("The answer is %d\n", num);
    return 0;
}
```

The format string "The answer is %d\n" contains the format specifier `%d`, which is replaced with the value of the variable `num`. The output of the program is "The answer is 42".

<br>

# `Bonus Part` 📑

The bonus part of the project is to handle the following flags and modifiers:

- `+` : print a plus sign (+) in front of positive numbers and a minus sign (-) in front of negative numbers
- `0` : print zeros (0) instead of spaces when padding numbers
- `#` : print the number in an alternative format
- ` ` : print a space in front of positive numbers
- `-` : left-align the number within the specified width
- `.` : specify the number of decimal places to print for floating-point numbers

<br>

# `How to use my printf?`

First, you will be clone my repository:

<br>

- With a `SSH` key:
```shell
git clone git@github.com:Chrystian-Natanael/Printf.git
```
<br>

- Whithout a `SSH` key:
```shell
git clone https://github.com/Chrystian-Natanael/Printf.git
```
<br>

After that, you will be compile the project with the command bellow:

- For mandatory part:

```shell
make
```
<br>

- For bonus part:

```shell
make bonus
```
<br>

Now you can use the `libftprintf.a` library in your project. You can use the `ft_printf` function as you would use the `printf` function from the standard library.

- Main example:

```c
#include "ft_printf.h"

int main() {
    int num = 42;
    ft_printf("The answer is %d\n", num);
    return 0;
}
```
<br>

To compile the program, you will be use the command bellow:

```shell
gcc main.c libftprintf.a
```
