/**
 *  author:  anikbhai96
 *  created: 25.07.2025
**/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a,b,c,ab,abc;
    scanf("%d %d %d",&a, &b, &c);
    ab = (a + b + abs(a - b)) / 2;
    abc = (ab + c + abs(ab - c)) / 2;
    printf("%d eh o maior\n", abc);

    return 0;
}
