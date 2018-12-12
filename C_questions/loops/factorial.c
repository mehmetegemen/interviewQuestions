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

// Way 2, Taken from Let Us C Page 190

main() {
    int a, fact;
    printf("Enter any number \n");
    scanf("%d", &a);

    fact = factorial( a );
    printf("factorial value is %d", fact);
}

factorial (int x) {
    int f = 1, i;

    for (i = x; i >= 1;i--)
        f = f * i;

    return(f);
}

// Way 3 Recursive version

main () {
    int a, fact;
    printf("Enter any number \n");
    scanf("%d", &a);

    fact = rec( a );
    printf("factorial value is %d", fact);
}

rec (int x) {
    int f;

    if (x == 1)
        return(1);
    else
        f = x * rec ( x - 1 );
    
    return(f);
}