#include <stdio.h>
#include <conio.h>

struct Book
{
    char title[20],author[20];
    int price;
};


int main(){

    struct Book b[5],temp;

    for (int i = 0; i < 5; i++)
    {
        printf("enter title,author & price of the books : \t");
        scanf("%s %s %d",&b[i].title,&b[i].author,&b[i].price);
    }


    // sorting by price
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            if (b[j].price>b[j+1].price)
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("\nthe title : %s ,author : %s ,price : %d",b[i].title,b[i].author,b[i].price);
    }
    
    
    




    return 0;
}

