/**
 *  author:  anikbhai96
 *  created: 25.07.2025
**/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int Y, y, m, d;
    scanf("%d", &Y);
    y = Y / 365;
    m = (Y % 365) / 30;
    d = (Y % 365) % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);

    return 0;
}
