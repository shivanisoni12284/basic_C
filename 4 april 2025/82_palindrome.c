// Write a C program that reads a five-digit integer and determines whether or not it's a palindrome.
// Sample Input: 33333
// Sample Output:
// Input a five-digit number: 33333 is a palindrome.

#include<stdio.h>
int main()
{
   int n,rem,rev=0,orignum; 
   printf("enter number:");
   scanf("%d",&n);
   orignum = n;

   while(n>0)
   {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
   }
   if(rev==orignum){
       printf("%d is palindrome",orignum);
   }
   else{
       printf("%d is not palindrome",orignum);
    }
       return 0;
}




