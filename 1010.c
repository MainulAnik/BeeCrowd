/**
 *  author:  anikbhai96
 *  created: 25.07.2025
**/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int code_p1, unit_p1, code_p2, unit_p2;
    double price_p1, price_p2;
    scanf("%d %d %lf %d %d %lf", &code_p1, &unit_p1, &price_p1, &code_p2, &unit_p2, &price_p2);
    printf("VALOR A PAGAR: R$ %.2lf\n", ((unit_p1 * price_p1) + (unit_p2 * price_p2)));

    return 0;
}
