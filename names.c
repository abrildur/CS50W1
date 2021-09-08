#include <cs50.h>
#include <stdio.h>
#include <string.h> //getting the lenght of the void

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "Conejo") == 0)
        {
            //if those two strings are equal, that is, identically the same letter for letter,
            // then this function is going to return 0
            printf("Found \n");
            return 0;
        }
    }
    printf("not found");
    return 1;
}