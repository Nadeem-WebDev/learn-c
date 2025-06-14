#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){


    int a,b,c;
    printf("enter 3 numbars: \n");
    scanf("%d %d %d",&a,&b,&c);

    int gr8st = (a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("the greatest number among three is : %d",gr8st);



    return 0;
}

