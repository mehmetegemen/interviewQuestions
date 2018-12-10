/*
Find the factorial of given number
*/

#include <stdio.h>

main()
{
    int a, b, c = 1;
    scanf("%d", &a);
    for(b=0;b<a;b++){
        c = ( a - b ) * c;
    }
    printf("%d", c);
}
