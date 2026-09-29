// Repeat problem  for a custom input given by the user
// Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and  9 respectively.

#include <stdio.h>

int main()
{

    int row;
    printf("Enter no of rows : ");
    scanf("%d", &row);
    
    int col;
    printf("Enter no of cols : ");
    scanf("%d", &col);
    
    int arr[row][col];
    int mul[row];
    
    for ( int m = 0; m < row; m++)
    {
        printf("Enter Number for table: ");
        scanf("%d",&mul[m]);
    }
    

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}