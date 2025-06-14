                                            // defining the header file
#include <stdio.h> 
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "experiment.c"

                                            // user defined macros
#define PI 3.14                 //***object-like macros***
#define SQUARE(r) r*r           //***function-like macros***
// ***"undef" is used to undefine defined macros***



                                            // function declared
// ***function with argument and return value***
int addition(int,int);

// ***function with argument and without return value***
void subtract(int,int);

// ***function without argument and with return value***
int division();

// ***function without argument and return value***
void multiplication();



                                            // recursive function declare and define
int find_factorial(int facto){
    if (facto == 0)
    {
        return 1;
    }else
    {
        return facto*find_factorial(facto-1);
    }
}

                                        //function for call by reference
int callByRef(int *l)
{
    *l *= 2;
}

                                        //function for passing array
// ***method 1***
int func4arr1(int arrrrr[]) // ***we can also give size to the array here***
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arrrrr[i];
    }
    return sum;
}
// ***method 2***
float func4arr2(int *arr)
{
    int total = 0;
    for (int i = 0; i < 10; i++)
    {
        total += *(arr+i);
    }
    float avg = (float)total/10;
    return avg;   
}


                                        // structure
struct stud
{
    char name[20];
    int roll;
    float result;
}s1,s2;


                                        // union
union employee
{
    int id;
    char name[15];
    float salary;
};


                                        // static variables
void stat()
{
    static int i = 45;
    printf("the value of i is %d\n",i);
    i++;
}





                                        // excercise 6: html parser
void parser(char string[])
{
    // removing the tags
    int flag = 0,index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            flag = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            flag = 0;
            continue;
        }
        
        if (flag == 0)
        {
            string[index] = string[i];
            index++; 
        }
    }
    string[index] = '\0';

    // removing the blank spaces from start
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i+1];
        }
    }
    // removing the blank spaces from end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
    
}

                                        // dangfunc
int* dangfunc(){
    static int xyz = 58;
    return &xyz;
}


                                        // call back function
void callBfunc(int (*addptr)(int,int),void (*subptr)(int,int)){
    int a,b;
    printf("enter a and b\n");
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("the addition of %d & %d is %d \n",a,b,addptr(a,b));
    subptr(a,b);

}




