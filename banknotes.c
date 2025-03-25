// Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
// Test Data :
// Input the amount: 375
// Expected Output:
// There are:
// 3 Note(s) of 100.00
// 1 Note(s) of 50.00
// 1 Note(s) of 20.00
// 0 Note(s) of 10.00
// 1 Note(s) of 5.00
// 0 Note(s) of 2.00
// 0 Note(s) of 1.00

#include<stdio.h>
int main()
{
    int note,n1,n2,n3,n4,n5,n6 ,n7;
    printf("enter money:");
    scanf("%d",&note);
   
    if(note>=100)
    {
       n1=note/100;
       printf("%d Notes(s) of 100.00\n",n1);
       note=note-(n1*100);
    }
    else
    printf("0 Notes(s) of 100.00\n");
    if(note>=50)
    {
       n2=note/50;
       printf("%d Notes(s) of 50.00\n",n2);
       note=note-(n2*50);
    }
    else
    printf("0 Notes(s) of 50.00\n");

    if(note>=20)
    {
       n3=note/20;
       printf("%d Notes(s) of 20.00\n",n3);
       note=note-(n3*20);
    }
    else
    printf("0 Notes(s) of 20.00\n");

    if(note>=10)
    {
       n4=note/10;
       printf("%d Notes(s) of 10.00\n",n4);
       note=note-(n4*10);
    }
    else
    printf("0 Notes(s) of 10.00\n");

    if(note>=5)
    {
       n5=note/5;
       printf("%d Notes(s) of 5.00\n",n5);
       note=note-(n5*5);
    }
    else
    printf("0 Notes(s) of 5.00\n");

    if(note>=2)
    {
       n6=note/2;
       printf("%d Notes(s) of 2.00\n",n6);
       note=note-(n6*2);
    }
    else
    printf("0 Notes(s) of 2.00\n");

    if(note>=1)
    {
       n7=note/1;
       printf("%d Notes(s) of 1.00\n",n7);
       note=note-(n7*1);
    }
    else
    printf("0 Notes(s) of 1.00\n");

    return 0;   
       
        
    

    
       
    











} 



