// Find the Sum of each column in matrix of 3x3

#include <stdio.h>

int main()
{

    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int colSum[3];

    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum+=matrix[i][j];
        }
        colSum[j] = sum;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", colSum[i]);
    }

    return 0;
}
