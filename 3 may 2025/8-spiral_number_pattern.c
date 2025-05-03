//print spiral number pattern number
// 1  2  3  4  5  
// 16 17 18 19 6
// 15 24 25 20 7
// 14 23 22 21 8
// 13 12 11 10 9

#include<stdio.h>
int main()
{
    int n=5,a=1,j,i,c=1;
    int arr[5][5],top=0,bottom=n-1,left=0,right=n;
    
    for(i=left;i<right;i++)
    {
        arr[top][i]=c;
        // printf("%d ",arr[top][i]);              // 1 2 3 4 5     // 1 2 3 4 
        c++;
    }
    top++;
    right--;

    for(i=top;i<=bottom;i++)
    {               
        arr[i][right]=c;                           //  6 7 8 9      // 5 6 7
        c++;
    }
    right--;
    for(i=right;i>=left;i--)
    {
        arr[bottom][i]=c;                           // 10 11 12 13  // 8 9 10 
        // printf("%d ",arr[bottom][i]);
        c++;
    }
    bottom--;
    for(i=bottom;i>=top;i--)
    {
        arr[i][left]=c;
        // printf("%d ",arr[i][left]);              // 14 15 16  // 11 12
        c++;
    }
    for(i=top;i<=bottom;i++)
    {
        arr[top][i]=c;
        // printf("%d ",arr[top][i]);            // 17 18 19      // 13 14 
        c++;
    }
    top++;
    for(i=top;i<=bottom;i++)
    {
        arr[i][bottom]=c;                        // 20 21       //  15 (19)  problem
        // printf("%d ",arr[i][bottom]);
        c++;
    }
    left++;
    for(i=top;i>=left;i--)
    {
        arr[bottom][i]=c;
        // printf("%d ",arr[bottom][i]);        // 22 23
        c++;
    }
    for(i=left;i<=top;i++)
    {
        arr[top][i]=c;
        // printf("%d ",arr[top][i]);           //24 25
        c++;
    }

    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            if(i==0)
            {
                printf("%d  ",arr[i][j]);
            }
            else{
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
        // printf("..%d",arr[2][2]);
    }
    // printf("..%d",top);
    // printf("..%d",left);
    // printf("..%d",bottom);
    // printf("..%d",right);
    return 0;
}

