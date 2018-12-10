/*
Find the digi
*/

#include <stdio.h>
#include <math.h>

// Way 1

main()
{
    /*Find the reverse of the given number without arrays*/
    int a = 25448, b,c, res, e,f,g,h;
    /*Ex: 25448*/
    //scanf("%d", &a);
    for(b=1;b<a;b=b*10){
        /* Prints single digit
        * Ex: b = 1000 means number of thousands
        */
        c = ((a - a % b) - ( a - a % (b*10)))/b;
        /*find digit place
        * Ex: 1,10,100,...
        */
        e = ((a - a % b) - ( a - a % (b*10)))/c;
    }
    printf("%g",log10(e)+1);
}

// Way 2

#include <stdio.h>
#include <math.h>

main()
{
    int a, b=1;
    scanf("%d", &a);
    while(b<a){
        b = b * 10;
    }
    b = b / 10;
    b = log10(b) + 1;
    printf("%d",b);
    
}