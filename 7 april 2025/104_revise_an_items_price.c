// Write a C program that reads the item's price and creates a revised price for the item, based on the item price table.
// Sample Output:
// Input the item price:525
// New Item price: 582.75
// Increased price: 57.75
// Increase Percentage: 11%

#include<stdio.h>
int main()
{  
    float price,neW_price,increase_p,perc;
    
    printf("input the item price");
    scanf("%f",&price);
    printf("new Item price:");
    scanf("%f",&neW_price);

    increase_p=neW_price-price;
    perc= ((increase_p*100)/price);
    printf(" increased price =%f",increase_p);
    printf(" increased percentage =%f",perc);


   
    return 0;
}

   

















