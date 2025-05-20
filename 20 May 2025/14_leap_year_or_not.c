//Any year is entered through the keyboard.write a function to determine whether the year is a leap year or not

#include<stdio.h>
int Leap();
int main()
{
    int year,result;
    printf("enter the year:");
    scanf("%d",&year);
    Leap(year);
}

int Leap(int num)
{
    if((num%4==0 && num%100!=0) || num%400==0)
    {
        printf("%d is leap year",num);
    }
    else
    {
        printf("%d is not leap year",num);
    }
}
