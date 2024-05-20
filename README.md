# Tic Tac Toe Game

A Tic Tac Toe game played in the terminal, written in C++.

This was the first small game project built as part of my C++ learning experience.

I wanted to use this project to put into practice some of the C++ topics that I had learnt from a course. These included:

- loops
- vectors
- functions
- Header files

![Screenshot of the Tic Tac Toe gameplay in Terminal](./screenshot.png)


## Installation and Setup Instructions

MacOS includes Clang as part of the Xcode Command Line Tools, which you need to install to compile C++ applications.

Run the following command to check if you have Xcode Command Line Tools installed:

```
xcode-select --install
```

If the tools are not already installed, you will be prompted to install them. Follow the on-screen instructions.

Check if the installation was successful by running the following command which will print the C++ compiler version installed on your system:

```
g++ --version
```

## Run the Game

Compile the files:

```
g++ -std=c++11 tic_tac_toe.cpp tic_tac_toe_fn.cpp
```

Run the game:

```
./a.out
```