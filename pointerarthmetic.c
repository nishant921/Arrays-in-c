#include <stdio.h>

int main() {

    // INTERGER POINTER INCREMENT
    int a = 10;
    int * ptr =  &a;
    printf("The address of a : %u\n",&a);
    printf("The address of a through ptr : %u\n",ptr);
    printf("The value of a through ptr : %d\n",*ptr);
    ptr++;
    printf("The address of a through ptr : %u\n",ptr);
    
    printf("---------------------------------------------\n");
    // CHAR POINTER INCREMENT
    char gender = 'm';
    char* ptr2 = &gender;
    printf("The address of gender: %u\n",&gender);
    printf("The address of gender through ptr2 : %u\n",ptr2);

    ptr2++;
    printf("The address of gender through ptr2 : %u\n",ptr2);



    printf("---------------------------------------------\n");
    // FLOAT POINTER INCREMENT
    float percentage = 97.7;
    float* ptr3 = &percentage;
    printf("The address of percentage: %u\n",&percentage);
    printf("The address of percentage through ptr3 : %u\n",ptr3);

    ptr3++;
    printf("The address of percentage through ptr3 : %u\n",ptr3);
    
    return 0;
}