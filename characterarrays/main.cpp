#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */
/* while there's another line {
if the line is longer than the previous longest, save it and its length}
    print longest line */

int getline(char line[], int maxline);
void copyx(char to[], char from[]);
/* print longest input line */
main()
{
    int len; /* current line length */
    int maxx; /* maximum length seen so far */
    char line[MAXLINE]; /*current input line */
    char longest[MAXLINE]; /*longest line saved here */

    maxx=0;
    while ((len = getline(line, MAXLINE))>0)
    if (len > maxx) {
        maxx = len;
        copyx(longest, line);
    }
    if (maxx>0) /*ie if there WAS a line at all*/
        printf("%s", longest);
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c,i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
    s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i]='\0';
    return i;
}

/* copy: copy 'from' into 'to': assume to is big enough */
void copyx(char to[], char from[])
{
    int i;

    i=0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
