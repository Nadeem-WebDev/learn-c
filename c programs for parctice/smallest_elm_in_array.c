#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    int arr[20],n;
    printf("enter the no of elements you want to enter \t");
    scanf("%d",&n);

    printf("enter the elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
    
    printf("smallest element : %d",min);




    return 0;
}

