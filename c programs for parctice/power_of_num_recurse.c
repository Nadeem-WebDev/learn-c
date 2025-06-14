#include <stdio.h>
#include <conio.h>

int power(int x,int y)
{
    if (y == 0)
    {
        return 1;
    } else
    {
        return x*power(x,y-1);
    }
    
    
}

int main(){

    int x,y,result;
    printf("enter base and power \n");
    scanf("%d %d",&x,&y);
    result = power(x,y);

    printf("%d^%d = %d",x,y,result);
    


    



    return 0;
}

