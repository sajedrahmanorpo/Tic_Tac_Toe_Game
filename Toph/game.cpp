/*
    Tic-Tac-Toe (Human vs Unbeatable Computer)
    -------------------------------------------
    Compile : g++ -o tictactoe tictactoe.cpp
    Run     : ./tictactoe

    You play 'X', the computer plays 'O' and uses the Minimax
    algorithm, so it never loses (best you can do is a draw).
*/

#include <iostream>
#include <vector>
#include <limits>
#include <cstdlib>
using namespace std;

const char HUMAN = 'X';
const char COMPUTER = 'O';
const char EMPTY = ' ';

vector<char> board(9, EMPTY);

void printBoard() {
    cout << "\n";
    for (int r = 0; r < 3; r++) {
        cout << "  ";
        for (int c = 0; c < 3; c++) {
            int i = r * 3 + c;
            char ch = board[i];
            if (ch == EMPTY) cout << (i + 1); // show cell number if empty
            else cout << ch;
            if (c < 2) cout << " | ";
        }
        cout << "\n";
        if (r < 2) cout << " ---+---+---\n";
    }
    cout << "\n";
}

// Returns HUMAN, COMPUTER, 'D' (draw) or 0 (game not over)
char checkWinner() {
    int lines[8][3] = {
        {0,1,2},{3,4,5},{6,7,8}, // rows
        {0,3,6},{1,4,7},{2,5,8}, // cols
        {0,4,8},{2,4,6}          // diagonals
    };
    for (auto &l : lines) {
        if (board[l[0]] != EMPTY && board[l[0]] == board[l[1]] && board[l[1]] == board[l[2]])
            return board[l[0]];
    }
    for (char c : board) if (c == EMPTY) return 0; // not full -> not over
    return 'D'; // full board, no winner
}

int minimax(int depth, bool isMaximizing) {
    char result = checkWinner();
    if (result == COMPUTER) return 10 - depth;
    if (result == HUMAN) return depth - 10;
    if (result == 'D') return 0;

    if (isMaximizing) {
        int best = numeric_limits<int>::min();
        for (int i = 0; i < 9; i++) {
            if (board[i] == EMPTY) {
                board[i] = COMPUTER;
                best = max(best, minimax(depth + 1, false));
                board[i] = EMPTY;
            }
        }
        return best;
    } else {
        int best = numeric_limits<int>::max();
        for (int i = 0; i < 9; i++) {
            if (board[i] == EMPTY) {
                board[i] = HUMAN;
                best = min(best, minimax(depth + 1, true));
                board[i] = EMPTY;
            }
        }
        return best;
    }
}

int bestMove() {
    int bestVal = numeric_limits<int>::min();
    int move = -1;
    for (int i = 0; i < 9; i++) {
        if (board[i] == EMPTY) {
            board[i] = COMPUTER;
            int moveVal = minimax(0, false);
            board[i] = EMPTY;
            if (moveVal > bestVal) {
                bestVal = moveVal;
                move = i;
            }
        }
    }
    return move;
}

void announceResult(char result) {
    printBoard();
    if (result == HUMAN) cout << "You win! Impressive -- the AI slipped up.\n";
    else if (result == COMPUTER) cout << "Computer wins! Better luck next time.\n";
    else cout << "It's a draw!\n";
}

int main() {
    cout << "===== TIC-TAC-TOE : You (X) vs Computer (O) =====\n";
    cout << "Enter a number 1-9 to place your mark:\n";
    cout << " 1 | 2 | 3 \n ---+---+---\n 4 | 5 | 6 \n ---+---+---\n 7 | 8 | 9 \n";

    char playAgain = 'y';
    while (playAgain == 'y' || playAgain == 'Y') {
        fill(board.begin(), board.end(), EMPTY);
        bool humanTurn = true;

        // Ask who goes first
        cout << "\nDo you want to go first? (y/n): ";
        char first;
        if (!(cin >> first)) break; // no more input (e.g. EOF)
        humanTurn = (first == 'y' || first == 'Y');

        while (true) {
            printBoard();
            char result = checkWinner();
            if (result != 0) {
                announceResult(result);
                break;
            }

            if (humanTurn) {
                int choice;
                cout << "Your move (1-9): ";
                if (!(cin >> choice)) {
                    if (cin.eof()) { cout << "\nNo more input, exiting.\n"; return 0; }
                    cin.clear(); cin.ignore(10000, '\n');
                    cout << "Please enter a number.\n";
                    continue;
                }
                choice--;
                if (choice < 0 || choice > 8 || board[choice] != EMPTY) {
                    cout << "Invalid move, try again.\n";
                    continue;
                }
                board[choice] = HUMAN;
            } else {
                cout << "Computer is thinking...\n";
                int move = bestMove();
                board[move] = COMPUTER;
            }
            humanTurn = !humanTurn;
        }

        cout << "Play again? (y/n): ";
        if (!(cin >> playAgain)) break; // no more input (e.g. EOF)
    }

    cout << "Thanks for playing!\n";
    return 0;
}