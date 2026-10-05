// Transpose a Square Matrix Without Extra Space
#include <stdio.h>

void matrixTransposeExisitng(int n, int matrix[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main()
{

    int row, col;
    printf("Enter Row and col: \n");
    scanf("%d %d", &row, &col);

    int matrix2[row][col];

    printf("Enter Elements\n");
    for (int i = 0; i < row; i++)
    {
        printf("row - %d\n", i + 1);
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (row == col)
    {
        matrixTransposeExisitng(row, matrix2);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d ", matrix2[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        printf("For an existing matrix, rows and columns should be equal\n");
    }
    return 0;
}