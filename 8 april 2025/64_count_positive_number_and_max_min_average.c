// Write a C program that accepts integers from the user until a zero or a negative number, displays the number of positive values, the minimum value, the maximum value, and the average value.
// Input a positive integer:
// Input next positive integer: 15
// Input next positive integer: 25
// Input next positive integer: 37
// Input next positive integer: 43
// Number of positive values entered is 4
// Maximum value entered is 43
// Minimum value entered is 15
// Average value is 30.0000

#include<stdio.h>
int main()
{
    int arr[100],n,i,max,min,count=0,sum=0;
    printf("Input number:");
    for(i=0;i<=100;i++)
    {

        // printf("Input next positive integer:");
        scanf("%d",&arr[i]);
        {

            if(arr[i]==0 || arr[i]<0)
            {
                n=i;
                break;
            }
        }    
    }   // if(arr[i]!=0 && arr[i]>0)
     for(i=0;i<n;i++)
     {
        printf("Input next positive integer:%d\n",arr[i]);
        count++;
        sum=sum+arr[i];
        printf("%d\n",count);
        // printf("%d",sum);
    }
       
    max=arr[0];
    min=arr[0];
    printf("%d",max);
    printf("%d",min);

    for (i=1;i<count;i)
    {
        if(arr[i]>max)
          max=arr[i];

        if(arr[i]<min)
          min=arr[i];  
    }
    // float avg=(float)sum/(float)count;
    printf(" Number of positive values entered is %d\n",count);
    printf(" Maximum value entered is %d\n",max);
    printf(" Minimum value entered is %d\n",min);
    // printf(" Average value is %f\n",avg);
    float avg=(float)sum/(float)count;
    printf(" Average value is %f\n",avg);
    return 0;
}

    

