#include <stdio.h>

#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main(){ 

    int n;
    char ch;
    printf("Enter number of lines: \t");
    scanf("%d",&n);
    ch='A';
    int space=n-1;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=space;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf("%c ",ch+k);
        }
        printf("\n");
        // ch++;
        space--;
    }

    

    



    return 0;
}

