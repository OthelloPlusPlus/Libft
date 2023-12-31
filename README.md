# Introduction
A compilation of several projects written in **C code** which together create the static library **libft.a**. The library was originally created during the [**Libft**](src) project and contains a group of useful functions, most of which are recreations of existing functions. Others are similar functions which one might expect to exist in the offical libraries, but do not. This library has later been complemented with the functions from the projects [****ft_printf****](src/ft_printf) and [**get_next_line**](src/get_next_line) and other functions I found useful for general usage.

The projects are part of the curriculum at [**Codam**](https://www.codam.nl/), part of [**42network**](https://www.42network.org/). 

Projects have been made conform **42**'s requirements, with exceptions where compliance resulted in less clean code.

## Table of Contents
- [Usage](#usage)
- Projects
  - [Libft](#libft)
  - [ft_printf](#ft_printf)
  - [get_next_line](#get_next_line)
- [Creator](#creator)

# Usage
Functions have been designed and optimized for MacOS.
Some adjustments have been made for cross platform compatability, however using it on other platforms can still result in undefined behavior.

<table>
	<thead style="background-color: #C0C0C0;">
		<tr><th colspan="3">Terminal Commands</th></tr>
		<tr>
			<th>Command</th>
			<th>Arguments</th>
			<th>Functionality</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td><a href="Makefile" target="_blank">make</a></td>
			<td></td>
			<td>Creates the static library <b>libft.a</b></td>
		</tr>
		<tr>
			<td><a href="Makefile" target="_blank">make</a></td>
			<td>show</td>
			<td>Generates a list of files contained in <b>libft.a</b></td>
		</tr>
		<tr>
			<td><a href="Makefile" target="_blank">make</a></td>
			<td>norminette</td>
			<td>Checks all .c and .h files for their compliance to educational parameters.<br>Requires Norminette to be installed.</td>
		</tr>
		<tr>
			<td><a href="Makefile" target="_blank">make</a></td>
			<td>signature</td>
			<td>Prints an animated signature to the standard output</td>
		</tr>
		<tr>
			<td>gcc *.c</td>
			<td>-L. -lft</td>
			<td>Includes the static library <b>libft.a</b> to compliation.</td>
		</tr>
	</tbody>
</table>

## Libft
Original project creating the static archive, replicating existing functions and adding a few.

**Score:** 120%
> "for the lst_add_front function you could add a protection for empty new, this would make sure your list cannot get lost when new is set to NULL. bonus files should be called *_bonus"
> 		- Oswin Florian Bult

> "Well designed library. Bonusses didn't have _bonus after them unfortunately. Well done!"
> 		- Maarten Joosten

> "The best descriptions on the functions so far. Try to be consistent with choices about protections, so you know what to expect from your own code. Some points were debatable because segfault could occur, but the binary's also segfaulted, so we approved."
> 		- Pascal Rudolphus Jacobus Spijkstra

## ft_printf
Project creating a function replicating printf's behavior. Afterwards ft_dprintf and ft_strprintf were added. ft_dprintf replicated the behavior of dprintf. ft_strprintf does not print its string but returns it instead.

### Project Evaluation
**Score:** 120%
> "Nice printf, very well explained and you defended the choices you made. Also very nice you made a tester as well."
>		- Puck Oude Veldhuis

> "Amazing work! You've made a very intricate and stubborn printf. It's very readable due to the comments and you explained it well. I appreciate that you choose your code's integrity over getting the maximum amount of points, a respectable decision. Keep up the good work!"
>		- Acco Bartelds

> "The 0 flag has a few issues (intentionally) and while I can see the point, I'll have to subtract a few points from the bonus because of it. Other than that, a FANTASTIC job. Very well explained and very thorough tester. Keep doing your best!"
>		- Giovanni Nieuwkamp

## get_next_line
Project creating a function which reads a file descriptor and returns its contents one line per call of the function.

### Project Evaluation
**Score:** 124%
> "Orlando did a great job. Short and compact code, and working well. What I am incredibly surprised is that he wrote his own tester (that I have a feeling even cost more time than the actual assignment), which had good test cases. Unfortunately the code does not protect each and every malloc related function, and hence is exposed to failure. Furthermore the bonus part might fail because of the limited number of file descriptors he made available. Lastly, the tester might flag multiple static variables in the bonus part, which in fact would not be the case. Overall very well done and I am impressed."
>		- Peter Molnar

> "Your get_next_line project looks great, everything works as it should, and you also made a good tester that demonstrates this very well."
>		- Dirk Van Krieken

> "Very nice work! Very clean and also nice self made tester! Good luck!!"
>		- Milan Weitenberg

# Creator
Othello<br>
[<img alt="LinkedIn" height="32px" src="https://github.githubassets.com/images/modules/logos_page/GitHub-Mark.png" target="_blank" />](https://github.com/OthelloPlusPlus)
[<img alt="LinkedIn" height="32px" src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/LinkedIn_logo_initials.png/600px-LinkedIn_logo_initials.png" target="_blank" />](https://nl.linkedin.com/in/orlando-hengelmolen)
