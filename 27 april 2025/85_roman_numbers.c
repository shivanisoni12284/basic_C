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
    int n,i,j,temp;
    // printf("enter the number:");
    // scanf("%d",&n);
    printf("Decimal number    Roman number\n");
    
    for(int i=1;i<=100;i++)
    {
        printf("%d\t\t\t",i);
        n=i;
        if(n==100)
        {
            temp=n/100;
            for(j=1;j<=temp;j++)
            {      
                printf("C");   
            }
            n=n%100;
        }
        if(n>=90&&n<100)
        {
            temp=n/90;
            for(j=1;j<=temp;j++)
            {
                printf("XC");   
            }
            n=n%90;
        }
        if(n>=50&&n<90)
        {
            temp=n/50;
            for(j=1;j<=temp;j++)
            {
                printf("L");   
            }
            n=n%50;
        }
        if(n>=40&&n<50)
        {
            temp=n/40;
            for(j=1;j<=temp;j++)
            {
                printf("XL");   
            }
            n=n%40;
        }
        if(n>=10&&n<40)
        {
            temp=n/10;
            for(j=1;j<=temp;j++)
            {
                printf("X");
            }
            n=n%10;
        }
        if(n==9)
        {
            temp=n/9;
            for(j=1;j<=temp;j++)
            {
                printf("IX");   
            }
            n=n%9;
        }
        if(n>=5&&n<9)
        {
            temp=n/5;
            for(j=1;j<=temp;j++)
            {
                printf("V");   
            }
            n=n%5;
        }
        if(n==4)
        {
            temp=n/4;
            for(j=1;j<=temp;j++)
            {
                printf("IV");   
            }
            n=n%4;
        }
        if(n<4)
        {
            temp=n/1;
            for(j=1;j<=temp;j++)
            {
                printf("I");   
            }
        }
        printf("\n");
    }    
    return 0;
    
}








