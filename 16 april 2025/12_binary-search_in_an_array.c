// Write a C program to perform a binary search in an array. 

// Test Data and Expected Output :

// Input the number of elements to be stored in the array :5               
// Input 5 elements in the array :                                         
// element - 1 : 25                                                        
// element - 2 : 20                                                        
// element - 3 : 18                                                        
// element - 4 : 13                                                        
// element - 5 : 15                                                        
//  Input a value to search : 18                                           
// 18 is found in the array. 

#include<stdio.h>
int main()
{
    int n,i,a;
    printf("input the number of elements to be stored in an array:");
    scanf("%d",&n);
    int arr[n];
    
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        printf("element %d : %d\n",i,arr[i]);
    }
    printf("enter value to search :");
    scanf("%d",&a);
    for(i=1;i<=n;i++)
    {
        if(arr[i]==a)
        {
          printf("%d is found in the array\n",a);
        }
    }
    // printf("%d not found in the array",a);
    
   return 0;
}













