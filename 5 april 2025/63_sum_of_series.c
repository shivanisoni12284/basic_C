// Write a C program that accepts a positive integer n less than 100 from the user. It prints out the sum of 14 + 24 + 44 + 74 + 114 + • • • + m4. In this case, m is less than or equal to n. Print an appropriate message.
// Input a positive number less than 100: 68
// Sum of the series is 37361622

#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int n;
    printf("enter a positive number less than 100:");
    scanf("%u",&n);

    int i =1,a,sum=0,m;
    while(i<=n)
    { 
       for(m=m+m;m<=10;m++)
       {
           i=i+m;
           break;
        }   
        m=m+1 ;
        a=pow(i,4); 
        sum=sum+a;
        
    }
    printf("sum of the series is %d\n",sum);
    return 0;
}



















