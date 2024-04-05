#include "definitions.h"


char board[13][29];
int chosenLetters[8][9]; 
int availableLetters[7] = {13, 13, 13, 13, 13, 13, 13};

void welcome()
{
    printf("Welcome to the Connect Four game!\n");
    printf("Game of four - rules\nA two-player game on a 6 x 7 board, in which the goal is for one player to place four of his counters in one line - vertically, horizontally, or diagonally.\nThe game ends after Saved by the required number of markers in a line or by filling the markers on the entire board.\nTo select the desired location of the marker, enter the letter corresponding to the column and send it by clicking enter.\nThe marker falls on the first possible place from the top and blocks the possibility of placing it element in a given segment.\nHave fun!\n");
}

void fillBoard()
{
    int i, j;  
    for(i = 0; i < 13; i++)
    {
        for(j = 0; j < 29; j++)
        {
            if(i > 0)
            {
                if(j % 4 == 0)
                    board[i][j] = '|';
                else if(i % 2 == 0)
                    board[i][j] = '_';
                else
                    board[i][j] = ' ';
            }
            else
                board[i][j] = '_';
        }
    }
}

void showBoard()
{
    printf("%s", "  A   B   C   D   E   F   G\n");
    int i, j;
    for(int i = 0; i < 13; i++)
    {
        for(int j = 0; j < 29; j++)
            printf("%c", board[i][j]);
        printf("%c", '\n');
    }
    printf("%c", '\n');
}


void roundMessage(bool contestantNumber)
{
    if(contestantNumber == 0)
        printf("%s %d %s%s", "Player", 1, "turn.\n", "Please type the letter of the column, from A to G and confirm your choice with enter: \n");
    else
        printf("%s %d %s%s", "Player", 2, "turn.\n", "Please type the letter of the column, from A to G or a to g and confirm your choice with enter: \n");
}

bool move(bool contestantNumber, char chosenColumn)
{
    switch(chosenColumn)
    {
        case 'A':
            if(availableLetters[0] > 1)
            {
                if(contestantNumber == 0)
                {
                    board[availableLetters[0] - 2][2] = 'X';
                    chosenLetters[(availableLetters[0]) / 2][1] = 1;
                    
                }
                else
                {
                    board[availableLetters[0] - 2][2] = 'O';
                    chosenLetters[(availableLetters[0]) / 2][1] = 2;
                }
                availableLetters[0] -= 2;
            } 
            else
            {
                printf("%s","This column is full, please choose a different one.\n\n");
                return false;
            }
            return true;
        case 'B':
            if(availableLetters[1] > 1)
            {
                if(contestantNumber == 0)
                {
                    board[availableLetters[1] - 2][6] = 'X';
                    chosenLetters[(availableLetters[1]) / 2][2] = 1;
                }
                else
                {
                    board[availableLetters[1] - 2][6] = 'O';
                    chosenLetters[(availableLetters[1]) / 2][2] = 2;
                }
                availableLetters[1] -= 2;
            } 
            else
            {
                printf("%s","This column is full, please choose a different one.\n\n");
                return false;
            }
            return true;
        case 'C':
            if(availableLetters[2] > 1)
            {
                if(contestantNumber == 0)
                {
                    board[availableLetters[2] - 2][10] = 'X';
                    chosenLetters[(availableLetters[2]) / 2][3] = 1;
                }
                else
                {
                    board[availableLetters[2] - 2][10] = 'O';
                    chosenLetters[(availableLetters[2]) / 2][3] = 2;
                }
                availableLetters[2] -= 2;
            } 
            else
            {
                printf("%s","This column is full, please choose a different one.\n\n");
                return false;
            }
            return true;
        case 'D':
            if(availableLetters[3] > 1)
            {
                if(contestantNumber == 0)
                {
                    board[availableLetters[3] - 2][14] = 'X';
                    chosenLetters[(availableLetters[3]) / 2][4] = 1;
                }
                else
                {
                    board[availableLetters[3] - 2][14] = 'O';
                    chosenLetters[(availableLetters[3]) / 2][4] = 2;
                }
                availableLetters[3] -= 2;
            } 
            else
            {
                printf("%s","This column is full, please choose a different one.\n\n");
                return false;
            }
            return true;
        case 'E':
            if(availableLetters[4] > 1)
            {
                if(contestantNumber == 0)
                {
                    board[availableLetters[4] - 2][18] = 'X';
                    chosenLetters[(availableLetters[4]) / 2][5] = 1;
                }
                else
                {
                    board[availableLetters[4] - 2][18] = 'O';
                    chosenLetters[(availableLetters[4]) / 2][5] = 2;
                }
                availableLetters[4] -= 2;
            } 
            else
            {
                printf("%s","This column is full, please choose a different one.\n\n");
                return false;
            }
            return true;
        case 'F':
            if(availableLetters[5] > 1)
            {
                if(contestantNumber == 0)
                {
                    board[availableLetters[5] - 2][22] = 'X';
                    chosenLetters[(availableLetters[5]) / 2][6] = 1;
                }
                else
                {
                    board[availableLetters[5] - 2][22] = 'O';
                    chosenLetters[(availableLetters[5]) / 2][6] = 2;
                }
                availableLetters[5] -= 2;
            } 
            else
            {
                printf("%s","This column is full, please choose a different one.\n\n");
                return false;
            }
            return true;
        case 'G':
            if(availableLetters[6] > 1)
            {
                if(contestantNumber == 0)
                {
                    board[availableLetters[6] - 2][26] = 'X';
                    chosenLetters[(availableLetters[6]) / 2][7] = 1;
                }
                else
                {
                    board[availableLetters[6] - 2][26] = 'O';
                    chosenLetters[(availableLetters[6]) / 2][7] = 2;
                }
                availableLetters[6] -= 2;
            } 
            else
            {
                printf("%s","This column is full, please choose a different one.\n\n");
                return false;
            }
            return true;
        default:
            return false;
    }
}


