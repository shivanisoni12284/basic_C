// Write a C program that displays the n terms of square natural numbers and their sum.
// 1 4 9 16 ... n Terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// The square natural upto 5 terms are :1 4 9 16 25
// The Sum of Square Natural Number upto 5 terms = 55


#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("The even numbers are:");
    for(i=1;i<=n;i++)
    {   

        printf("%d ",i*i);
        sum=sum+(i*i);
    }
    // printf("the even numbers are:%d ",i);
    printf("\nThe sum of even natural numbers upto %d terms: %d",n,sum);


    
    return 0;
}

    









