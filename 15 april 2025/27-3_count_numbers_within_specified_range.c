// Write a C program to count how many numbers in a list fall within a specified range.

#include<stdio.h>
int main()
{
    
    int i=1,count=0,a,b;
    int value;
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    
    while(i<=5)
    {
        // clrscr();
        printf("Input the number:");
        scanf("%d",&value);
        // printf("Input value: %d\n",value);
        for(int j=a;j<=b;j++)
        {
            if(value=a && value<=b)
            {
                count++;
            }
        } 
        i++;    
             
    }         
   
    printf("Numbers within specified range are:%d\n",count);

    return 0 ;        
}
















