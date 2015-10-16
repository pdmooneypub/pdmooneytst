
#include <stdio.h>

// calculate Fibonacci numbers
int main( int argc, char *argv[] ) {

    unsigned short tot=0, indx=0;
    unsigned long fib1=0, fib2=1, sum;

    tot=0;

    // argument checking
    if ( argc <= 1 ) {
        printf("usage: %s num\n", argv[0] );
        puts("  where \'num\' is the number of Fibonacci numbers to calculate.");
        return 0;
    }
    // how many to calculate
    tot = atoi( argv[1] );
    for ( indx = 0; indx < tot; indx++ ) {
        sum=fib1+fib2;
        fib1=fib2;
        fib2=sum;
        printf("[%u] %lu, 0x%lX\n",indx+1,fib1,fib1);
        // if sum overflowed, break out of loop
        if ( fib2 < fib1 ) {
            printf( "%s: overflow\n", argv[0] );
            break;
        }
    }
    return 0;
}
