// Print the Transpose of a Matrix

#include <stdio.h>

void transposePrint(int row, int col, int arr[row][col])
{
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void matrixTranspose(int row, int col, int matrix[row][col], int result[col][row])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }
}


int main()
{

    int matrix[3][4];

    printf("Enter Elements\n");
    for (int i = 0; i < 3; i++)
    {
        printf("row - %d\n", i + 1);
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Original Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("Transpose: \n");
    transposePrint(3, 4, matrix);
    
    printf("\n");
    
    // Store Matrix Transpose in Another Matrix
    int transpose[4][3];
    matrixTranspose(3, 4, matrix, transpose);
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }


    return 0;
}