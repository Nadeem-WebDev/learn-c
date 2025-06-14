#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    int n;
    char ch;
    printf("Enter number of lines: \t");
    scanf("%d",&n);
    ch='A';
    int space=n-1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%c ",ch);
        }
        printf("\n");
        ch++;
        space--;
    }


    



    return 0;
}

