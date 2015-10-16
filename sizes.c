
#include <stdio.h>
#include <stdbool.h>

// display the sizes of various types
int main( int argc, char *argv[] ) {
    char *p;
   
    puts("sizes:");
    printf("       bool: %lu\n", sizeof(bool) );
    printf("       char: %lu\n", sizeof(char) );
    printf("      short: %lu\n", sizeof(short) );
    printf("        int: %lu\n", sizeof(int) );
    printf("       long: %lu\n", sizeof(long) );
    printf("  long long: %lu\n", sizeof(long long) );
    printf("      float: %lu\n", sizeof(float) );
    printf("     double: %lu\n", sizeof(double) );
    printf("long double: %lu\n", sizeof(long double) );
    printf("      *char: %lu\n", sizeof(p) );
}
