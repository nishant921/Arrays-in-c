// Create a three-dimensional array and print the addresses of its elements in increasing order.

#include <stdio.h>

int main() {

    int arr[2][3][5];

    int* ptr = &arr[0][0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                // printf("%u ",&arr[i][j][k]);
                printf("%u ",ptr);
                ptr++;
            }
        printf("\n");
        
    }
    printf("\n");
        
    }
    
    return 0;
}