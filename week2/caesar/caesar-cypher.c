#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int strint(string s);

int main(int argc,string argv[])
{
    if(argc!= 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);
    string ptxt = get_string("Plain text: ");
    printf("Cypher text: ");
    strint(ptxt);
    
    int itxt = atoi(ptxt);
    printf("Word %i\n", key);

    return 0;
}

int strint(string s)
{
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c",s[i]+1);
        }
        else
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%c",s[i]+1);
            }
            else
            {
                printf("%c",s[i]);
            }
        }
    }
    printf("\n");
}