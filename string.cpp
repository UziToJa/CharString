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
