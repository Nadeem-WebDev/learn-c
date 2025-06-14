#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    int mat[10][10],r_c,flag = 1;
    printf("enter the order of the square matrix: \t");
    scanf("%d",&r_c);

    printf("enter elements of the matrix \n");
    for (int i = 0; i < r_c; i++)
    {
        for (int j = 0; j < r_c; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf("the matrix is: \n");
    for (int i = 0; i < r_c; i++)
    {
        for (int j = 0; j < r_c; j++)
        {
            printf("%d \t",mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r_c; i++)
    {
        for (int j = 0; j < r_c; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                flag = 0;
            }
        }
    }
    
    if (flag == 1)
    {
        printf("matrix is symmetric");
    }
    else
    {
        printf("matrix is not symmetric");       
    }
    
    

    



    return 0;
}

