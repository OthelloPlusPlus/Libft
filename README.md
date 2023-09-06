# Libft
An archive containing a collection of functions. These functions can be divided in 4 categories.
- libft
- ft_printf
- get_next_line
- additionals

## Table of Contents
- [Libft](#Libft)
	- [Introduction](#introduction)

## Introduction

## Execution
Functions have been designed and optimized for MacOS.
Some adjustments have been made for chross platform compatability, however this can result in undefined behavior.

Creates static library **libft.a** to be used in other projects.

| Commands ||
| --- | --- |
| **make** | Creates the static library **libft.a** |
| **make norminette** | Checks all .c and .h files for their compliance to educational parameters. Requires Norminette to be installed. |
| **make signature** | Prints an animated signature to the standard output. |

## Libft
Original project creating the static archive, replicating existing functions and adding a few.

### Evaluations
**Score:** 120%

> "for the lst_add_front function you could add a protection for empty new, this would make sure your list cannot get lost when new is set to NULL. bonus files should be called *_bonus"
> 		- Oswin Florian Bult

> "Well designed library. Bonusses didn't have _bonus after them unfortunately. Well done!"
> 		- Maarten Joosten

> "The best descriptions on the functions so far. Try to be consistent with choices about protections, so you know what to expect from your own code. Some points were debatable because segfault could occur, but the binary's also segfaulted, so we approved."
> 		- Pascal Rudolphus Jacobus Spijkstra

## ft_printf
Project creating a function replicating printf's behavior. Added ft_dprintf (replicating dprintf) and ft_strprintf (returning the string in stead of printing it).

### Evaluations


## get_next_line
Project creating a function which reads a file discriptor and returns it contents one line at a time.

### Evaluations

## Additionals
The functionality of other projects required additional functions to be build. Whenever possible these functions were build in the most generalized way, allowing for more frequent usage. Those were added to the libft library.
