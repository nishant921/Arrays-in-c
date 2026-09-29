// Write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>

void countPositive(int arr[], int size);
void countPositive(int arr[], int size){
    int count = 0;
    for (int i=0; i<size; i++){
        if (arr[i]>0) count++;
    }
    printf("The total number of positive integers: %d",count);
}

int main() {

    int arr[] = {-1,-2,-3,1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    countPositive(arr, size);
    return 0;
}