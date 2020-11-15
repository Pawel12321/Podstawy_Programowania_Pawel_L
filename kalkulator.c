#include <stdio.h>
#include <math.h>


int main ()
{
    int zm1;
    int zm2;
    {
    printf("Program dodaje, odejmuje, mnozy oraz dzieli podane wartosci (A) oraz (B)\n");
    printf("Podaj wartosc A: \t \n");
    scanf("%d", &zm1);
    printf("Podaj wartosc B:\t \n");
    scanf("%d", &zm2);
    int a;
    int b;
    int c;
    float d;
    {a=zm1+zm2;
    b=zm1-zm2;
    c=zm1*zm2;
    d=zm1/(float)zm2;
    printf("A+B = %d\n",a);
    printf("A-B = %d\n",b);
    printf("A*B = %d\n",c);
    printf("A/B = %f\n",d);


    }    


return 0;
}
}