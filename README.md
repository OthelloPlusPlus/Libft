# Introduction
A compliation of several projects which together create the static library **libft.a**. The library was originally created during the **Libft** project and contains a group of useful functions, most of which are replications of existing functions. Others are similar functions which one might expect to exist in the offical libraries, but do not. This has later been completmented in the projects **ft_printf** and **get_next_line**, and has been further complemented by functions I found useful for general usage during later projects.

The projects have been made for study at [**Codam**](https://www.codam.nl/), part of [**42network**](https://www.42network.org/).

Projects have been made conform **42**'s requirements, with exceptions where compliance resulted in less clean code.

## Table of Contents
- [Execution](#Execution)
- [Libft](#Libft)
- [ft_printf](#ft_printf)
- [get_next_line](#get_next_line)

## Execution
Functions have been designed and optimized for MacOS.
Some adjustments have been made for cross platform compatability, however this can result in undefined behavior.

| Commands ||
| --- | --- |
| **make** | Creates the static library **libft.a** |
| **make show** | Generates a list of files contained in **libft.a** |
| **make norminette** | Checks all .c and .h files for their compliance to educational parameters. Requires Norminette to be installed. |
| **make signature** | Prints an animated signature to the standard output |

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
**Score:** 120%
> "Nice printf, very well explained and you defended the choices you made. Also very nice you made a tester as well."
>		- Puck Oude Veldhuis

> "Amazing work! You've made a very intricate and stubborn printf. It's very readable due to the comments and you explained it well. I appreciate that you choose your code's integrity over getting the maximum amount of points, a respectable decision. Keep up the good work!"
>		- Acco Bartelds

> "The 0 flag has a few issues (intentionally) and while I can see the point, I'll have to subtract a few points from the bonus because of it. Other than that, a FANTASTIC job. Very well explained and very thorough tester. Keep doing your best!"
>		- Giovanni Nieuwkamp

## get_next_line
Project creating a function which reads a file discriptor and returns it contents one line at a time.

### Evaluations
**Score:** 124%
> "Orlando did a great job. Short and compact code, and working well. What I am incredibly surprised is that he wrote his own tester (that I have a feeling even cost more time than the actual assignment), which had good test cases. Unfortunately the code does not protect each and every malloc related function, and hence is exposed to failure. Furthermore the bonus part might fail because of the limited number of file descriptors he made available. Lastly, the tester might flag multiple static variables in the bonus part, which in fact would not be the case. Overall very well done and I am impressed."
>		- Peter Molnar

> "Your get_next_line project looks great, everything works as it should, and you also made a good tester that demonstrates this very well."
>		- Dirk Van Krieken

> "Very nice work! Very clean and also nice self made tester! Good luck!!"
>		- Milan Weitenberg
