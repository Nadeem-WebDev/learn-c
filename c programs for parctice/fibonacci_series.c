#include <stdio.h>

int fibonacci(int term){
    
    if (term == 0)
    {
        return 0;
    } else if (term == 1)
    {
        return 1;
    } else
    {
        return fibonacci(term-2) + fibonacci(term-1);
    }
    
}

// this code start the no of terms from 0

int main(){
    printf("enter the no. of term:\t");
    int term;
    scanf("%d",&term);
    int fibonacciseries[100];

    for (int i = 0; i <= term; i++)
    {
        fibonacciseries[i] = fibonacci(i);
    }

    printf("the fibonacci series till the %dth term is ",term);

    for (int j = 0; j <= term; j++)
    {
        printf("%d ",fibonacciseries[j]);
    }

    
    


    return 0;
}