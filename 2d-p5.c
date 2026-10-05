// Find Sum of a Rectangle in a Matrix

#include <stdio.h>

int main()
{
    int r, c;
    int startrow, startcol;
    int endrow, endcol;
    printf("Enter no. of rows and cols(space separated): ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    printf("Enter Elements.\n");
    for (int i = 0; i < r; i++)
    {
        printf("row - %d\n", i+1);
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("Enter starting rows and cols(space separated): ");
    scanf("%d %d", &startrow, &startcol);
    printf("Enter ending rows and cols(space separated): ");
    scanf("%d %d", &endrow, &endcol);

    int sum =0;

    if (startrow >= 1 && startrow <= endrow &&
    endrow <= r && startcol >= 1 && startcol <= endcol && endcol <= c){
        for (int i = startrow-1; i < endrow-1; i++)
        {
           for (int j = startcol-1; j < endcol-1; j++)
           {
              sum+=matrix[i][j];
           }
        }
        printf("The sum between Given range is  : %d",sum);
    }
    else{
        printf("Enter Valid Range.");
    }

    return 0;
    
}
