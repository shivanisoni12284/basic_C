// Write a C program to find and print the square of each even and odd value between 1 and a given number (4 < n < 101).
// Sample Output:

// Input a number(integer): 15

// Square of each even between 1 and 15:
// 2^2 = 4
// 4^2 = 16
// 6^2 = 36
// 8^2 = 64
// 10^2 = 100
// 12^2 = 144
// 14^2 = 196

// Square of each odd between 1 and 15:
// 1^2 = 1
// 3^2 = 9
// 5^2 = 25
// 7^2 = 49
// 9^2 = 81
// 11^2 = 121
// 13^2 = 169
// 15^2 = 225
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(n%3==0)
    printf("square of each odd number between 1 and %d",n );
    for(int i=1;i<=n;i=i+2)
    {
       printf("%d^%d = %d\n",i,i,i*i);
    }
    n=n-1;
    if(n%2==0)
    {   
        printf("square of each odd number between 1 and %d",n );
        for(int i=2;i<=n;i=i+2)
        {
           printf("%d^%d = %d\n",i,i,i*i);
        }
    } 

  
  return 0;
}





































