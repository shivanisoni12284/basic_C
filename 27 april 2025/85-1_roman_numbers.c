// Write a C program to print a table of all the Roman numeral equivalents of decimal numbers in the range 1 to 50.
// Sample Output:

// Decimal  Roman
// number   numeral
// -------------------
// 1        I
// 2        II
// 3        III
// 4        IV
// .....
// 98        LXXXXVIII
// 99        LXXXXIX
// 100        C

#include<stdio.h>
int main()
{ 
    int n,i,temp;
    printf("enter the number:");
    scanf("%d",&n);
    printf("Roman number:");
    // for(int n=1;n<=100;n++)
    // {
        if(n>=100)
        {
                temp=n/100;
                for(i=1;i<=temp;i++)
                {
                    printf("C");   
                }
                n=n%100;
        }
        if(n>=50)
        {
                temp=n/50;
                for(i=1;i<=temp;i++)
                {
                    printf("L");   
                }
                n=n%50;
        }
        if(n>=40)
        {
            temp=n/40;
            for(i=1;i<=temp;i++)
            {
                printf("XL");   
            }
            n=n%40;
        }
        if(n>=10)
        {
            temp=n/10;
            for(i=1;i<=temp;i++)
            {
                printf("X");
            }
            n=n%10;
        }
        if(n>=9)
        {
                temp=n/9;
                for(i=1;i<=temp;i++)
                {
                    printf("IX");   
                }
                n=n%9;
        }
        if(n>=5)
        {
            temp=n/5;
            for(i=1;i<=temp;i++)
            {
                printf("V");   
            }
            n=n%5;
        }
        if(n>=4)
        {
            temp=n/4;
            for(i=1;i<=temp;i++)
            {
                printf("IV");   
            }
            n=n%4;
        }
        if(n>=1)
        {
            temp=n/1;
            for(i=1;i<=temp;i++)
            {
                printf("I");   
            }
            n=n%1;
        }
    return 0;
    
}







