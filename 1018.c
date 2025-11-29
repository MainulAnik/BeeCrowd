/**
 *  author:  anikbhai96
 *  created: 25.07.2025
**/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int x, rem;
    
    scanf("%d", &x);
    
    printf("%d\n", x);
    printf("%d nota(s) de R$ 100,00\n", x / 100);
    rem = x % 100;
    
    printf("%d nota(s) de R$ 50,00\n", rem / 50);
    rem = rem % 50;
    
    printf("%d nota(s) de R$ 20,00\n", rem / 20);
    rem = rem % 20;
    
    printf("%d nota(s) de R$ 10,00\n", rem / 10);
    rem = rem % 10;
    
    printf("%d nota(s) de R$ 5,00\n", rem / 5);
    rem = rem % 5;
    
    printf("%d nota(s) de R$ 2,00\n", rem / 2);
    rem = rem % 2;
    
    printf("%d nota(s) de R$ 1,00\n", rem);

    return 0;
}
