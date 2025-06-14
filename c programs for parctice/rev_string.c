#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100],rev;
    int len=0;
    printf("enter a string: \t");
    gets(str);
    while (str[len] != '\0')
    {
        len++;
    }
    printf("length of the string is %d \n",len);

    for (int i = 0; i <= (len-1)/2; i++)
    {
        rev = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = rev;
    }
    printf("the reversed string is %s",str);
    


    return 0;
}
