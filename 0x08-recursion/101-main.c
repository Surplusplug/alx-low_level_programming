#include "main.h"
#include <stdio.h>

/* Declaration of the wildcmp function */
int wildcmp(const char *s1, const char *s2);

int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    /* ... rest of the code */
    return (0);
}

