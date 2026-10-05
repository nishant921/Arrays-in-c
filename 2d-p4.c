// Sum of All elements and find max elements.

#include <stdio.h>
#include<limits.h>

int main(){

    int rows;
    printf("Enter rows: ");
    scanf("%d",&rows);
    int cols;
    printf("Enter cols: ");
    scanf("%d",&cols);

    int matrix[rows][cols];

    printf("Enter Elements\n");
    for (int i = 0; i < rows; i++)
    {
        printf("Row %d Elements\n",i+1);
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    int sum = 0;
    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum+=matrix[i][j];
            printf("%d ",matrix[i][j]);
            if (matrix[i][j]>max) max = matrix[i][j];
        }
        printf("\n");
    }
    
    printf("The sum of all Elements: %d\n",sum);
    printf("MAX Element value: %d\n",max);


    
    return 0;
}