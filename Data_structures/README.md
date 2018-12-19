# C Questions

#### What kind of data structures C has? What amount of bits those structures have?
|Data type|Memory(bytes)|
|--|--|
|short int|2|
|unsigned short int|2|
|unsigned int|4|
|int|4|
|long int|4|
|unsigned long int|4|
|long long int|8|
|unsigned long long int|8|
|signed char|1|
|unsigned|1|
|float|4|
|double|8|
|long double|12|

#### 0100 0001 0101 0100 0100 0001. What is the equivalent of these set of bits in ASCII, Binary Coded Decimal, 16-Bits and 24-Bits data structures?

|Data Structure|Result|
|--|--|
|24-Bit|1 + (64 x 1) + (1.024 x 1) + (4.096 x 1) + (16.384 x 1) + (65.536 x 1) + (4.194.304 x 1)|
|16-Bit|1 + (64 x 1) **and** 1 + (64 x 1) + (1.024 x 1) + (4.096 x 1) + (16.384 x 1)|
|BCD|415.441|
|ASCII| 65 and 84 and 65 = "ATA"|

#### What is the range of upper case letters and lower case letter in ASCII Table ?
|Case|Range|
|--|--|
|Upper Case|65-90|
|Lower Case|97-122|

So lower case letters' values are bigger than upper case letters' values.

#### Find the running time of the code below

```
1 float findLeast(float A[]){
2     float least;
3     int k;
4 
5     least = A[0];
6 
7     for(k=1; k<n; k++)
8         if(A[k]<least)
9             least = A[k];
10    return least
11 }
```
There is one assignment operation on the line 5, which counts as 1.

There is a loop on the line 7. k=1 is one operation, k<n is n-1 and k++ as a post increment is n operations. Total it is 2n operations.

On the line 8 condition will be checked n-1 time.

Assuming the worst case scenerio - where every condition meets the expectation - line 9 is n-1 operations.

Function returns for one time, so it is one operation.

|Lines|Operations|
|--|--|
|5|1|
|7|2n|
|8|n-1|
|9|n-1|
|10|1|
|Total|4n|

#### Are recursive functions memory heavy?

Yes. Recursive functions may have nested return calls and this increases stack's usage. Also recursive functions easily add up and may have huge memory needs.

#### Find the memory complexity of the below program

```
unsigned int fibonnaci(unsigned int n) {
    unsigned int fib;
    if( n > 1 ) {
        fib = fibonacci(n-1)+fibonacci(n-2);
        return fib;
    } else if ( n==1 ) return 1;
    else return 0;
}
```

Program has only unsigned ints which is 4 bytes each. One as an argument and one as a local variable. So function allocates size of two unsigned ints per call. This means 2 + 2 every recurive call since there are two function calls assigned to `fib` variable. They iterate n times. Summing up, 2n + 2n times = 4n.

#### Give the name of six sorting algorithms

Merge sort, Quick sort, Bubble sort, insertion sort, selection sort, heap sort

## Source

- Data Structures and Algorithms << Rifat Çölkesen Ph.D
