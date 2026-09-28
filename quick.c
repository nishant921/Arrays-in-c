// Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.

#include <stdio.h>

int main()
{

    int matrix[3][2];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("The Value of matrix[%d][%d]:\n", row, col);
            scanf("%d", &matrix[row][col]);
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
