/*
 * All these ranges are different sometimes
 * because these depend on computer systems
 *
 */

#include <stdio.h>
#include <limits.h>

int main() {

    printf("CHAR_MIN  :  %d\n", CHAR_MIN);
    printf("CHAR_MAX  :  %d\n", CHAR_MAX);
    
    printf("SHORT_MIN  :  %d\n", SHRT_MIN);
    printf("SHORT_MAX  :  %d\n", SHRT_MAX);

    printf("INT_MIN  :  %d\n", INT_MIN);
    printf("INT_MAX  :  %d\n", INT_MAX);

    printf("LONG_MIN  :  %ld\n", LONG_MIN);
    printf("LONG_MAX  :  %ld\n", LONG_MAX);

    printf("UNSIGNED_CHAR_MAX  :  %d\n", UCHAR_MAX);
    printf("UNSIGNED_SHORT_MAX  :  %d\n", USHRT_MAX);
    printf("UNSIGNED_INT_MAX  :  %u\n", UINT_MAX);
    printf("UNSIGNED_LONG_MAX  :  %lu\n", ULONG_MAX);

    return 0;
}

/*

Warning :- Your device may produce different result

Output :-

CHAR_MIN  :  -128
CHAR_MAX  :  127
SHORT_MIN  :  -32768
SHORT_MAX  :  32767
INT_MIN  :  -2147483648
INT_MAX  :  2147483647
LONG_MIN  :  -2147483648
LONG_MAX  :  2147483647
UNSIGNED_CHAR_MAX  :  255
UNSIGNED_SHORT_MAX  :  65535
UNSIGNED_INT_MAX  :  4294967295
UNSIGNED_LONG_MAX  :  4294967295

*/