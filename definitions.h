#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

extern char board[13][29];
extern int chosenLetters[8][9]; 
extern int availableLetters[7];

void welcome();
void fillBoard();
void showBoard();
void roundMessage(bool contestantNumber);
bool move(bool contestantNumber, char chosenColumn);
void startPoints(char chosenColumn, int* i, int* j);
bool checkWin1(int i, int j);
bool checkWin2(int i, int j);
void game();