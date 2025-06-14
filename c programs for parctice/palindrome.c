#include <stdio.h>
// #include <conio.h>

int main()
{
    char str[100],flag = 't';
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
        if (str[len-i-1] != str[i])
        {
            flag = 'f';
        }
        
    }
    if (flag == 't')
    {
        printf("string is palindrome");
    }
    else
    {
        printf("string is not palindrome");
    }
    


    return 0;
}
