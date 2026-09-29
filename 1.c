// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

#include <stdio.h>

int main()
{

    // float rating[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Rating[%d]: ",i);
    //     scanf("%f",&rating[i]);
    // }
    float rating[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float *ptr = rating;

    int n;
    printf("Enter Which position value you want to retrieve: ");
    scanf("%d",&n);
    printf("The value at %d: %.1f\n", ptr + n, *(ptr + n));

    

    // printf("The value at %d: %.1f\n", ptr + 2, *(ptr + 2));
    // printf("The value at %d: %.1f\n", ptr + 5, *(ptr + 5));
    // printf("The value at %d: %.1f\n", ptr + 7, *(ptr + 7));

    return 0;
}