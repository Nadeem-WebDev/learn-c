#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    int num[10],temp;
    printf("enter ten numbers \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d ",&num[i]);
    }

    // sorting in ascending order
    for (int j = 0; j < 10; j++)
    {
        for (int k = j+1; k < 10; k++)
        {
            if (num[j]>num[k])
            {
                temp = num[k];
                num[k] = num[j];
                num[j] = temp;
            }
   
        }
        
    }
    
    printf("given numbers in ascending order :  ");
    for (int k = 0; k < 10; k++)
    {
        printf("%d ",num[k]);
    }
    



    return 0;
}

