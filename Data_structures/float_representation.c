
/* Find a normalized(between 0 and 1) floating point number's binary representation */

#include <stdio.h>

int main()
{
    int b, e[23], d, g[8], h=128, m=0, f;
    float a, c;
    printf("Enter float: ");
    scanf("%g", &a);
    if(a<0 & a>1) return 1; // Exit with failure
    // Get the number after decimal point
    c = modf(a, &d);
    // a floating point number is 32-bits
    // 23 bits for number, 8 bits for exponent, 1 bit for signed
    // This means 23 operations to find bits
    printf("\n Binary representation of the number is: ");
    for(b=0;b<23;b++){
        c *= 2;
        if ( c >= 1) {
            e[b] = 1;
            c = c - 1;
        }
        else {
            e[b] = 0;
        }
        printf("%d", e[b]);
    };
}