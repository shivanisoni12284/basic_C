// print heart shape
//   ***     ***
//  *****   *****
// ******* *******
// ***************
//  *************
//    *********
//      *****
//       ***
//        *

#include<stdio.h>
int main()
{
    int i,j,k,temp=3,s,n=1,temp3=2,temp4,f,temp5,g;
    for(i=1;i<=3;i++)
    {
        j=temp3;
        for(;j>=1;j--)
        {
            printf(" ");
        }
        // printf("%d",j);
        for(k=1;k<=temp;k++)
        {
            printf("*");   
        }
        for(s=5;s>=n;s--)
        {
            // printf("%d",n);
            printf(" ");
        }
        for(k=1;k<=temp;k++)
        {
            printf("*");   
        }
        temp=temp+2;  //5
        n=n+2;        //3
        temp3=temp3-1;
        // printf("%d",temp3);
        printf("\n");
    }   
    temp4=0;
    f=9;
    for(i=0;i<=5;i++)
    {
        for(k=1;k<=temp4;k++)
        {
            printf(" ");
        }
        if(i>=0&&i<=1)
        {
            for(j=15;j>2*i;j--)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            j=f;
            for(;j>=1;j--)
            {
                printf("*");
            }
            printf("\n");
            
            f=f-2;
            if(f==7)
            {
                f=f-2;
            }
            // printf("%d",f);
        }
        if(temp4==0||temp4>=5)
        {
            temp4=temp4+1;
            // printf("..%d",temp4);
        }
        else{
            temp4=temp4+2;
            // printf("%d",temp4);
        }
        

        
       
    }  
    
    return 0;
}

   


















     // for(j=1;j<=temp5;j++)
        // {
        //     printf("*");
        // }
        //  printf("\n");
        //  
        //  s=g;
        //  for(;s<=g;s++)
        //  {
        //     printf("pp%d",s);
        //     if(s==2||s==4)
        //     {
        //         s=s+1;
        //         if(s==3)
        //         {
        //             temp5=9;
        //             break;
        //         }
        //         else{
        //             continue;
        //         }
                
        //     }
        //     if(g==7)
        //     {
        //         break;
        //     } 
        //     temp5=15-(2*s);
        //     // printf("..%d",temp5);
        //  }
        //  g=s;
        // //  printf("_%d",g);
        // for(s=1;s<=15;s++)
        // {

        // }
