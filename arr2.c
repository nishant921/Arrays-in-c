#include <stdio.h>

int main() {

    int marks[] = {87,34,53,33};

    // int* ptr = &marks[0];
    int* ptr = marks;//same as  int* ptr = &marks[0]

    for (int i = 0; i < 4; i++)
    {
        // printf("Marks[%d]: %d\n",i,marks[i]);
        printf("Marks[%d]: %d\n",i,*ptr);
        ptr++;
    }

    return 0;
}