#include <stdio.h>

// synatx : <datatype> arr [rows] [columns]

int main(){

    // int matrix[3][4];

    // printf("Elements\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Row-%d\n",i+1);  
    //     for (int j = 0; j < 4; j++)
    //     {
    //         scanf("%d",&matrix[i][j]);
    //     }  
    // }
    int matrix[2][2]= {{1,2},{3,4}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d " ,matrix[i][j]);
        }  
        printf("\n");  
    }
    

    return 0;
}