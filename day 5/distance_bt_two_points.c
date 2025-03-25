// Write a C program to calculate the distance between two points.
// Test Data :
// Input x1: 25
// Input y1: 15
// Input x2: 35
// Input y2: 10
// Expected Output:
// Distance between the said points: 11.1803

#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,y2,x2,a,b;
    float d;
    printf("input the number 1:");
    scanf("%d",&x1);
    printf("input the number 2:");
    scanf("%d",&x2);
    printf("input the number 3:");
    scanf("%d",&y1);
    printf("input the number 4:");
    scanf("%d",&y2);
    a=x2-x1;
    b=y2-y1;


    d=sqrt((a*a)+(b*b));
    printf("Distance between two points: %d",d);
    return 0;
}














