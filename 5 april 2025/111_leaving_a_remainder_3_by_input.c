// Write a C program that accepts an integer from the user and divides all numbers between 1 and 100. Print those numbers where the remainder value is 3.
// Sample Output:
// Input a number (integer):
// 65
// Remainder value is 3 after divide all numbers between 1 and 100 by 65:
// 3
// 68

#include<stdio.h>
int main()
{ 
    int n;
    printf("enter any number netween (1 to 100):");
    scanf("%d",&n);
   
    for(int i=1;i<=100;i++)
    {
        if(i%n==3)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}









