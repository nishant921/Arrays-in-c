// Find the Row With Maximum Sum

#include<stdio.h>
#include <limits.h>

int main(){

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int maxsum=INT_MIN;
    int row = 0;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum+=arr[i][j];
        }
        if (sum>maxsum) {maxsum= sum; row=i;}
    }

    printf("Max Sum: %d\n",maxsum);
    printf("Row Number: %d\n",row+1);
    
    

    return 0;
}