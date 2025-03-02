/**
 *  author:  anikbhai96
 *  created: 25.07.2025
**/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int S, s, m, h;
    scanf("%d", &S);
    h = S / 3600;
    m = (S % 3600) / 60;
    s = (S % 3600) % 60;
    
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
