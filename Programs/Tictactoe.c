#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

char grid[3][3] =   {{' ',' ',' '},
                    {' ',' ',' '},
                    {' ',' ',' '}};

const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

void displayGrid() {
    for (int i=0; i<sizeof(grid)/sizeof(grid[0]); i++) {
        for (int j=0; j<sizeof(grid[0])/sizeof(grid[0][0]); j++) {
            printf("%c", grid[i][j]);
            if (j != 2) {
                printf(" | ");
            }
        }
        if (i != 2) {
            printf("\n--|---|--\n");
        }
    }
}

void resetGrid() {
    for (int i=0; i<sizeof(grid)/sizeof(grid[0]); i++) {
        for (int j=0; j<sizeof(grid[0])/sizeof(grid[0][0]); j++) {
            grid[i][j] = ' ';
        }
    }
}

makeMove(playerTurn) {
    int row;
    int column;
    bool selection = 0;
    do {
        printf("\nChoose a row: ");
        scanf("%d", &row);
        row--;
        printf("Choose a column: ");
        scanf("%d", &column);
        column--;
        if (grid[row][column] != ' ') {
            printf("Invalid move.");
        }
        else {
            if (playerTurn) {
                grid[row][column] = PLAYER1;
            }
            else {
                grid[row][column] = PLAYER2;
            }
            selection = true;
        }
    } while (!selection);   
}

bool checkFreeSpaces() {
    for (int i=0; i<sizeof(grid)/sizeof(grid[0]); i++) {
        for (int j=0; j<sizeof(grid[0])/sizeof(grid[0][0]); j++) {
            if (grid[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

char checkWinner() {
    for (int i=0; i<sizeof(grid)/sizeof(grid[0]); i++) {
        if (grid[i][0]==grid[i][1] && grid[i][0]==grid[i][2]) {
            return grid[i][0];
        }
    }
    for (int j=0; j<sizeof(grid)/sizeof(grid[0]); j++) {
        if (grid[0][j]==grid[1][j] && grid[0][j]==grid[2][j]) {
            return grid[0][j];
        }
    }
    if ((grid[0][0]==grid[1][1] && grid[0][0]==grid[2][2]) ||
    (grid[0][2]==grid[1][1] && grid[0][2]==grid[2][0])) {
        return grid[1][1];
    }
    return ' ';
}

int main() {
    
    bool noFreeSpaces = false;
    bool player1Turn = true;
    bool gameOver = false;
    char winner = ' ';
    char playAgain[1];

    while (!gameOver) {
        displayGrid();
        makeMove(player1Turn);
        player1Turn = !player1Turn;
        noFreeSpaces = checkFreeSpaces();
        winner = checkWinner();
        if (winner != ' ') {
            displayGrid();
            printf("\n%c has won the game! Well done!", winner);
        }
        else if (noFreeSpaces) {
            printf("\nThere are no more free spaces, the game is a draw.");
        }
        if (winner!=' ' || noFreeSpaces) {
            printf("\nDo you want to play again, Answer with Y or N: ");
            scanf("%s", &playAgain);
            strupr(playAgain);
            int result = strcmp(playAgain, "N");
            if (result==0) {
                gameOver = true;
            }
            else {
                resetGrid();
            }
        }
    }
    return 0;
}
