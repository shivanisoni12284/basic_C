// Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.
// Test Data :
// Input an integer: 13
// Expected Output:
// Positive Odd

#include<stdio.h>
int main()
{
    int n;
    printf("Input an integer:");
    scanf("%d",&n);
    
    while(n)
    {
        if(n>=0 )
            if(n%2==0)
            {
                printf("Positive even");
                break;
            }   
           else 
           { 
                printf("Positive odd");
                break; 
           }   
          
        if(n<0 )      
            if(n%2==0)
            {
                printf(" Negative even");
                break;
            }
             else  
                printf("negative odd");
                break;
        
    }        
    
    return 0 ; 


}



























