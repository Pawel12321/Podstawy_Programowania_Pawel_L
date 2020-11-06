#include <stdio.h>

int main(void)
{
    int byl=0;//deklaracja zmiennych
    int arg;
for(int i=1;i!=0;i++)//główna pętla programu
{
    byl=1;
    printf("Podaj %i. wartosc parametru: ",i);
    scanf("%d",&arg);
    if(arg==99){break;}//wyłączenie programu dla argumentu 99
    if(arg<=5)//warunek dla poprwnego parametru
    if(arg>=-5)//warunek dla poprwnego parametru
    {printf("Aktualna wartość parametru: %i",arg);byl--;}// wyświetlanie przy poprawnym argumencie
    if(byl==1){printf("Bledna wartosc parametru !");}// wyswietlanie dla błędnego argumentu
    printf("\n");
}
    printf("\n");
    return 0;
}