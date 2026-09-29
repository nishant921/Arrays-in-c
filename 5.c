// Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and
// 9 respectively.

#include <stdio.h>

int main()
{

    int arr[3][10];
    int mul[] = {2,7,9};

        for (int row = 0; row < 3; row++)
        {
            for (int col = 0; col < 10; col++)
            {
                arr[row][col] = mul[row]*(col+1);
            }
        }

    
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }
  
    return 0;
}