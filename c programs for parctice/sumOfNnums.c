#include <stdio.h>
#include <conio.h>
int addNnums(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + addNnums(n-1);
    }
    
}


int main(){

    int n;

    printf("enter the n:  ");
    scanf("%d",&n);

    int result = addNnums(n);
    printf("the sum of numbers till %d is : %d",n,result);


    return 0;
}

