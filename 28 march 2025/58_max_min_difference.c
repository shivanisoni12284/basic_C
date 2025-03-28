// Write a C program that accepts 4 real numbers from the keyboard and prints out the difference between the maximum and minimum values of these four numbers.
// Input four numbers: 1.54 1.236 1.3625 1.002
// Difference is 0.5380

#include<stdio.h>
int main()
{
    float arr[4],max,min;
    int i;
    // printf("Input numbers:");

    for(i=0;i<4;i++)
    {
        printf("input numbers[%d]:",i);
        scanf("%f",&arr[i]);
    }

    max=arr[0];
    min=arr[0];

    for(i=1;i<4;i++)                             
    {
        if(arr[i]>max)                            
            max=arr[i];                    
        
        if(arr[i]<min)
            min=arr[i];                                
    }
    printf("Difference is %f",max-min);
    return 0 ;
}






















