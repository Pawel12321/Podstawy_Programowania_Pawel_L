#include <stdio.h>

#define ProgDolny 20 
#define ProgGorny 32

int main()
{
int obecnaTemp;
printf("Podaj jaką obenie mamy temperaturę: ");
scanf("%d",&obecnaTemp);
if(obecnaTemp<ProgDolny)
{
printf("Nie jest zbyt ciepło");
}
else
{
    if(obecnaTemp>ProgGorny)
    {
        printf("Jest bardzo gorąco!");
    }
    else
    {
        printf("Jest bardo ładna pogoda.\nMiłego dnia 🙂");
    }
    
}
printf("\n"); 
 
return 0;
}