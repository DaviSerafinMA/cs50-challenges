#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get input from user
    float received = get_float("Change owed: ");

    // how many 0.25 cents coins
    int c25 = (received / 0.25);
    printf("%i\n", c25);
    // overrun
    received = received - (0.25 * c25);    
    
}