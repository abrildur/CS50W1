#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //promt user to agreee
    char c = get_char("Do you agree: ");
    //check wheter user agreed
    if (c == 'y' ||  c == 'Y') //or equals ||
    {
        printf("agreed \n");
    }else if (c == 'n')
    {
        printf("not agreed");
    }
}