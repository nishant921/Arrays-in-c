// Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

// Create a new reverse arrray or change the exisitng array 
/*
void reverseArray(int arr[], int size)
{
    int arr2[size];
    
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[size - 1 - i];
    }
}
*/ 

void reverseArray(int arr[], int size);
void reverseArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i <= size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void printArray();
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *arr);
        arr++;
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("%d",sizeof(arr)/sizeof(arr[0]));

    printArray(arr, size);
    reverseArray(arr, size);
    printArray(arr, size);

    return 0;
}