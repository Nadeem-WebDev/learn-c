#include <stdio.h>
#include <conio.h>
int main()
{
    int num,count=0;
    printf("enter the no. you want to check \t");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        if (num%i == 0)
        {
            count++;
        }
    }

    printf("the number is divisible by %d numbers between 1 to %d",count,num);
    if (count == 2)
    {
        printf("\nthe number is prime");
    }
    else
    {
        printf("\nthe number is composite");
    }
    


    


    return 0;
}
