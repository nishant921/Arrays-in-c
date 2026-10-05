// #Store Rollno and marks of certain students side by side in a matrix marks of pcm

#include <stdio.h>

int main()
{
    int std;
    printf("Enter no. of Students: ");
    scanf("%d", &std);

    int arr[std][4];

    for (int i = 0; i < std; i++)
    {
        printf("Enter Rollno and Marks(P C M): ");
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < std; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // int arr[std][4]; : This is a VLA (Variable Length Array) because std is known only at runtime.

    // It is valid in C99 and in compilers that support VLAs.

    // It is not dynamic memory allocation.

    // Compare:

    // int arr[std][4];              // VLA

    // versus:

    // int (*arr)[4] = malloc(std * sizeof(*arr));  // DMA

    // The second one actually allocates memory dynamically from the heap.

    return 0;
}
