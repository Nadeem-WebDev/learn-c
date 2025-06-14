#include <stdio.h>
#include <conio.h>
#include <math.h>

int gcd(int x,int y)
{
    if (y == 0)
    {
        return x;
    } else
    {
        return gcd(y,x%y);
    }
    
    
}

int main(){


    int x,y;
    printf("enter two numbers : \t");
    scanf("%d %d",&x,&y);
    int lcm = (x*y)/gcd(x,y);

    printf("the LCM of %d and %d is %d",x,y,lcm);





    return 0;
}

