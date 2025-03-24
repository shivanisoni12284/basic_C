// Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
// Test Data :
// Input the first number: 5
// Input the second number: -4
// Input the third number: 10
// Input the fourth number: 15
// Input the fifth number: -1
// Expected Output:
// Number of positive numbers: 3
// Number of negative numbers: 2

#include<stdio.h>
int main()
{
    
    int i=1, count_neg=0 ,count_pos=0;
    int value;
    
    while(i<=5)
    {
        // clrscr();
        printf("Input the number:");
        scanf("%d",&value);
        // printf("Input value: %d\n",value);
        
        if (value<0)
        {
           count_neg++;
        }
        else
        {
           count_pos++;
        }   
        
        i++;    
             
    }         
   
    printf("Number of Negative numbers:%d\n",count_neg);
    printf("Number of positive numbers:%d",count_pos);
    return 0 ;        
}
















