#include <iostream>
#include "string.h"

void menu()
{
    printf("1 - Enter Text\n");
    printf( "2 - Print Text\n");
    printf( "3 -Stop Program\n");
}
int main()
{
    char text[100] = " ";
    int choice = 0 ;
    do{
        menu();
        puts("Choose = ");
        scanf("%d",&choice);
        clear();
        switch(choice)
        {
            case 1:
                entertext(text);
                break;
            case 2:
                break;
            case 3:
                break;
        }
    }while( choice!=3);
}

