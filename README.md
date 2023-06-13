<div align="center">
	<h1> minitalk </h1>
	<p> El propósito de este proyecto es crear un pequeño programa de intercambio de datos utilizando señales UNIX.</p>
	<img src="https://wakatime.com/badge/user/a0e860d2-9914-4fed-8143-b9fd5cf5e6c1/project/37b47c6c-f465-4ed4-a3f0-95c3fd5c3343.svg?style=flat"/>
	<br />
	<img src="https://img.shields.io/badge/norme-OK-success?style=flat"/>
	<img src="https://img.shields.io/badge/leaks-CLEAR-success?style=flat"/>
	<img src="https://img.shields.io/badge/-125%2F100-success?style=flat&logo=42&logoColor=000" />
</div>

<h2 align="center">📜 PROYECT DESCRIPTION 📜</h2>

Este proyecto tiene como objetivo principal la implementación de un sistema de comunicación entre un cliente y un servidor utilizando exclusivamente señales UNIX. Este proyecto busca brindar una comprensión profunda de las señales y cómo se pueden utilizar para establecer una comunicación básica entre procesos.

<h2 align="center">🌲 PROYECT TREE 🌲</h2>

```
.
├── Makefile
├── README.md
├── libft/
├── client.c
├── client_bonus.c
├── server.c
└── server_bonus.c

```

<h2 align="center">🚶🏻‍♂️ PROYECT ROADMAP 🚶</h2>

<h3 align="center"> [descriptive emoji] UNIX SIGNAL HANDLING</h3>

*  understand what are unix signal and how they works
*  understand the functions of signal.h
*  Understand binary operators

<h3 align="center"> [descriptive emoji] CLIENT MANAGEMENT</h3>

*  Learn how to send signals from a C program
*  Search how to send characters using only UNIX signals
*  Get the right configuration of usleep() to stop the program but not a lot of time

<h3 align="center"> [descriptive emoji] SERVER MANAGEMENT</h3>

*  Implement the use of static variables for each received signal

<h3 align="center">🥬 BONUS PART</h3>

*  Use a sigaction struct and set it up correctly
*  Send signals from the server to the client
*  Add more usleep() in the client so it handle the signal received

<h3 align="center">🥬 EXTRA THINGS TO CONSIDER</h3>

*  Check that everyting passes norminette
*  Create the Makefile that creates both of the executables

<h2 align="center">⚙️ PROYECT GENERAL PROCEDURE ⚙️</h2>