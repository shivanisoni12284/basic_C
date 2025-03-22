// Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
// Test Data :
// Input the Employees ID(Max. 10 chars): 0342
// Input the working hrs: 8
// Salary amount/hr: 15000
// Expected Output:
// Employees ID = 0342
// Salary = U$ 120000.00

#include<stdio.h>
int main()
{
    int EmpId , workHrs , salaryAmount_per_hr;
    printf("enter employees id:");
    scanf("%d",&EmpId);
    printf("enter working hours:");
    scanf("%d",&workHrs);
    printf("enter salary amount per hour:");
    scanf("%d",&salaryAmount_per_hr);
    float salary = workHrs*salaryAmount_per_hr;
    printf("Employees ID =%d",EmpId);
    printf(" salary = U$ %.2f",salary);
    return 0 ; 

}













































