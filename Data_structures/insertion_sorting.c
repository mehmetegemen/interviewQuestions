/*
Insertion Sorting.
E.g. :

[4,3,2,1]
[1,4,3,2]
[1,2,4,3]
[1,2,3,4]
*/

#include <stdio.h>

int main()
{
    // Create a bug-prone array for unexpected results with 0s and same numbers
    int A[5] = {6,5,0,6,4}, i, k, h, j;
    
    for(i=0;i<5;i++) {
        for(k=i;k+1>0;k--) {
            if(A[k]<A[k-1]) {
                h = A[k];
                A[k] = A[k-1];
                A[k-1] = h;
            }
        }
    }
    
    for(j=0;j<5;j++){
        printf("%d", A[j]);
    }
    
    return 0;
}
