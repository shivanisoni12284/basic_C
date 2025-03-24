// Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
// Test Data :
// Input no. of days: 2535
// Expected Output:
// 6 Year(s)
// 11 Month(s)
// 15 Day(s)

#include<stdio.h>
int main()
{
    int d,years,months,days,n;
    printf("Input no. of days:");
    scanf("%d",&d);
    years = d/365;        //2535/365= 6  2190
    n= 2535-(years*365);  // 345
    months = n/30;        // 345/30 =11 
    days = n% 30;         // 345%30 = 15
    printf("%d Year(s)\n",years);
    printf("%d Month(s)\n",months);
    printf("%d Day(s)\n",days);
    return 0 ;
    

}









































