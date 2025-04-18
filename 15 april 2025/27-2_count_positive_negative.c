// Write a C program to count the positive, negative, and zero values from a set of five integers

#include<stdio.h>
int main()
{
    
    int i=1, count_neg=0 ,count_pos=0,count_zero=0;
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
        else if(value==0)
        {
            count_zero++;
        }
        else
        {
           count_pos++;
        }   
        
        i++;    
             
    }         
   
    printf("Number of Negative numbers:%d\n",count_neg);
    printf("Number of positive numbers:%d\n",count_pos);
    printf("Number of zero numbers:%d\n",count_zero);
    return 0 ;        
}
















