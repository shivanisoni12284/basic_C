// Write a C program to display multiple variables.
// Sample Variables :
// a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
// Declaration :
// int a = 125, b = 12345;
// long ax = 1234567890;
// short s = 4043;
// float x = 2.13459;
// double dx = 1.1415927;
// char c = 'W';
// unsigned long ux = 2541567890;

#include<stdio.h>
int main()
{  
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    // printf("%d",c);
    unsigned long ux = 2541567890;
    printf("a+c=%d\n",a+c);
    printf("x+c=%f\n",x+c);
    printf("dx+x=%f\n",dx+x);
    printf("a+c=%d\n",((int) dx) + ax);
    printf("a+x=%d\n",a+x);
    printf("s+b=%d\n",s+b);
    printf("ax+b=%d\n",ax+b);
    printf("s+c=%d\n",s+c);
    printf("ax+c=%d\n",ax+c);
    printf("ax+ux=%d\n",ax+ux);
    return 0 ;
}
















