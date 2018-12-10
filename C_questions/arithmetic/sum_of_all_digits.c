#include <stdio.h>

main()
{
    int a, b, c, res;
    /*Ex: 25448*/
    scanf("%d", &a);
    for(b=1;b<a;b=b*10){
        /* Prints single digit in reverse order
	* starts from 1s
        * Ex: when b = 1000 c is number of thousands
        */
        c = ((a - a % b) - ( a - a % (b*10)))/b;
        res = res + c;
    }
    printf("%d",res);
}