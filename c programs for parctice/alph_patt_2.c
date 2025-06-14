#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    int line;
    char ch = 'A';
    printf("enter the no of lines of pattern \t");
    scanf("%d",&line);

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ",ch);
        }
        printf("\n");
        ch++;
    }
    



    



    return 0;
}

