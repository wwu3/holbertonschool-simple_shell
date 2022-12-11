# Simple Shell
A simple UNIX command line interpreter


![image](https://user-images.githubusercontent.com/113806658/206880492-e6db78f9-e057-4ac5-9d23-b8466809b706.png)

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#Example of use">Example of use</a></li>
        <li><a href="#Flowchart">Flowchart</a></li>
      </ul>
    </li>
    <li><a href="#Authors">Authors</a></li>
   </ol>
 </details>  
 
      
## Complilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -g *.c -o hsh

## Usage
To use the shell, complie all the .c files and execute the ***hsh*** file

## Style of coding
All files are written in C programming language following the **betty style of coding**

## File description
**builtin_functions.c** -- this file is containing the definition of all the builtin functions which we are executing in this simple shell.  Such as: ***cd***, ***env***, and ***exit*** 

**check_command.c** -- this file is checking and executing the corressponding builtin function.

**exec.c** -- this file is calling the fork process.  

**get_input.c** -- this file is containing the _getline function which gets the user input.

**main.c** -- this file is containing the shell function which gives prompt to the user.  And also it contains the main function which executes our shell. 

**man_shell** -- this is the **manual** for **simple shell**.

**shell.h** -- this file includes all the standard libraries, all functions prototypes and structure of the program.

**split_line.c** -- this file is splitting the line into tokens using the delimiters.

      
<!-- ABOUT THE PROJECT -->
## About The Project 






<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->
## Getting Started

### Example of use


### Flowchart
![image](https://user-images.githubusercontent.com/113806658/206880804-92dfd2fb-7cb9-4c6d-9d6c-1d1873ea5e2d.png)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- AUTHORS -->
## Authors
Matt Buckingham, Pallavi Jagtap and Wendy Wu




