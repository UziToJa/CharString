#include <iostream>
#include "string.h"

void menu()
{
    printf("1 - Enter Text\n");
    printf( "2 - Print Text\n");
    printf( "3 -Text Length\n");
    printf( "4 -Change to Big Text\n");
    printf( "5 -Change To Small Text\n");
    printf( "6 -Stop Program\n");
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
                printtext(text);
                break;
            case 3:
                printf("Text length = %d\n", count(text));
                break;
            case 4:
                bigText(text);
                printf("Change To Big Text\n");
                break;
            case 5:
                smallText(text);
                printf("Change To Small Text\n");
                break;
        }
    }while( choice!=6);
}

