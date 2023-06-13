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

<h3 align="center"> 🚨 UNIX SIGNAL HANDLING</h3>

*  understand what are unix signal and how they works
*  understand the functions of signal.h
*  Understand binary operators

<h3 align="center"> 🗣 CLIENT MANAGEMENT</h3>

*  Learn how to send signals from a C program
*  Search how to send characters using only UNIX signals
*  Get the right configuration of usleep() to stop the program but not a lot of time

<h3 align="center"> 👂 SERVER MANAGEMENT</h3>

*  Implement the use of static variables for each received signal

<h3 align="center">➕ BONUS PART</h3>

*  Use a sigaction struct and set it up correctly
*  Send signals from the server to the client
*  Add more usleep() in the client so it handle the signal received

<h3 align="center">🥬 EXTRA THINGS TO CONSIDER</h3>

*  Check that everyting passes norminette
*  Create the Makefile that creates both of the executables

<h2 align="center">⚙️ PROYECT GENERAL PROCEDURE ⚙️</h2>

<h3 align="center"> client.c explanation </h3>

The client receives via arguments the PID of the server and the string we have to send to the server. After that the client send each character to a function and that function sends 8 signals, one for each bit of the character. It starts from the MSB to the LSB passing it to the LSB and sending SIGUSR1 or SIGUSR2 depending on if the number is now even or odd.

<h3 align="center"> server.c explanation </h3>

The server prints in the terminal de PID, then we set the actions that are going to occur whe we receive a signal using the signal() function, After that we just wait until the client sends us the signal. When a signal is recived, we have to manage it correctly, the best option to do that is having a static octet and a static iterator, so when we get to 8 iterations (what means the octet we were receiving is formed) we print it and empty everyting.

<h3 align="center"> client_bonus.c explanation </h3>

While the rest of the code is the same as the client.c, now we have incremented the usleep() so that we have time to receive a signal and handle it. The confirmation_handler function is called when a signal is received. It prints "0" if the signal is SIGUSR2, and "1" if the signal is SIGUSR1. So tha tthe client now print the sent message in binary.

<h3 align="center"> server_bonus.c explanation </h3>

While the rest of the code is the same as the server.c, we are now using a sigaction structure to handle the signals, we are doing that because is the easiest way to get the ID of the client so that we can send a confirmation signal, after declaring the structur we have to configure it correctly, setting up the function we are going to use to handle signals, emptying the mask so that any signal is ignored and adding the SIGINFO flag to the structure in order to receive the PID of the client, after that, pretty much everything is the same except for that, after handling the signal, we send a signal back. 