void startPoints(char chosenColumn, int* i, int* j)
{
    int comparison = chosenColumn - 'A';
    switch(comparison)
    {
        case 0:
            *i = 8 - ((13 - availableLetters[0]) / 2) - 1;
            *j = 1;
            return;
        case 1:
            *i = 8 - ((13 - availableLetters[1]) / 2) - 1;
            *j = 2;
            return;
        case 2:
            *i = 8 - ((13 - availableLetters[2]) / 2) - 1;
            *j = 3;
            return;
        case 3:
            *i = 8 - ((13 - availableLetters[3]) / 2) - 1;
            *j = 4;
            return;
        case 4:
            *i = 8 - ((13 - availableLetters[4]) / 2) - 1;
            *j = 5;
            return;
        case 5:
            *i = 8 - ((13 - availableLetters[5]) / 2) - 1;
            *j = 6;
            return;
        case 6:
            *i = 8 - ((13 - availableLetters[6]) / 2) - 1;
            *j = 7;
            return;
        default:
            return;
    }
}

bool checkWin1(int i, int j)
{
    int dx[] = {1, 0, 1, -1}; 
    int dy[] = {0, 1, 1, 1};  
    for (int dir = 0; dir < 4; ++dir) 
    {
        int count = 1; 
        for (int d = -1; d <= 1; d += 2) 
        {
            int x = i, y = j; 
            while (true) 
            {
                x += d * dx[dir]; 
                y += d * dy[dir];
                if (x < 0 || x >= 8 || y < 1 || y > 7 || chosenLetters[x][y] != 1)
                    break;
                ++count; 
                if (count >= 4)
                    return true;
            }
        }
    }
    return false;
}




bool checkWin2(int i, int j)
{
    int dx[] = {1, 0, 1, -1}; 
    int dy[] = {0, 1, 1, 1};  
    for (int dir = 0; dir < 4; ++dir) 
    {
        int count = 1; 
        for (int d = -1; d <= 1; d += 2) 
        {
            int x = i, y = j; 
            while (true) 
            {
                x += d * dx[dir]; 
                y += d * dy[dir];
                if (x < 0 || x >= 8 || y < 1 || y > 7 || chosenLetters[x][y] != 2)
                    break;
                ++count; 
                if (count >= 4)
                    return true;
            }
        }
    }
    return false;
}


void game()
{
    welcome();
    fillBoard();
    showBoard();
    int i, j;
    int numberOfUsedFields = 0;
    int player1Score = 0;
    int player2Score = 0;
    bool availableSpace = 1;
    bool contestantNumber = 0;
    bool isAdded;
    char chosenColumn;
    char isEnter;
    while(availableSpace)
    {
        roundMessage(contestantNumber);
        if(scanf("%c",  &chosenColumn) == -1)
        {
            printf("Scanf fault, please type the letter from A to G once again\n\n");
            continue;
        }
        if(scanf("%c", &isEnter) == -1)
        {
            printf("Scanf fault, please confirm your choice with enter once again\n\n");
            continue;
        }
        chosenColumn = toupper(chosenColumn);
        if((chosenColumn >= 'A' && chosenColumn <= 'G') == 0 || isEnter != '\n')
        {
            printf("Please enter the column name from A to G or from a to G and confirm your choice with enter\n\n\n");
            continue;
        }
        if(move(contestantNumber, chosenColumn) == 0)
            continue;
        startPoints(chosenColumn, &i, &j);
        showBoard();
        if(contestantNumber == 0)
        {
            if(checkWin1(i, j))
            {
                printf("Player 1 wins");
                return;
            }
        }
        else
        {
            if(checkWin2(i, j))
            {
                printf("Player 2 wins");
                return;
            }
        }
        if(contestantNumber == 0)
            contestantNumber = 1;
        else
            contestantNumber = 0;
        numberOfUsedFields++;
        if(numberOfUsedFields >= 42)
            availableSpace = 0;
    }
    if(numberOfUsedFields >= 42)
        printf("%s", "The game has ended, tie!\n");
}