// Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array.
// Test Data:
// Input the 5 members of the array:
// 15
// 20
// 25
// 30
// 35

// Expected Output:
// array_n[0] = 35
// array_n[1] = 30
// array_n[2] = 25
// array_n[3] = 20
// array_n[4] = 15

#include<stdio.h>
int main()
{
    int arr[6],i,n[6],j;
    for(i=0;i<5;i++)
    {
        printf("enter array element:");
        scanf("%d",&arr[i]);
    }

    for(i=4;i>=0;i--)
    {
         n[i]=arr[4-i];
        //  for(i=0;i<5;i++)
        //  {
        //      printf("%d\n",n[i]);
        //  }
    }
    for(i=0;i<5;i++)
    {
          
    
        printf("n[%d]=%d\n",i,n[i]);
    } 


    return 0;
}


























