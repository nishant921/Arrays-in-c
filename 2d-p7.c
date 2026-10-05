// Find the Row With Maximum Number of 1s.
#include <stdio.h>

int main()
{

    int matrix[3][3] = {{1, 0, 1}, {0, 1, 0}, {1, 9, 1}};
    int maxOnes = 0;
    int row = 0;

    for (int i = 0; i < 3; i++)
    {
        int ones = 0;
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 1)
            {
                ones++;
            }
        }
        if (maxOnes < ones)
        {
            maxOnes = ones;
            row = i+1;
        }
    }
    printf("Row Number - %d\n",row);
    printf("Max no.of ones: %d\n",maxOnes);

    return 0;
}
