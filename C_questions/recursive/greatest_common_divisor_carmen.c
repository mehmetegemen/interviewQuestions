/* Find greatest common divisor by Carmen's theorem.
Carmen's theorem is gcd(a,b) = gcd(b,a % b)
*/


#include <stdio.h>

gcd(int a, int b) {
    if(b==0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int h;
    h = gcd(6,9);
    printf("%i", h);
    return 0;
}
