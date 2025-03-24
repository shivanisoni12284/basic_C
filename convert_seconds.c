// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
// Test Data :
// Input seconds: 25300
// Expected Output:
// There are:
// H:M:S - 7:1:40

#include <stdio.h>
int main()
{
    int sec ,h, m,s,n;
    printf ("enter seconds : ");
    scanf("%d",&sec);
    h = sec/3600;   // 25300 / 3600= 7
    n = sec%3600;   // 25300 % 3600= 100
    m = n/60 ;      // 100/60 = 1
    s = n%60 ;      //  100 % 60 = 40
    printf("H:M:S - %d:%d:%d",h,m,s);
    return 0;
}












