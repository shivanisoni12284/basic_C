// Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
// Expected Output:
// Value of S: 4.50

#include<stdio.h>
int main()
{
    float i,j,sum=1.0;
    for(i=1;i==1;i++)
    {
        for(j=2;j<=50;j++)
        {
            sum=sum+(i/j);
            // printf("%f\n",sum);
        }
    }
    printf("s=%.2f ",sum);
    return 0;
}

   