// Write a C program to convert specified days into years, weeks and days.
// Note: Ignore leap year.

// Test Data :
// Number of days : 1329
// Expected Output :
// Years: 3
// Weeks: 33
// Days: 3

#include<stdio.h>
int main()
{
    int  Number_days = 1329;
    int years = Number_days/365;           // 1329/365=3
    int num =  (Number_days-(years*365));  // 1329- 1095 =  134
    int Weeks =  num/7;                    //  234/7 = 33
    int Days = (num-(7*Weeks));
    printf("years: %d\n",years);
    printf("Weeks: %d\n",Weeks);
    printf("Days: %d\n",Days);
     
    return 0;


}

























