#include<stdio.h>
int main(){

    int matrix[50][50];
    printf("Enter the matrix: ");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the matrix: ");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
}