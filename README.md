<a name="readme-top"></a>
# Simple Shell
A simple UNIX command line interpreter


![image](https://user-images.githubusercontent.com/113806658/206880492-e6db78f9-e057-4ac5-9d23-b8466809b706.png)

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#compliation">Compliation</a></li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#style-of-coding">Style of coding</a></li>
    <li><a href="#file-description">File description</a></li>
    <li> <a href="#about-the-project">About The Project</a></li>
    <li><a href="#authors">Authors</a></li>
  </ol>
</details>  

 <!-- COMPLIATION -->      
## Compliation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -g *.c -o hsh
```
<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- USAGE -->
## Usage

To use the shell, complie all the .c files and execute the ***hsh*** file

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- STYLE OF CODING -->
## Style of coding

All files are written in C programming language following the **betty style of coding**

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- FILE DESCRIPTION -->
## File description

**builtin_functions.c** -- this file is containing the definition of all the builtin functions which we are executing in this simple shell.  Such as: ***exit***, ***env*** and ***cd***. 

#### Example of ***exit***

<img width="320" alt="Screen Shot 2022-12-11 at 9 51 00 pm" src="https://user-images.githubusercontent.com/113806658/206899407-8eb5d00b-7e18-4b7b-8592-32494c0d8139.png">

#### Example of ***env***

<img width="944" alt="Screen Shot 2022-12-11 at 9 52 53 pm" src="https://user-images.githubusercontent.com/113806658/206899480-f8c09e68-7ed8-42e3-b648-51b5151272f8.png">




**check_command.c** -- this file is checking and executing the corressponding builtin function.

**exec.c** -- this file is calling the fork process.  

**get_input.c** -- this file is containing the _getline function which gets the user input.

**main.c** -- this file is containing the shell function which gives prompt to the user.  And also it contains the main function which executes our shell. 

**man_shell** -- this is the **manual** for **simple shell**.

**shell.h** -- this file includes all the standard libraries, all functions prototypes and structure of the program.

**split_line.c** -- this file is splitting the line into tokens using the delimiters.

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- ABOUT THE PROJECT -->
## About The Project 

The shell reads the given input from the user and splits it into tokens if the given input is more than one word.  The first given word is recognised as the command and following words are considered as arguments to the command.  Simple shell works as follows:

1. Checks if user input matches to the command, then it will execute the coprresponding function, if not then given error message.

2. If executable is found, the shell forks into a child process where the command is executable following any arguments.

3. The shell returns the output of the given command and it terminates the child process while the parent process waits for the child process to be terminated.

4. Shell returns a new line waiting for the next user input.

<p align="right">(<a href="#readme-top">back to top</a>)</p>



### Flowchart
![image](https://user-images.githubusercontent.com/113806658/206880804-92dfd2fb-7cb9-4c6d-9d6c-1d1873ea5e2d.png)

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- AUTHORS -->
## Authors
***Matt Buckingham, Pallavi Jagtap and Wendy Wu***




