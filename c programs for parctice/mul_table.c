#include <stdio.h>

int main(){
    printf("enter the no you want table of : \t");
    int num;
    scanf("%d",&num);
    printf("table of %d: \n",num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n",num,i,num*i);
    }
    


    return 0;
}

