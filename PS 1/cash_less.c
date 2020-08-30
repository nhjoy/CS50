//cash less comfortable

#include <stdio.h>
#include <cs50.h>
#include <math.h>

float change;

int coins = 0;
int quantity;

int main(void)
{
    do 
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);


//converting float change (dollars) into integer change (cents)

    quantity = round(change * 100.00);


    while (quantity >= 25) //This runs as long as quantity left is bigger than a quarter coin
    {
        quantity -= 25;
        coins++;
    }
    while (quantity >= 10) //This runs as long as quantity left is bigger than a dime coin
    {
        quantity -= 10;
        coins++;
    }
    while (quantity >= 5) //This runs as long as quantity left is bigger than a nickel coin
    {
        quantity -= 5;
        coins++;
    }
    while (quantity >= 1) //This runs as long as quantity left is bigger than 0
    {
        quantity -= 1;
        coins++;
    }

    printf("%i\n", coins);
}
