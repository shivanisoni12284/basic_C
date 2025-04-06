// Write a C program to calculate the sum of two given integers and count the number of digits in the sum value.
// Sample Output:
// Input two integer values:
// 68
// 75
// Number of digits of the sum value of the said numbers:
// 3

#include<stdio.h>
int main()
{
    int n1,n2,sum,i,rem,count=0;
    printf("enter two integers:");
    scanf("%d %d",&n1,&n2);

    sum=n1+n2;
    while(sum>0)
    {
       rem=sum%10;
       count++;
       sum=sum/10;
    }
    printf("Number of digits in sum value = %d",count);
    return 0 ;
}






























