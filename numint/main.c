#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double Integrand(int a, int n, double x);
double NumIntegrate(double startinterval, double endinterval, int subintervals, double (*fnptr)(int, int, double), int n,int a);

int main ( int argc, char *argv[] )
{
    /*open file for writing */
    FILE *studnum_assign4;
    char fname[]="1205556_assign4.out";
    studnum_assign4 = fopen(fname, "w");
    /*check file has opened*/
    if(studnum_assign4 == (FILE*) NULL)
    {
    printf("Can not open file %s\n", fname);
    exit(EXIT_FAILURE);
    }
    double a=0; /*double for convenience*/
    /*take a from command line*/
    int validInput;
    validInput = (argc = 2);
    validInput = validInput && sscanf(argv[1], "%lf", &a);
    fprintf(studnum_assign4, "a=%d\n",(int)a);
    /*analytical value of y1 for arbitrary a*/
    double y1=1-(a*(log((a+1)/a)));
    double yn=y1;
    int n=1;
    fprintf(studnum_assign4, "For n=%d, Integral=%lf\n\n",1,yn);
    /*analytical value by recursive relation for n=2 to n=10*/
    for (n=2;n<=10;n++){
        yn=((1/(double)n)-(a*yn));
        fprintf(studnum_assign4, "For n=%d, Integral=%lf\n",n, yn);
    }
    fprintf(studnum_assign4, "\n");
    /*numerical integration*/
    double (*fnptr)(int, int, double);
    fnptr = Integrand;
    for (n=2;n<=10;n++) {
        fprintf(studnum_assign4, "For n=%d, Numerical Integral=%lf\n",n,NumIntegrate(0, 1, 10000, fnptr,n,a));
    }
    /*file clear-up*/
    fclose(fname);
    return 0;
}

double Integrand(int a, int n, double x)
{
    /*evaluates x^n/(x+a) for given x, a */
    return pow(x,(double)n)/(x+(double)a);
}

double NumIntegrate(double startinterval, double endinterval, int nosubintervals, double (*fnptr)(int, int, double), int n, int a)
{
double widthpartition=(endinterval-startinterval)/nosubintervals;
double result=0;
int i;
for (i=0;i<nosubintervals;i++)
{
    result = result + (*fnptr)(a,n,startinterval+(i*widthpartition))*widthpartition;
}
return result;
}
