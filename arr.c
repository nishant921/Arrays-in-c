#include <stdio.h>

int main()
{
    // int marks[90];
    // marks[0] = 12;
    // marks[1] = 89;
    // marks[2] = 29;
    // printf("Marks : %d, %d and %d\n",marks[0],marks[1],marks[2]);
    // printf("The Address of Marks array: %d",marks);

    // int marks[5];
    // printf("Enter Marks of 5 students: ");
    // scanf("%f",&marks[0]);
    // scanf("%f",&marks[1]);
    // scanf("%f",&marks[2]);
    // scanf("%f",&marks[3]);
    // scanf("%f",&marks[4]);

    // printf("Enter Marks of 5 students: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &marks[i]);
    // }
    // for (int m = 0; m < 5; m++)
    // {
    //     printf("Marks[%d]: %d\n", m, marks[m]);
    // }


    // // initialization 
    // float cgpa = {9.5,8.8,9.01};
    // float sgpa[5] = {9.5,8.8,9.01,8.1,8.0};

    // char name[] = {'n','n','s'};
    char name[] = "nishant";
    char* ptr = name;

    for (int i = 0; i < sizeof(name)/sizeof(name[0]); i++)
    {
        printf("%c\n",*ptr);
        ptr++;
    }
    

    return 0;
}