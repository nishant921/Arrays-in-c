#include <stdio.h>

// synatx : <datatype> arr [rows] [columns]

int main(){

    // int matrix[2][2]= {{1,2},{3,4}};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%d " ,matrix[i][j]);
    //     }  
    //     printf("\n");  
    // }

    int rows;
    int columns;
    printf("Enter No. of Rows: ");
    scanf("%d",&rows);
    printf("Enter No. of Columns: ");
    scanf("%d",&columns);

    int matrix[rows][columns];

    printf("Elements\n");
    for (int i = 0; i < rows; i++)
    {
        printf("Row-%d\n",i+1);  
        for (int j = 0; j < columns; j++)
        {
            scanf("%d",&matrix[i][j]);
        }  
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d " ,matrix[i][j]);
        }  
        printf("\n");  
    }
    

    return 0;
}