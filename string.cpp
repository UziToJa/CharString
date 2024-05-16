#include <iostream>
#include "string.h"


void entertext(char *text)
{
    printf("Enter Text :\n");
    fgets(text,99,stdin);
}

void clear(void)
{
    while(getchar()!= '\n');
}

void printtext(char *text)
{
    printf("%s\n",text);
}

int count(char *text)
{
    int c = 0 ;
    while(*(text + c))
    {
        c++;
    }
    c =  c - 1;
    return c;
}