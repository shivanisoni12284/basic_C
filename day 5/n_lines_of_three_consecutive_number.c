// Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
// Test Data :
// Input number of lines: 5
// Expected Output:
// 1 2 3
// 4 5 6
// 7 8 9
// 10 11 12
// 13 14 15

#include<stdio.h>
int main()
{
    int n,i ,s;
    printf("enter the number of lines:");
    scanf("%d",&n);
    
    s=n*3;
    for(i=1;i<=s;i++)
    {
        // printf("%d %d %d",i,i++,i=i+1); // sir why this line is giving output like 3 2 3 then 6 5 6 and so on not 1 2 3 then 4 5 6 

        printf("%d",i);
        printf(" %d %d",i++,i=i+1);    

        if(i%3==0)
            printf("\n");
    }

    return 0;
}

























