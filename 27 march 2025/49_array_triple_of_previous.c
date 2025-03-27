// Write a C program to read and print the elements of an array with length 7. Before printing, insert the triple of the previous position, starting from the second position.
// For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162
// Test Data:
// Input the first number of the array: 5
// Expected Output:
// n[0] = 5
// n[1] = 15
// n[2] = 45
// n[3] = 135
// n[4] = 405

#include<stdio.h>
int main()
{
    int arr[7],i,s=1;
    
    
        printf("enter the number:");
        scanf("%d",&arr[i]);                              
        printf("n[0]=%d\n",arr[i]);
      
    
    // printf("array values are :");
    for(i=1;i<5;i++)
    {
       
        arr[i]=3*arr[i-1];
        printf("n[%d]=%d\n",i,arr[i]);
    }
    return 0;
}