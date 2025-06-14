#include <stdio.h>
#include <conio.h>
int main()
{
    int num,power,result=1;
    printf("enter the no. & its power \t");
    scanf("%d %d",&num,&power);

    for (int i = 0; i < power; i++)
    {
        result *= num;
    }

    printf("%d^%d = %d",num,power,result);
    

    return 0;
}
