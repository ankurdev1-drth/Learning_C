#include <stdio.h>

int evaluate_position(char board[8][8])
{
    int sw = 0;
    int sb = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i][j] == 'Q')
                sw += 9;
            else if (board[i][j] == 'R')
                sw += 5;
            else if (board[i][j] == 'B' || board[i][j] == 'N')
                sw += 3;
            else if (board[i][j] == 'P')
                sw += 1;

            else if (board[i][j] == 'q')
                sb += 9;
            else if (board[i][j] == 'r')
                sb += 5;
            else if (board[i][j] == 'b' || board[i][j] == 'n')
                sb += 3;
            else if (board[i][j] == 'p')
                sb += 1;
        }
    }

    return sw - sb;
}

int main(void)
{
    char board[8][8];

    printf("Enter the chessboard (8 rows, 8 pieces each):\n");

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            scanf(" %c", &board[i][j]);
        }
    }

    printf("Position value: %d\n", evaluate_position(board));

    return 0;
}

