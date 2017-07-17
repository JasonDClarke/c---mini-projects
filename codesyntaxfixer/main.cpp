#include <stdio.h>
void balanceforward(char open, char close);
main()
{
 balanceforward('(',')');
 return 0;
}

void balanceforward(char open, char close)
{
        int c;
        float state;
        state = 0;
    while ((c = getchar()) != EOF)
        {putchar(c);
       if (c == open) {
        if (state>=0)
            ++state;
        else
            state =1;
       }
       else if (c == close) {
            --state;
            if (state < 0)
               printf("UNBALANCED");
       }
       }
}
/* do same backwards through code, and with all balance requiring elements*/
