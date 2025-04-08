// Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.
// Expected Output:
// Value of series: 4.62

#include<stdio.h>
int main()
{
    float s,i,sum=1,j=2;
    for(i=3;i<=7;i=i+2)
    {
        while(j<=8)
        {
            sum=sum+(i/j);
            break;
        }
        j=j+j;
    }
    printf("s=%.3f",sum);
    return 0;
}

   












