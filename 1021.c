/**
 *  author:  anikbhai96
 *  created: 27.07.2025
**/
#include <stdio.h>

int main(int argc, char *argv[])
{
    double x, z;
    scanf("%lf", &x);
    int y = (int)x, rem, rem1, m;
    z = x - y;


    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", y / 100);
    rem = y % 100;

    printf("%d nota(s) de R$ 50.00\n", rem / 50);
    rem = rem % 50;

    printf("%d nota(s) de R$ 20.00\n", rem / 20);
    rem = rem % 20;

    printf("%d nota(s) de R$ 10.00\n", rem / 10);
    rem = rem % 10;

    printf("%d nota(s) de R$ 5.00\n", rem / 5);
    rem = rem % 5;
    
    printf("%d nota(s) de R$ 2.00\n", rem / 2);
    rem = rem % 2;


    printf("MOEDAS:\n");
    
    printf("%d moeda(s) de R$ 1.00\n", rem);
    m = round(z * 100);
    
    printf("%d moeda(s) de R$ 0.50\n", m / 50);
    m = m % 50;

    printf("%d moeda(s) de R$ 0.25\n", m / 25);
    m = m % 25;

    printf("%d moeda(s) de R$ 0.10\n", m / 10);
    m = m % 10;

    printf("%d moeda(s) de R$ 0.05\n", m / 5);
    m = m % 5;

    printf("%d moeda(s) de R$ 0.01\n", m / 1);

    return 0;
}
