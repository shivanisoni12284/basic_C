// Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
// Test Data :
// Weight - Item1: 15
// No. of item1: 5
// Weight - Item2: 25
// No. of item2: 4
// Expected Output:
// Average Value = 19.444444

#include<stdio.h>
int main()
{
    int Weight_item1= 15;
    int number_item1= 5;
    int Weight_item2= 25;
    int number_item2= 4;
    float avg=(Weight_item1+number_item1+Weight_item2+number_item2)/4;
    printf( "Average Value =%f ",avg);
    return 0 ;


}












































