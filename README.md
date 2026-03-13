# Mini Terminal in C

## Overview

This project implements a **simple terminal (mini-shell) written in C**.
It simulates the behavior of a basic command-line interface by allowing the user to enter commands that are then interpreted and executed by the program.

The program continuously waits for user input, parses the command, and executes it through the operating system. It can run system commands available in the environment and can also be extended to support custom built-in commands.

The goal of this project is mainly educational: to understand how command-line interpreters work internally, how user input is processed, and how programs interact with the operating system.

---

# Features

* Interactive command prompt
* Execution of system commands
* Basic command parsing
* Modular architecture using `.c` and `.h` files
* Extensible design for adding new commands
* Continuous execution loop until the user exits

---

# How It Works

The program follows the basic structure of a command interpreter:

1. Display a prompt
2. Wait for user input
3. Parse the input command
4. Execute the command
5. Repeat until the user exits

Simplified flow:

```
while (running)
    display prompt
    read user input
    parse command
    execute command
```

The shell relies on system-level functions to execute commands on the operating system.

---

# Project Architecture

The project is organized into multiple source files to keep the code modular and maintainable.

```
project/
│
├── main.c
├── shell.c
├── shell.h
├── parser.c
├── parser.h
├── commands.c
├── commands.h
```

### File Description

#### `main.c`

Entry point of the program.
It starts the shell and initializes the main execution loop.

#### `shell.c`

Contains the core shell loop.
Handles user interaction, displays the prompt, and reads input.

#### `shell.h`

Header file defining the shell interface and function prototypes.

#### `parser.c`

Responsible for parsing the user input and splitting the command into arguments.

#### `parser.h`

Header defining the parser functions.

#### `commands.c`

Handles the execution of commands, including built-in commands and system commands.

#### `commands.h`

Header file defining command execution functions.

---

# Installation

## Requirements

* A C compiler such as GCC
* A system running Microsoft Windows or a Unix-like environment

## Compilation

Compile the project using:

```
gcc main.c shell.c parser.c commands.c -o myterminal
```

This will generate the executable:

```
myterminal
```

or

```
myterminal.exe
```

depending on the operating system.

---

# Usage

Run the program:

```
./myterminal
```

or on Windows:

```
myterminal.exe
```

Example session:

```
myterminal> dir
myterminal> mkdir test
myterminal> ipconfig
myterminal> exit
```

The shell reads the command entered by the user and executes it through the system.

---

# Built-in Commands

The project can support internal commands implemented directly in C.

Example built-ins:

| Command | Description                   |
| ------- | ----------------------------- |
| `exit`  | Terminates the shell          |
| `cd`    | Changes the current directory |
| `echo`  | Displays text                 |

Additional commands can be implemented inside `commands.c`.

---

# Possible Use Cases

This project can be used for several purposes:

### Learning Operating Systems

Understanding how shells interact with the operating system and how commands are executed.

### Learning Modular C Programming

Practicing the separation between headers (`.h`) and implementations (`.c`).

### Educational Shell Development

Serving as a base for building more advanced shell features such as:

* pipes
* command history
* auto-completion
* scripting support

### Systems Programming Practice

Understanding:

* command parsing
* process creation
* interaction with system utilities

---

# Future Improvements

Possible enhancements include:

* command history
* piping (`|`)
* input/output redirection (`>`, `<`)
* background execution (`&`)
* command auto-completion
* environment variable support

---

# Educational Purpose

This project is designed as a **learning tool** for students studying:

* systems programming
* operating systems
* command-line interfaces
* modular C software architecture

---

# License

This project is open for educational and experimental use.
