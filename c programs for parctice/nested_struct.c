#include <stdio.h>
#include <conio.h>

struct address
{
    char city[20];
    int pin;
};


struct employee
{
    char name[20];
    struct address add;
};

int main(){

    struct employee emp;
    printf("enter the emlpoyee info (name - city - pin): \t");
    scanf("%s %s %d",&emp.name,&emp.add.city,&emp.add.pin);

    printf("name : %s - city : %s - pin : %d",emp.name,emp.add.city,emp.add.pin);

    

    return 0;
}

