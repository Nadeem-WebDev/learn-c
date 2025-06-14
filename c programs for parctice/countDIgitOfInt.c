#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num,count = 0;
    printf("entr the no. \t");
    scanf("%d",&num);

    while (num != 0)
    {
        num /= 10;
        count++; 
    }
    
    printf("the no of digits in your entered num is %d\n",count);


    return 0;
}
