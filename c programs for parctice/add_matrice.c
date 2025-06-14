#include <stdio.h>
#include <conio.h>

int main(){

    int row,col,mat1[10][10],mat2[10][10],sum[10][10];

    printf("enter row and column of matrix \t");
    scanf("%d %d",&row,&col);
    printf("row %d col %d \n",row,col);

    printf("enter elements of first matrix \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("enter elements of second matrix \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("sum of the given two matrices is : \n");
        for (int m = 0; m < row; m++)
        {
            for (int n = 0; n < col; n++)
            {
                sum[m][n] = mat1[m][n] + mat2[m][n];
                printf("%d \t",sum[m][n]);
            }
        printf("\n");
        }

    
    



    return 0;
}