int main(int argc, char *argv[])
{
    printf("hello world :)\n");
    // int num;
    // scanf("%d",&num);
    // printf("my fav num is %d",num);

    

                                            // excercise 1: multipication table
    // int a;
    // printf("enter the num you want table of :\t");
    // scanf("%d",&a);
    // printf("table of %d: \n",a);

    // printf("%d x 1 = %d \n",a,a*1);
    // printf("%d x 2 = %d \n",a,a*2);
    // printf("%d x 3 = %d \n",a,a*3);
    // printf("%d x 4 = %d \n",a,a*4);
    // printf("%d x 5 = %d \n",a,a*5);
    // printf("%d x 6 = %d \n",a,a*6);
    // printf("%d x 7 = %d \n",a,a*7);
    // printf("%d x 8 = %d \n",a,a*8);
    // printf("%d x 9 = %d \n",a,a*9);
    // printf("%d x 10 = %d \n",a,a*10);



                                            // format specifiers
    // int i = 42069;
    // i /= 3;
    // printf("%10i \n",i);

    // float f = 1.272;
    // printf("%10.1f nadeem               ahammad \n",f);

    // char c = 'N';        //***to define a char we need to use:''*** 
    // printf("%c ",c);


                                            // define constant
    // ***method 1***
    // const int k = 764;
    // printf("%d \n",k);
    
    // ***method 2***
    // #define PI 3.14159
    // #define NAME "NADEEM"

    // printf("%s",NAME);

                                            // if else statement
    // int age;
    // printf("enter your age \t");
    // scanf("%d",&age);
    // printf("you have entered your age: %d \n",age);
    // if (age >= 18 && age <= 100)
    // {
    //     printf("you can vote");
    // } else if (age > 100)
    // {
    //     printf("what the hell you're doing here?! go to the hospital");
    // } else
    // {
    //     printf("you're underage");
    // }

                                            // excercise 2: price distribute to students using if else
    // int phy,chem;

    // printf("enter your physics and chemistry marks : \n");
    // scanf("%d %d",&phy,&chem);
    
    // printf("you got %d in physics & %d in chemistry\n",phy,chem);

    
    // if (phy >= 75 && chem >= 75)
    // {
    //     printf("you'll get 100$");
    // }
    // else if (phy >= 75 || chem >= 75)
    // {
    //     printf("you'll get 50$");
    // }
    // else
    // {
    //     printf("you'll get 0$");
    // }
    
                                            // switch statement
    // int jersey_num;
    // printf("enter your jersey number : \t");
    // scanf("%d",&jersey_num);

    // switch (jersey_num)
    // {
    // case 18:
    //     printf("welcome Virat Kohli");
    //     break;
    // case 17:
    //     printf("welcome AB Devilliers");
    //     break;
    // default:
    //     printf("we don't have any data about you,sorry :(");
    //     break;
    // }



                                            // loop
    // ***do while loop***
    // int no = 0;
    // do
    // {
    //     printf("%d ",no);
    //     no++;
    // } while (no < 10);


    // ***while loop + break***
    // int x = 0;
    // while (x < 10)
    // {
    //     if (x > 7)
    //     {
    //         printf("\"end\"");
    //         break;
    //     }
        
    //     printf("%d ",x);
    //     x++;
    // }


    // ***for loop + continue***
    // for (int i = 0,j = 5; i < 5; i++,j--)
    // {
    //     if (i == 3)
    //     {
    //         continue;
    //     }
    
    //     printf("%d %d \n",i,j);
    // }



                                            // excercise 3: unit conversion with if else statement
    // char option;
    // printf("select unit conversion of what you want:\na)Km to Mile \nb)Kg to Pound \nc)Inches to Feet \nd)Celsius to Fahrenheit\n");
    // scanf("%c",&option);

    // int input;
    // float result;

    // if (option == 'a')
    // {
    //     printf("enter  your value in Km\t");
    //     scanf("%d",&input);
    //     result = input*0.621371192;
    //     printf("%d Km = %.2f Mile",input,result);
    // } 
    // else if (option == 'b')
    // {
    //     printf("enter  your value in Kg\t");
    //     scanf("%d",&input);
    //     result = input*2.20462262;
    //     printf("%d Kg = %.2f Pound",input,result);
    // }
    // else if (option == 'c')
    // {
    //     printf("enter  your value in Inch\t");
    //     scanf("%d",&input);
    //     result = input*0.083333333;
    //     printf("%d Inches = %.2f feet",input,result);
    // }
    // else if (option == 'd')
    // {
    //     printf("enter  your value in Celsius\t");
    //     scanf("%d",&input);
    //     result = (float)(9*input)/5+32;
    //     printf("%d Celsius = %.2f Fahrenheit",input,result);
    // }
    // else 
    // {
    //     printf("wrong input");
    // }






                                            // goto statement(aka: jump statement)
    // ***goto mostly used to break multiple loops using a single statement at the same time(it's better to not use goto statement to avoid confusion)***
    // for (int a = 0; a < 5; a++)
    // {
    //     for (int b = 0; b < 3; b++)
    //     {   
    //         for (int c = 0; c < 1; c++)
    //         {
    //             printf("%d %d %d \n",a,b,c);
    //             if (b == 2)
    //             {
    //                 goto end;
    //                 // break;
    //             }
    //         } 
    //     }
    // }
    // end:;


    // ***another eg. of table using goto***
    // int num,multiplier = 1;
    // printf("enter the number you want multiplication table of :\t");
    // scanf("%d",&num);
    // write: printf("%d X %d = %d \n",num,multiplier,num*multiplier);
    // if (multiplier < 10)
    // {
    //     multiplier++;
    //     goto write;
    // }
    



                                            // typecasting(type conversion)
    // float l = (float)22/7;
    // printf("%.3f \n", l);
    // printf("%d\n",(int)l);


                                            // function called
    // ***function with argument and return value***
    // int result = addition(555,999);
    // printf("%d",result);

    // ***function with argument and without return value***
    // int c,d;
    // printf("enter two numbers:\n");
    // scanf("%d %d",&c,&d);
    // subtract(c,d);

    // ***function without argument and with return value***
    // int result = division();
    // printf("your answer is %d",result);

    // ***function without argument and return value***
    // multiplication();




                                            // recursive function(when a function calls itself)
    // ***find factorial of any (+ve) number***
    // int facto;
    // printf("enter the no you want factorial of: \t");
    // scanf("%d",&facto);
    // int result = find_factorial(facto);
    // printf("the answer of %d! = %d",facto,result);






                                            // array
    // ***1d array***
    // int marks[] = {10,20,41,52,47,45};

    // marks[2] = 69;

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("your sub %d mark is = %d\n",i+1,marks[i]);
    // }

    // ***2d array***
    int roll_marks[4][2] = {{1,45},{2,36},{3,48},{4,29}};

    // roll_marks[2][1] = 26;

    // // ***printing the array with some meaning by using some logic***
    // for (int j = 0; j < 4; j++)
    // {
    //     for (int k = 0; k < 1; k++)
    //     {
    //         printf("marks of roll no %d is %d",roll_marks[j][k],roll_marks[j][k+1]);
    //     }
    //     printf("\n");
    // }

    // ***printing the array as matrix***
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%d ",roll_marks[i][j]);
    //     }
    //     printf("\n");
    // }
    


                                            // pointer
    // float a = 4.215;
    // float *ptr = &a;
    // printf("%d \n",ptr);            //***address of a***
    // printf("%.2f\n",*ptr);          //***value of a***


                                            // arrays and pointer arithmetic
    // int array[] = {1,62,54,15,5,52};
    // ***{address}: &array[0] == array or &array[4] == array+4  -----  {value}: array[2] == *(array+2)***
    // printf("adress of the 1st element is %d \n",array);
    // printf("adress of the 3rd element is %d \n",array+2);

    // printf("value of the 1st element is %d \n",*array);
    // printf("value of the 3rd element is %d \n",*(array+2));


                                            // call by value and call by reference
    // int x = 69;
    // printf("x before function is called %d \n",x);

    // callByRef(&x);
    // printf("x after function is called %d \n",x);


                                            // passing array to function
    int arr[10] = {58,15,5584,54,62,544,404,888,447,58};

    // int total =  func4arr1(arr);
    // printf("sum of the all array elements  = %d \n",total);

    // float avg = func4arr2(arr); 
    // printf("the average of all array elements %.2f \n",avg);

                                            // string
    // char city[] = {'M','u','m','b','a','i','\0'}; // ***1st way***(here we have to add the null '\0' character at the end)
    // char name[] = "Nadeem Ahammad";      // ***2nd way***(here we dont have to put null character at the end)

    // char str[10];
    // gets(str);      //***to get string input***
    // puts(str);      //***to print the string in output***
    // printf("my name is %s and live in %s",name,city);

    // ***<string.h> header file functions***
    // printf("the length of my name is %d\n",strlen(name));

    // puts(strcat(city,name));  //***concatenates the strings of both argument and copies the concatenate string in 1st argument***
    // puts(city);
    // puts(name);

    // puts(strrev(name));  //***reverses the string***
    // puts(name);

    // strcpy(name,city);      //***copies the string of 2nd argument into 1st argument***
    // puts(name);

    // int cmp = strcmp("nitia","nitib"); //***return 0 if string equal,reurn otherwise(<0 or >0) if doesnt match***
    // printf("%d\n",cmp);

    // printf("my name is %s and live in %s",strupr(name),strlwr(city));





                                            // structure
    // . is called as structure member operator or dot operator***
    // struct stud s3;

    // strcpy(s1.name,"rakesh");
    // s1.roll = 2584;
    // s1.result = 73.9;

    // strcpy(s2.name,"tommy");
    // s2.roll = 2544;
    // s2.result = 68.69;

    // strcpy(s3.name,"kamlesh");
    // s3.roll = 2502;
    // s3.result = 78.6;

    // struct stud s4 = {"lalu",3056,42.6};    //***another way to assign values to structure member's variables***

    // ***[->] is structure pointer arrow operator***
    // struct stud *ptr;
    // ptr = &s4;
    // printf("the name of s4 is %s \n",ptr->name);    //***ptr->name is equivalent to (*ptr).name


    // printf("%s has roll no. %d and got %0.2f%% \n",s1.name,s1.roll,s1.result);
    // printf("%s has roll no. %d and got %0.2f%% \n",s2.name,s2.roll,s2.result);
    // printf("%s has roll no. %d and got %0.2f%% \n",s3.name,s3.roll,s3.result);
    // printf("%s has roll no. %d and got %0.2f%% \n",s4.name,s4.roll,s4.result);





                                            // typedef
    // ***typedef is used to naming already existed variables with meaningful or short names***
    // typedef int* intptr;
    // int x=75,y=69;
    // intptr p,d;
    // p=&x;
    // d=&y;
    // printf("address of x: %p address of y: %x \n",p,d);




                                            // union
    // ***in union you can contain multiple variable but only one member can contain value at a time***
    // union employee e1;
    // e1.salary = 4583.23; 
    // e1.id = 695473;
    // strcpy(e1.name,"chomulal");// ***last define member contain value***

    // printf("id of e1 is %d \n",e1.id);
    // printf("name of e1 is %s \n",e1.name);
    // printf("salary of e1 is %0.2f$ \n",e1.salary);



                                            // static variables
    // stat();
    // stat();
    // stat();



                                            // excersise 6:html parser
    // char str[100] = "      <h1>this is a h1 tag       </h1>     ";
    // printf("the original string is \t :~~%s~~ \n",str);
    // printf("the length of old string is %d \n",strlen(str));


    // parser(str);
    // printf("the new string is \t :~~%s~~ \n",str);
    // printf("the length of new string is %d \n",strlen(str));



                                            // dynamic memory allocation
    // int n;
    // printf("enter size of array:\n");
    // scanf("%d",&n);

    // int *ptr,sum=0;
    // ptr = (int*)malloc(n*sizeof(int));              // ***allocating memory using malloc***
    // ptr = (int*)calloc(n,sizeof(int));              // ***allocating memory using calloc***


    // printf("enter elements of array :\n");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d",ptr+i);
    //     sum += *(ptr+i);
    // }

    // printf("the sum of the elements is %d\n",sum);

    // ***reallocating memory using realloc***
    // printf("enter new size of array:\n");
    // scanf("%d",&n);

    // ptr = (int*)realloc(ptr,n*sizeof(int));
    // printf("enter new elements of array :\n");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d",ptr+i);
    // }
    // printf("the new elements are : \t");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",ptr[i]);
    // }
    
    // free(ptr);




                                            // storage classes
    // myFunc();
    // int x = 986;

    // printf("%d \n",x);




                                            // void pointer
    // int x = 74;
    // float y = 78.3;
    // char z = 'Z';
    
    // void *ptr;
    // ***we need to typecast the void pointer before dereferencing***
    // ptr = &x;
    // printf("the value of x = %d\n",*( (int*)ptr) );

    // ptr = &y;
    // printf("the value of y = %.2f\n",*( (float*)ptr) );

    // ptr = &z;
    // printf("the value of z = %c\n",*( (char*)ptr) );



                                            // null pointer
    // char *ptr = NULL;
    // printf("HI %s OK",ptr);

                                            // dangling pointer
    // ***case 1: deallocating memeory***
    // int *ptr = (int*)malloc(sizeof(int)*2);
    // ptr[2] = 69;
    // free(ptr);  //***here ptr is a dangling pointer because its pointing towards a freed memory***
    // printf("the value of ptr[2] is : %d",*(ptr+2));


    // ***case 2: returning local variables in function calls***
    // int *ptr = dangfunc();  //***here ptr is a dangling pointer because its pointing towards a invalid location***
    // printf("%d",*ptr);

    // ***case 3: variable going out of scope***
    // int *ptr;
    // {
    //     int a = 34;
    //     ptr = &a;
    // }
    // printf("%d",*ptr); 




                                            // user defined macros
    // int r;
    // printf("enter the radius of circle:: \t");
    // scanf("%d",&r);
    // float area = PI * SQUARE(r);
    // printf("the area of the circle  = %.3f",area);




                                            // predefined macros
    // printf("today's date is %s \n",__DATE__);
    // printf("time is  now %s \n",__TIME__);
    // printf("the file name is %s \n",__FILE__);
    // printf("the current line  %d \n",__LINE__);



                                            // i/o file function
    // FILE *ptr = NULL;

    // ***to read from a file***
    // ptr = fopen("text.txt","r");
    // char str[50];
    // ---fscanf()---
    // fscanf(ptr,"%s",str);
    // while (fscanf(ptr,"%s",str) != EOF)     // EOF = "End of File"
    // {
    //     printf("%s ",str);
    // }
    // fscanf(ptr,"%s",str);
    // printf("%s",str);

    // ---fgetc()---
    // char ch;
    // ch = fgetc(ptr);
    // printf("the char is being read from the txt file is ---%c---\n",ch);
    // ch = fgetc(ptr);
    // printf("the char is being read from the txt file is ---%c---\n",ch);

    // ---fgets()---
    // fgets(str,15,ptr);
    // printf("the str is being read from the txt file is ---%s---\n",str);
    // fgets(str,15,ptr);
    // printf("the str is being read from the txt file is ---%s---\n",str);




    // ***to write in a file***
    // char str[50] = "NNN";
    // printf("enter your info : \n");
    // scanf("%s",&str);
    // ptr = fopen("text.txt","a");
    // ---fprintf()---
    // fprintf(ptr,"\n%s",str);

    // ---fputc---
    // fputc('A',ptr);

    // ---fputs---
    // fputs("~this text is being appended~",ptr);
    // fputs(str,ptr);

    // fclose(ptr);




                                            // Command line arguents
    // int sum = 0;
    // printf("the value of argc is %d\n",argc);
    // for (int i = 0; i < argc; i++)
    // {
    //     sum += atoi(argv[i]); //***atoi converts char string to an integer value***
    // }
    // printf("the sum of all the nums passed in argument is %d \n",sum);


                                            // function ponters
    // int (*fptr)(int,int);
    // fptr = &addition;
    // int sum = (*fptr)(45,2);
    // printf("the sum is %d \n",sum);
    
    
    // ***callback function using function pointer***
    // int (*addptr)(int,int) = &addition;
    // void (*subptr)(int,int) = &subtract;
    // callBfunc(addptr,subptr);
    


    return 0;
}


                                            // function defined
// ***function with argument and return value***
int addition(int a,int b){
    return a + b;
}

// ***function with argument and without return value***
void subtract(int c,int d){
    printf("%d - %d = %d",c,d,c-d);
}

// ***function without argument and with return value***
int division(){
    int e,f;
    printf("enter two numbers \n");
    scanf("%d %d",&e,&f);

    return e/f;
}

// ***function without argument and return value***
void multiplication(){
    int g,h;
    printf("enter two numbers \n");
    scanf("%d %d",&g,&h);
    
    printf("your answer is %d",g*h);
}