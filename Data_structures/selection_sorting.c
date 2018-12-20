/*
Selection Sorting. Pick the a member of the array
starting from beginning and incrementing 1 by 1,
find the smallest member of the remaining members
and change positions
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
    int A[5] = {6,5,0,6,4}, i, k, h, j, s, e;
    
    for(i=0;i<5;i++){
        e = A[i];
        s = A[i];
        for(k=4;k>=i;k--){
            if(A[k]<s){
                s = A[k];
                h = k;
            }
        }
        A[i] = s;
        A[h] = e;
    }
    
    for(j=0;j<5;j++){
        printf("%d", A[j]);
    }
    
    return 0;
}