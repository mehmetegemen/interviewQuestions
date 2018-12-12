/*Write a program with function power(a, b) which finds
a raised to b*/

#include <stdio.h>

float power(a, b)
int a; int b;{
    int c;
    float p = 1;
    
    if(b == 0)
        return(1);
    // Negative powers
    if (b < 0)
        for(c = 1;c <= (b * -1); c++)
            p = p * (1.0f/a); // Division must be with a float, otherwise p is 0
    // Positive powers
    if (b > 0)
        for(c = 1;c <= b; c++)
            p = p * a;
            
    return(p);
}

main() {
    int a, b;
    float p;
    scanf("%d", &a);
    printf(" raised to ");
    scanf("%d", &b);
    
    p = power(a, b);
    printf("\n result is %g", p);
}
