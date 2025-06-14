#include <stdio.h>

void patt1(int n){
    printf("pattern 1:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n"); 
    }
}

void patt2(int n){
    printf("pattern 2:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n"); 
    }
}

void patt3(int n){
    printf("pattern 3:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void patt4(int n){
    printf("pattern 4:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n"); 
    }
}

void patt5(int n){
    printf("pattern 5:\n");
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i>n)
            {
                for (int k = i; k <= 2*n-1; k++)
                {
                    printf("*");
                }
                break;
            }
            
            printf("*");
        }
        printf("\n"); 
    }
}

void patt6(int n){
    printf("pattern 6:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<=n-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
            
        }
        printf("\n"); 
    }
}

void patt7(int n){
    printf("pattern 7:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j < i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }            
        }
        printf("\n"); 
    }
}

void patt8(int n){
    printf("pattern 8:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<=n-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        for (int k = 1; k < i; k++)
        {
            printf("*");
        }
        
        printf("\n"); 
    }
}

void patt9(int n){
    printf("pattern 9:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j < i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        for (int k = i; k < n; k++)
        {
            printf("*");
        }        
        printf("\n"); 
    }
}

void patt10(int n){
    printf("pattern 10:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<=n-i)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n"); 
    }
}

void patt11(int n){
    printf("pattern 11:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j < i)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n"); 
    }
}

void patt12(int n){
    printf("pattern 12:\n");
    for (int i = 1; i <= 2*n; i++)
    {
        if (i<=5)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j < i)
                {
                    printf(" ");
                }
                else
                {
                    printf("* ");
                }
            }        
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j<=2*n-i)
                {
                    printf(" ");
                }
                else
                {
                    printf("* ");
                }
            }        
        }
        
        printf("\n"); 
    }
}

void patt13(int n){
    printf("pattern 13:\n");
    for (int i = 0; i < n; i++)
    {
        for (int spaces = 1; spaces < n-i; spaces++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < 2*i+1; j++)
        {
            if (j==0 | j==2*i | i==n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }        
        
        printf("\n"); 
    }
}
void patt14(int n){
    printf("pattern 14:\n");
    for (int i = 0; i < n; i++)
    {
        for (int spaces = 0; spaces < i; spaces++)
        {
            printf(" ");
        }
        
        for (int j = 1; j < 2*n-2*i; j++)
        {
            if (j==1 | j==2*(n-i)-1 |i==0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }        
        
        printf("\n"); 
    }
}

void patt15(int n){
    printf("pattern 15:\n");
    for (int i = 0; i < n; i++)
    {
        for (int spaces = 1; spaces < n-i; spaces++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < 2*i+1; j++)
        {
            if (j==0 | j==2*i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }        
        
        printf("\n"); 
    }
    for (int i = 1; i < n; i++)
    {
        for (int spaces = 0; spaces < i; spaces++)
        {
            printf(" ");
        }
        
        for (int j = 1; j < 2*n-2*i; j++)
        {
            if (j==1 | j==2*(n-i)-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }        
        
        printf("\n"); 
    }

}

void patt16(int n){
    printf("pattern 16:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int spaces = 1; spaces <= n-i; spaces++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%d  ",i+j);
        }
        
        printf("\n"); 
    }
}

void patt17(int n){
    printf("pattern 17:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int spaces = 0; spaces < n-i; spaces++)
        {
            printf(" ");
        }
        
        for (int j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        for (int k = 2; k <= i; k++)
        {
            printf("%d",k);
        }
        
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int spaces = 0; spaces <= i; spaces++)
        {
            printf(" ");
        }

        for (int j = 3-i; j >= 1; j--)
        {
            printf("%d",j);
        }
        for (int k = 2; k <= 3-i; k++)
        {
            printf("%d",k);
        }
        
        printf("\n");
        
    }
    
}

void patt18(int n){
    printf("pattern 18:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf("*");            
        }
        for (int spaces = 1; spaces <= 2*i; spaces++)
        {
            printf(" ");
        }
        for (int k = 1; k <= n-i; k++)
        {
            printf("*");            
        }
        
        printf("\n"); 
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");            
        }
        for (int spaces = 2; spaces < 2*n-2*i; spaces++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");            
        }
        
        printf("\n"); 
    }
}

void patt19(int n){
    printf("pattern 19:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");            
        }
        for (int spaces = 2; spaces < 2*n-2*i; spaces++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");            
        }
        
        printf("\n"); 
    }
    
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf("*");            
        }
        for (int spaces = 1; spaces <= 2*i; spaces++)
        {
            printf(" ");
        }
        for (int k = 1; k <= n-i; k++)
        {
            printf("*");            
        }
        
        printf("\n"); 
    }
}

