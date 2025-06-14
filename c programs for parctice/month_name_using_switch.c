#include <stdio.h>
#include <conio.h>
int main()
{
    printf("enter the month no you want to know \t");
    int month;
    scanf("%d",&month);

    switch (month)
    {
    case 1:
        printf("the month is january");
        break;
    case 2:
        printf("the month is february");
        break;
    case 3:
        printf("the month is march");
        break;
    case 4:
        printf("the month is april");
        break;
    case 5:
        printf("the month is may");
        break;
    case 6:
        printf("the month is june");
        break;
    case 7:
        printf("the month is july");
        break;
    case 8:
        printf("the month is august");
        break;
    case 9:
        printf("the month is september");
        break;
    case 10:
        printf("the month is october");
        break;
    case 11:
        printf("the month is november");
        break;
    case 12:
        printf("the month is december");
        break;

    
    default:
        printf("there's only 12 months in english calender");
        break;
    }

    return 0;
}
