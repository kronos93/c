#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    a++;
    a++;
    a++;
    int b = a+20;
    printf("\nEl valor de b es: %d",b);
    int d = (b > (a*1000)) ? 1000 : -1000; //Operador ternario

    printf("\nEl valor de d es: %d",d);
    double exp1 = (5/2);
    printf("\nExpresión 1 = %f",exp1);
    return 0;
}
