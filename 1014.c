/**
 *  author:  anikbhai96
 *  created: 25.07.2025
**/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;
    double y;
    scanf("%d %lf", &x, &y);
    printf("%.3lf km/l\n", x / y);

    return 0;
}
