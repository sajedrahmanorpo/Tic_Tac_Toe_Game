# 🎮 Unbeatable Tic-Tac-Toe Game (C++)

A Command-Line Interface (CLI) implementation of the classic **Tic-Tac-Toe** game written in C++. The game features an AI opponent powered by the **Minimax Algorithm**, making it completely unbeatable!

---

## Key Features

*  Smart AI Opponent:** Uses the Minimax decision-making algorithm to analyze all possible moves and ensure optimal gameplay.
*  Dynamic Board Interface:** Displays cell numbers dynamically to make moves effortless.
*  Replay System:** Play as many rounds as you want without restarting the executable.
*  Input Validation:** Prevents invalid user inputs (out-of-bound choices or overwriting occupied positions).
*  Choice of First Move:** Choose whether you want to move first (`X`) or let the computer start (`O`).

---

## Tech Stack & Concepts Used

* Language: C++11 (or higher)
* Standard Libraries: `<iostream>`, `<vector>`, `<limits>`, `<cstdlib>`
* Algorithms: Minimax Algorithm (Artificial Intelligence / Decision Theory)

---

## How to Run the Game

### 1. Prerequisites
Make sure you have a C++ compiler installed (such as `g++` via MinGW on Windows, or GCC on Linux/macOS).

### 2. Compilation
Open your terminal/command prompt, navigate to the directory where `tictactoe.cpp` is located, and run:

```bash
g++ -o tictactoe tictactoe.cpp
