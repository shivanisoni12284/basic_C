//define a function to convert any given year into its Roman equivalent, use these roman equivalents for decimal numbers :1-I,5-V,10-X,50-L,100-C,500-D,1000-M.
//example
//Roman equivalent of 1988 is mdcccclxxxviii.
//Roman equivalent of 1525 is mdxxv

#include<stdio.h>
int Roman(int ,int,char);
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Roman equivalent of %d is ",num);
    num=Roman(num,1000,'m');
    num=Roman(num,500,'d');
    num=Roman(num,100,'c');
    num=Roman(num,50,'l');
    num=Roman(num,10,'x');
    num=Roman(num,5,'v');
    num=Roman(num,1,'i');
 
}

int Roman(int x,int y,char ch)
{
   int i,j;
   j=x/y;
   for(i=1;i<=j;i++)
   {
      printf("%c",ch);
   }
   return(x%y);
}

























// #include<stdio.h>
// int Roman();
// int calc;
// int main()
// {
//     int n,calc;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     calc=Roman(n);
//     printf("The roman equivalent of the number:");
// }

// int Roman(int num)
// {
//     int temp,i;
//     while (num>0)
//     {
//        if(num>=1000)  
//        {
//           temp=num/1000;
//           for(i=1;i<=temp;i++)
//           {
//             printf("M");
//           }
//           num=num%1000;
//        }

//        if(num<1000 && num>=500)  
//        {
//           temp=num/500;
//           for(i=1;i<=temp;i++)
//           {
//             printf("D");
//           }
//           num=num%500;
//        }

//        if(num<500 && num>=100)  
//        {
//           temp=num/100;
//           for(i=1;i<=temp;i++)
//           {
//             printf("C");
//           }
//           num=num%100;
//        }

//        if(num<100 && num>=50)  
//        {
//           temp=num/50;
//           for(i=1;i<=temp;i++)
//           {
//             printf("L");
//           }
//           num=num%50;
//        }

//        if(num<50 && num>=10)  
//        {
//           temp=num/10;
//           for(i=1;i<=temp;i++)
//           {
//             printf("X");
//           }
//           num=num%10;
//        }

//        if(num<10 && num>=5)  
//        {
//           temp=num/5;
//           for(i=1;i<=temp;i++)
//           {
//             printf("V");
//           }
//           num=num%5;
//        }

//        if(num<5 && num>=1)  
//        {
//           temp=num/1;
//           for(i=1;i<=temp;i++)
//           {
//             printf("I");
//           }
//           num=num%1;
//        }
    
//     }
     
// }