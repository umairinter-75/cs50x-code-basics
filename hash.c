#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int hash(char *word);


int main(void)
{
    char *word = get_string("Hash word: ");
    printf("Hash value: %i\n", hash(word));
}

int hash(char *word)
{
    // Not 2 letters

    if (word == NULL || strlen(word) == 0)
    {
        return -2;
    }


    char c = word[0];
    char c1 = word[1];
    if(isalpha(c) && isalpha(c1))
    {
        c = toupper(c);
        c1 = toupper(c1);
        return (c - 'A') * 100 + (c1 - 'A');
    }
    return -1;
}
