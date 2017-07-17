#include <iostream>
#include <stdio.h>

/* count characters in input; 2nd version */
main()
{
    double nc;
    double nd;
    nd=0;
    nc = getchar();
    while (nc != EOF) {
        ++nd;
        nc=getchar();
    }
    printf("%.0f/n characters", nd);
}
