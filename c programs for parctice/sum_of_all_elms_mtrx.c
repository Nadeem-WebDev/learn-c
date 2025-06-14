#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    int mat[10][10],r,c,sum = 0;
    printf("enter row and columns of the matrix \n");
    scanf("%d %d",&r,&c);

    printf("enter the elm of the matrix \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf("the matrix : \n");
        for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += mat[i][j]; 
        }
    }
    printf("the sum of the elements of the matrix is :%d",sum);       







    



    return 0;
}

