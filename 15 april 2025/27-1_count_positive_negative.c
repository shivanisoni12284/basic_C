// Write a C program to count the number of even and odd numbers among five inputs.

#include<stdio.h>
int main()
{
    
    int i=1, count_even=0 ,count_odd=0,arr[5];
    int value;
    
    // while(i<=5)
    // {
        // clrscr();
        for(int i=0;i<5;i++)
        {
            printf("Input the number:");
            scanf("%d",&arr[i]);
        }
        // printf("Input the number:");
        // scanf("%d",&arr[i]);
        // // printf("Input value: %d\n",value);
        for(int i=0;i<5;i++)
        {
            if (arr[i]%2==0)
            {
               count_even++;
            }
            else
            {
               count_odd++;
            }   
            
        }
      
        
        // i++;    
             
    // }         
   
    printf("Number of Negative numbers:%d\n",count_even);
    printf("Number of positive numbers:%d",count_odd);
    return 0 ;        
}
















