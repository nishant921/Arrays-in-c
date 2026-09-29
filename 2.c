// Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>

int main() {

    int table[10];
    int num;

    printf("Enter Number: ");
    scanf("%d",&num);

    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n",num,i+1,table[i]);
    }
    
    return 0;
}