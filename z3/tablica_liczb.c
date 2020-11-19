#include <stdio.h>
#include <math.h>


int tablica[10][10];

void wypelnij(int x, int y){
    int i;
    int j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            tablica[i][j]=i*j;
        }
    }
}

void wypisz(int x, int y){
    int i;
    int j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d\t", tablica[i][j]);
        }
        printf("\n");
    }
}

void zmien(int x, int y){
    int i;
    int j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            tablica[i][j]=tablica[i][j]*-1;
        }
    }
}
int main() {
    /*wypelnij(3,7);
    printf("Zawartosc oryginalna:\n");
    wypisz(3,7);
    zmien(3,7);
    printf("Zawartosc po zmianie znakow:\n");
    wypisz(3,7);
    return 0; */
}