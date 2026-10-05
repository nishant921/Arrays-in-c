// Find the Sum of each row in matrix of 3x3
#include <stdio.h>

int main(){

    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rowSum[3];

    for (int i = 0; i < 3; i++)
    {
        int sum = 0 ;
        for (int j = 0; j < 3; j++)
        {
            sum+=matrix[i][j];
        }
        rowSum[i] = sum;
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",rowSum[i]);
    }

    return 0;
}
