/*
Write a program to find armstrong numbers between 1 and 500. If sum of cubes of
each digit of the number is equal to itself, then the number is called armstrong
number. Ex: 153 -> (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)
*/

#include <stdio.h>

main()
{
    int a = 1, b, c, d, e = 1, f = 0;

    for(a;a<500;a++){
        for(b=1;b<a;b=b*10){
        /* Prints single digit
        * Ex: b = 1000 means number of thousands
        */
        c = ((a - a % b) - ( a - a % (b*10)))/b;
        // Cube of the single digit
        for(d=0;d<3;d++){
            e = c * e; // Accumulator to find cubes
        }
        // Sum of cubes
        f = f + e;
        // Reset accumulator
        e = 1;
        }
    if (f==a)
        printf("Found an armstrong number -> %d\n",f);
    f = 0; // Reset sum of cubes accumulator
    }
}