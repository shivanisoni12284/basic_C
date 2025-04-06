// Write a C program to print the corresponding Fahrenheit to Celsius and Celsius to Fahrenheit.
// Both cases initial tempratue = 00, maximum temperature = 1500 and step 100
// Sample Output:
// Celsius to Fahrenheit
// ---------------------
// Celsius   Fahrenheit
//    0.0 	     32.0
//   10.0 	     50.0
//   20.0 	     68.0
//   30.0 	     86.0
// ....
//  120.0 	    248.0
//  130.0 	    266.0
//  140.0 	    284.0
//  150.0 	    302.0

// Fahrenheit to Celsius
// ---------------------
// Fahrenheit  Celsius
//    0.0 	    -17.8
//   10.0 	    -12.2
//   20.0 	     -6.7
//   30.0 	     -1.1
//   40.0 	      4.4
//   50.0 	     10.0
//  ...

#include<stdio.h>
int main()
{
    float c,f,i;
    printf("celsius to fahrenheit\n");
    printf("------------------------\n");
    for(c=0.0;c<=150.0;c+=10.0) 
    {
        f=c*1.8+32;
        printf("%f     %f\n",c,f);
    }

    printf("\nfahrenheit to celsius\n");
    printf("------------------------\n");
    for(f=0.0;f<=150.0;f+=10.0) 
    {
        i=(f-32)*5/9;
        printf("%f     %f\n",f,i);
    }
    return 0;
}








