/**
 *  author:  anikbhai96
 *  created: 25.07.2025
**/
#include <stdio.h>

int main(int argc, char *argv[])
{
    char name;
    double salary, sales, total;
    scanf("%s", &name);
    scanf("%lf %lf", &salary, &sales);
    total = salary + (0.15 * sales);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
