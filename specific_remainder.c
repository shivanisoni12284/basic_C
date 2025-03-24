// Write a C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3.
// Test Data :
// Input an integer: 25
// Expected Output:
// 3
// 28
// 53
// 78


#include<stdio.h>
int main()
{
    int i ;
    for(i=1;i<=100;i++)
    {
        
        if (i%25==3)
        {
           printf("%d\n",i);
        }
       
    }
    return 0;
}


//using while 

#include<stdio.h>
int main()
{
    int i=1 ;
    while (i<=100)
    {
        // printf("%d",i);
        if (i%25==3)
        {
           printf("%d\n",i);
        }
        i++;
    }
    return 0;
}







