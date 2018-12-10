/* according to the gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard write a program to find out what is the day on 1st january of this year. */

#include <stdio.h>

main()
{
    int a, b, c, d, e, f;
    scanf("%d", &a);
    /* 01/01/1900 is Monday */
    b = a - 1900; // Calculate year difference
    c = b % 4; // Calculate the total years with 366 Days
    d = b - c; // Subtract Total overlaping years from total years
    e = d * 365 + c * 366; // Total days
    f = e % 7; // Which day of the week
    if(f==0){
        printf("Monday");    
    } else if(f==1){
        printf("Tuesday");    
    } else if(f==2) {
        printf("Wednesday");    
    } else if (f==3) {
        printf("Thursday");    
    } else if (f==4) {
        printf("Friday");    
    } else if (f==5) {
        printf("Saturday");    
    } else if (f == 6) {
        printf("Sunday");    
    }
}