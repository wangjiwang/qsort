#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "msort.h"

int main(int argc, char* argv[])
{
    int i;
    double a[] = {-2.1, 0.2, 5.3, 1.4, 10.1, 8.1, 5.1, 4.1, 3.3, 9.1};
    int len1 = sizeof(a) / sizeof(a[0]);
    printf("before sort:\n");
    for ( i = 0; i < len1; ++i) {
        printf( "%.2f ", a[i]);
    }
    printf("\n");

    Qsort(a, 0, len1 - 1, sizeof(a[0]), cmp_double);
    printf( "after sort:\n");
    for ( i = 0; i < len1; ++i) {
        printf("%.2f ", a[i]);
    }
    printf( "\n");


    const char* b[] = {"what", "chenwei", "skyline", "wel", "dmr"};
    int len2 = sizeof(b) / sizeof(b[0]);
    printf("before sort:\n");
    for ( i = 0; i < len2; ++i) {
        printf("%s-->", b[i]);
    }
    printf( "\n");

    Qsort(b, 0, len2 - 1, sizeof(b[0]), cmp_string);
    printf( "after sort:\n");
    for ( i = 0; i < len2; ++i) {
        printf("%s-->", b[i]);
    }
    printf( "\n");
    return 0;
}
