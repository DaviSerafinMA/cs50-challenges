#include <stdio.h>
#include <cs50.h>

int dollar = -1;

int main(void)
{
    // get input from user
    while( dollar < 0)
    {
        dollar = get_int("Change owed: ");    
    }
    
    // converting float to int
    int received = dollar; //* 100; 


    // how many 0.25 cents coins
    int c25 = (received / 25);
    if(c25>=1)
    {
        printf("%i $ 0.25 coins\n", c25);
        received = received - (25 * c25);
    }
    // how many 0.10 cents coins
    int c10 = (received / 10);
    if(c10>=1)
    {    
        printf("%i $ 0.10 coins\n", c10);
        received = received - (10 * c10);
    }
    // how many 0.05 cents coins
    int c5 = (received / 5);
    if(c5>=1)
    {
        printf("%i $ 0.05 coins\n", c5);
        received = received - (5 * c5);
    }
    // how many 0.01 cents coins
    int c1 = (received / 1);
    if(c1>=1)
    {
        printf("%i $ 0.01 coins\n", c1);
        received = received - (1 * c1);
    }
    int sum = c25+c10+c5+c1;
    printf ("total of %i coins\n", sum);
}