void patt20(int n){
    printf("pattern 20:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-1; j++)
        {
            if (i==1 | i==n | j==1 | j==n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n"); 
    }
}

void patt21(int n){
    printf("pattern 21:\n");
    int val=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",val);
            val++;
        }
        printf("\n"); 
    }
}

void patt22(int n){
    printf("pattern 22:\n");
    int val;
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            val=0;
        }
        else
        {
            val=1;
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",val);

            if (val==0)
            {
                val=1;
            }
            else
            {
                val=0;
            }                  
        }
        printf("\n"); 
    }
}

void patt23(int n){
    printf("pattern 23:\n");
    for (int i = 0; i < n; i++)
    {
        for (int spaces = 1; spaces < n-i; spaces++)
        {
            printf("  ");
        }
        
        for (int j = 1; j <= 1; j++)
        {
            printf("*");
        }

        for (int spaces = 1; spaces < i+1; spaces++)
        {
            printf("  ");
        }

        for (int k = 2; k <= 1; k++)
        {
            printf("*");
        }


        printf("\n"); 
    }
}
void patt24(int n){
    printf("pattern 24:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j==1 | j==i)
            {
                printf("*");
            }else{
                printf(" ");
            }          
        }
        for (int spaces = 0; spaces < 2*n-2*i; spaces++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j==1 | j==i)
            {
                printf("*");
            }else{
                printf(" ");
            }          
        }
        
        printf("\n"); 
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            if (j==1 | j==n-i)
            {
                printf("*");
            }else{
                printf(" ");
            }          
        }
        for (int spaces = 0; spaces < 2*i; spaces++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n-i; j++)
        {
            if (j==1 | j==n-i)
            {
                printf("*");
            }else{
                printf(" ");
            }          
        }
        
        printf("\n"); 
    }
    
}
void patt25(int n){
    printf("pattern 25:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int spaces = 0; spaces < n-i; spaces++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= n; j++)
        {
            if (i==1 | i==n | j==1 | j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n"); 
    }
}

void patt26(int n){
    printf("pattern 26:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n-i; j++)
        {
            printf("%d ",i);
        }
        printf("\n"); 
    }
}

void patt27(int n){
    printf("pattern 27:\n");
    int val=1,val2=1;
    for (int i = 1; i <= n; i++)
    {
        for (int spaces = 1; spaces < i; spaces++)
        {
            printf("  ");
        }
        
        for (int j = 0; j <= n-i; j++)
        {
            printf("%d ",val);
            val++;
        }
        for (int k = 0; k <= n-i; k++)
        {
            printf("%d ",val2+(n-i+1)*(n-i+1));
            val2++;
        }
        printf("\n"); 
    }
}

void patt28(int n){
    printf("pattern 28:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int spaces = 0; spaces < n-i; spaces++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }        
        
        printf("\n"); 
    }
    for (int i = 1; i < n; i++)
    {
        for (int spaces = 0; spaces < i; spaces++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < n-i; j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }

}

void patt30(int n){
    printf("pattern 30:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int spaces = 0; spaces < n-i; spaces++)
        {
            printf("  ");
        }
        
        for (int j = i; j >= 1; j--)
        {
            printf("%d ",j);
        }
        for (int k = 2; k <= i; k++)
        {
            printf("%d ",k);
        }
        
        printf("\n");
    }
}

void patt31(int n){
    printf("pattern 31:\n");
    int val=n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ",val); 
        }
        printf("\n"); 
    }
}
void patt32(int n){
    printf("pattern 32:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ",'A'+(n-i+j));
        }
        printf("\n"); 
    }
}

void patt33(int n){ 
    int val=0;
    printf("pattern 33:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",'a'+val);
            if (val>=0)
            {
                val-=32;
            }else
            {
                val+=32;
            }

            val++;
        }
        printf("\n"); 
    }
}

void patt34(int n){
    printf("pattern 34:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf("%c ",'A'+(n-j-i));
        }
        printf("\n"); 
    }
}

void patt35(int n){
    printf("pattern 35:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n"); 
    }
}


int main(){
    // patt1(5);
    // patt2(5);
    // patt3(5);
    // patt4(5);
    // patt5(5);
    // patt6(5);
    // patt7(5);
    // patt8(5);
    // patt9(5);
    // patt10(5);
    // patt11(5);
    // patt12(5);
    // patt13(5);
    // patt14(5);
    // patt15(5);
    // patt16(5); X
    // patt17(4);
    // patt18(5);
    // patt19(5);
    // patt20(5);
    // patt21(5);
    // patt22(5);
    // patt23(3); X
    // patt24(5); 
    // patt25(5);
    // patt26(6);
    // patt27(4); 
    // patt28(5);
    // patt29(5)==patt19(5); 
    // patt30(5); 
    patt31(4); 
    // patt32(5);
    // patt33(5);
    // patt34(5);
    // patt35(4);


    return 0;
}



void patt(int n){
    printf("pattern :\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n"); 
    }
}