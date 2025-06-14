#include <stdio.h>
#include <conio.h>
int main()
{
    printf("enter the no. of lines you want the pattern of \t");
    int num;
    scanf("%d",&num);

    int space = num-1;


    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
        space--;
    }

    
    return 0;
}
