// Write a C program to map a month number to its corresponding season (e.g., winter, spring, summer, autumn).


#include<stdio.h>
int main()
{
    int month;
    printf("enter month number:");
    scanf("%d",&month);
    if(month>=3 && month<=5)
        printf("Spring");
    if(month>=6 && month <=8)
        printf("Summer");
    if(month>=9 && month <=11)
        printf("Autumn");
    if(month==12 || month >=1 && month <=2)
        printf("Winter");
     return 0;
}
