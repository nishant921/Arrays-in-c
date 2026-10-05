// program to add two 2d matrix.
// no. of row and no. of col of both matrix should be equal.         


#include <stdio.h>

void letMatrix(int rows,int cols,int arr[rows][cols]){
    printf("Enter Elements\n");
    for (int i = 0; i < rows; i++)
    {
        printf("rows: %d\n",i+1);
        for (int j = 0; j < cols; j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
void getMatrix(int rows,int cols,int arr[rows][cols]){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int rows;
    printf("Enter no. of Rows: ");
    scanf("%d",&rows);
    int cols;
    printf("Enter no. of cols: ");
    scanf("%d",&cols);

    int matrix_1[rows][cols];
    
    int rows2;
    printf("Enter no. of Rows2: ");
    scanf("%d",&rows2);
    int cols2;
    printf("Enter no. of cols2: ");
    scanf("%d",&cols2);
    
    int matrix_2[rows2][cols2];
    
    letMatrix(rows,cols,matrix_1);
    letMatrix(rows2,cols2,matrix_2);

    printf("Matrix 1:\n");
    getMatrix(rows,cols,matrix_1);
    printf("Matrix 2:\n");
    getMatrix(rows2,cols2,matrix_2);


    int addMatrix[rows][cols];
    int subMatrix[rows][cols];
    if (rows == rows2 && cols==cols2){
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                addMatrix[i][j] = matrix_1[i][j]+matrix_2[i][j];
                subMatrix[i][j] = matrix_1[i][j]-matrix_2[i][j];
            }  
        }
        printf("Addition:\n");
        getMatrix(rows,cols,addMatrix);
        printf("Subtraction:\n");
        getMatrix(rows,cols,subMatrix);
    }
    else{
        printf("To perform Addition,subtraction and Division the no. of row and no. of col of both matrix should be equal.");
    }

    // USING WITHOUT EXTRA MATRIX
    if (rows == rows2 && cols==cols2){
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                matrix_1[i][j] = matrix_1[i][j]+matrix_2[i][j];
            }  
        }
        printf("Addition:\n");
        getMatrix(rows,cols,addMatrix);
    }
    else{
        printf("To perform Addition,subtraction and Division the no. of row and no. of col of both matrix should be equal.");
    }
    
    
    

    return 0;
}