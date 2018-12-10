#include <stdio.h>

main()
{
    /*Find the reverse of the given number without arrays*/
    int a, b=1,c, res=0, e,f,g,h;
    /*Ex: 25448*/
    scanf("%d", &a);
    while(b<a){
        b = b * 10;
    }
    b = b / 10;
    f=b;
    for(b=1;b<a;b=b*10){
        c = ((a - a % b) - ( a - a % (b*10)))/b;
        e = c * (f / b);
        printf("%d\n",e);
        res = res + e;
    }
    printf("%d", res);
}