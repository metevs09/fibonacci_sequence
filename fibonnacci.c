#include<stdio.h>

// The Fibonacci sequence is the famous sequence defined as X(n)= X_n-1 +X_n-2 where 1,1,2,3,5,8,13,21... n is the number of elements in the array.

int main(){

    // We define the first value and the 2nd value of the Fibonacci sequence, the n.th value, and the loop variables.

    int first_n = 0;
    unsigned long  seconds_n = 1;
    long  n;
    int i;

    printf("Enter the value of n you want to calculate:");
    scanf("%ld", &n);

    // Since the first value of the Fibonacci sequence is constan, we print the first value to the screen so that the algorithm can work properly.
           
    printf("F(1) = %d\n",1);
    printf("\n");

    // Algorithm of the Fibonacci sequence

    for (i = 1; i < n; i++)
    {
        int fib = seconds_n;
        seconds_n += first_n;
        first_n = fib;
        printf("F(%lu) = ",i+1);
        printf("%lu\n\n", seconds_n);
    }
    
    return 0;
}