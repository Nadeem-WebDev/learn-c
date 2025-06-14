#include <stdio.h>


int main(int argc, char const *argv[])
{
    int min,max,count = 0;
    printf("enter the range : \n");

    scanf("%d %d",&min,&max);

    int primenum[max-min];

    for (int i = min; i <= max; i++)
    {
        int flag = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i%j == 0)
            {
                flag++;
            }
        }
        if (flag == 2)
        {
            primenum[count] = i;
            count++;
        }
    }


    printf("prime nos between the range of [%d-%d] is :\t",min,max);
    for (int k = 0; k < count; k++)
    {
        printf("%d ",primenum[k]);
    }
    




    return 0;
}
