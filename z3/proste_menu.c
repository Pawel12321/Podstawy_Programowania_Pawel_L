#include <stdio.h>


int main ()
{

    char pozycja;
    while (pozycja !='4')
    {
    
    
        printf("Proste menu:\n");
        printf("1 - Pozycja pierwsza\n");
        printf("2 - Pozycja druga\n");
        printf("3 - Pozycja trzecia\n");
        printf("4 - Zakoncz dzialanie\n");
        printf("Twoj wybor:");
        scanf("%s", &pozycja);
        switch (pozycja)
        {
        case '1':
        printf("Wybrano pozycje pierwsza");
        break;    
        case '2':
        printf("Wybrano pozycje druga");
        break;
        case '3':
        printf("Wybrano pozycje trzecia");
        break;
        case '4':
        printf("Koniec dzialania programu\n");
        break;
        default:
        printf("Niewlasciwa wartosc\n");
        break;
        }           
        }
        return 0;
}