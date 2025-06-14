#include <stdio.h>
#include <conio.h>
int main()
{
    printf("enter 5 numbers you want to print: \n");
    int array[5];
    float sum=0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("input numbers are :   ");
    for (int j = 0; j < 5; j++)
    {
        printf("\n%d",array[j]);
        sum += array[j];
    }
    float avg = sum/5;
    printf("\nthe average of the numbers is %0.2f",avg);
    
    

    return 0;
}
