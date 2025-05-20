//call by value and call by reference

call by value
#include<stdio.h>
int func(int ,int);
int main()
{
    int x=5;
    int y=7;
    func(x,y);
    printf("inside main function x=%d,y=%d\n",x,y);
}

int func(int x,int y)
{
    x=7;
    y=5;
    printf("inside calling function x=%d,y=%d\n",x,y);

}

// call by reference
#include<stdio.h>
int func(int *,int *);
int main()
{
    int x=5;
    int y=7;
    func(&x,&y);
    printf("inside main function x=%d,y=%d\n",x,y);
}

int func(int *x,int *y)
{
    *x=7;
    *y=5;
    printf("inside calling function x=%d,y=%d\n",*x,*y);
    return 0;
}