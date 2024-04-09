/******************************************************************************
 Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
 that amount using the smallest number of $20, $10, $5, and $1 bills:
 Enter a dollar amount: 93
 $20 bills: 4
 $10 bills: 1
 $5 bills:  0
 $1 bills:  1
 
 
 
********************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void pay_amount(int dollars, int *twenties, int *tens,
                int *fives, int *ones)
{
       // printf(" dollar1 = %d\n",dollars );
        *twenties = dollars / 20 ;
         dollars  %= 20;
       //  printf(" dollar2 = %d\n",dollars );
        
        *tens = dollars / 10 ;
         dollars  %= 10;
        
        //printf(" dollar3 = %d\n",dollars );
        
        *fives = dollars / 5 ;
       dollars  %= 5;
        
        
        
        
        *ones = dollars;
        
}
int main() 
{
    
    int dollars;
    int twenties;
    int tens;
    int fives;
    int ones;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens,
                &fives, &ones);    
                
                
      // Display the result
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills:  %d\n", fives);
    printf("$1 bills:  %d\n", ones);           
                
                
                
    return 0;
}
/*#include <stdio.h>

int main() {
    int amount, twenties, tens, fives, ones;

    // Prompt the user to enter a dollar amount
    
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    // Calculate the number of each denomination
    twenties = amount / 20;
    amount %= 20;
    

    tens = amount / 10;
    amount %= 10;


    fives = amount / 5;
    amount %= 5;


    ones = amount;

    // Display the result
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills:  %d\n", fives);
    printf("$1 bills:  %d\n", ones);

    return 0;
}*/












