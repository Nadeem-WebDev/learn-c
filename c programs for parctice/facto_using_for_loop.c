#include <stdio.h>
#include <conio.h>
int main()
{
    int num,factorial = 1;

    printf("enter a no \t");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial*i;
    }
    

    printf("the factorial of %d is %d",num,factorial);
    return 0;
}
