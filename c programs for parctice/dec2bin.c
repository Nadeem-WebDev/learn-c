#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dec,bin[100],count = 0;

    printf("enter the decimal no:\t");
    scanf("%d",&dec);


    if (dec == 0)
    {
        bin[count] = 0;
        count++;
    }
    else
    {
    while (dec != 0)
    {
        bin[count] = dec%2;
        count++;

        dec /= 2;
    }
    }
    

    printf("the binary num is:\t");
    for (int i = count-1; i >= 0; i--)
    {
        printf("%d",bin[i]);
    }
    


    return 0;
}
