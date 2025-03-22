// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle = 24 inches
// Area of the rectangle = 35 square inches

#include<stdio.h>
int main()
{
int length=7, width=5;
int POR = 2*(length+width);
int AOR = length*width;
printf("Perimeter of the rectangle =%d inches\n",POR );
printf("Area of the rectangle = %d square inches",AOR );

return 0;

}















