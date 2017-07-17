#include <stdio.h>
#define IN1 1 /* inside a block comment */
#define OUT1 0 /* outside a block comment */
#define IN2 1 //inside a line comment
#define OUT2 0 //outside a line comment
main()
{
        int c, state1, state2;
        state1 = OUT1;
        state2 = OUT2;
    while ((c = getchar()) != EOF)
       {
       if (c == '/' && state1 == OUT1 && state2 == OUT2) {
        c=getchar();
            if (c == '*')
            state1 = IN1;
            else if (c == '/')
            state2 = IN2;
            else {
                putchar('/');
                putchar(c);
            }
       }
       else if (c == '*' && state1 == IN1) {
        c=getchar();
            if (c == '/') {
            state1 = OUT1;
            putchar('\n');
            }
       }
       else if (c == '\n' && state2 == IN2) {
            state2=OUT2;
            putchar('\n');
       }
       else if (c != '/' && state1 == OUT1 && state2 == OUT2)
        putchar(c);
       }
}
