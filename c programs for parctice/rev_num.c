#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num,revnum = 0;
    printf("enter the num you want to reverse : \t");
    scanf("%d",&num);

    while (num != 0)
    {
        revnum = (revnum*10) + num%10;
        num = num/10;
    }
    
    printf("the reversed num is %d\n",revnum);


    return 0;
}
