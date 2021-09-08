#include<cs50.h>
#include<stdio.h>
#include<string.h>


typedef struct
{
    string name;
    string number;
}

person;

int main(void)
{
   person people[2];

   people[0].name = "Brian";
   people[0].number = "+1214";

   people[1].name = "David";
   people[1].number = "+52 812105749";

    for (int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name, "David") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("not found");
    return 1;
}