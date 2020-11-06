#include <stdio.h>

main()
{
int licz_od=1;
printf("program wylicza liczby od 1 do 99\n");
while (licz_od < 100)
{
    if(licz_od<10){printf(" ");}
printf("%i   ",licz_od);
if(licz_od%10==0){printf("\n");}
licz_od++;
}
printf("\n");
return 0;
}