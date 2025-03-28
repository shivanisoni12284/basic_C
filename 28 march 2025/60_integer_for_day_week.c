// Write a C program to create enumerated data types for 7 days and display their values in integer constants.
// Sun = 0
// Mon = 1
// Tue = 2
// Wed = 3
// Thu = 4
// Fri = 5
// Sat = 6

#include<stdio.h>
int main()
{
    int i;
    char arr[7][4]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    
    for(i=0;i<7;i++)
    printf("%s = %d\n",arr[i],i);
    return 0 ;
}




























