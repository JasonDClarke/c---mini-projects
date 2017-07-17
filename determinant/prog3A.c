#include <stdio.h>
#include <stdlib.h>
/*value of maximum sized matrix that can be read*/
int maxmatrix=4;

int matrixlength(FILE *matrix);
double determinant(double mtx[maxmatrix][maxmatrix], int matrixsize);
void printsolution(double mtx[maxmatrix][maxmatrix], double det, double matrixsize);

/* computes and prints determinant for square matrix with elements
written as floats separated by spaces in file matrix.dat. Requires
'\n' to follow last element of the first line of the matrix in the file
in order to compute the size of the matrix. Does not check form of file
is correct. */

int main(int argc, char* argv[])
{
/* open file for reading */
FILE *matrix;
char fname[]="matrix.dat";
matrix = fopen(fname, "r");
/*check file has opened */
if(matrix == (FILE*) NULL)
    {
    printf("Can not open file %s\n", fname);
    exit(EXIT_FAILURE);
    }
/*finds size of matrix*/
int matrixsize = matrixlength(matrix);
/*reads file into top left square of maxmatrix*maxmatrix 2D array*/
double mtx[maxmatrix][maxmatrix];
int i, j;
for (i=0;i<matrixsize;i++)
    {
    for (j=0;j<matrixsize;j++)
        {
    fscanf(matrix, "%lf ", &mtx[i][j]);
        }
    }
/*determinant computed and assigned*/
double det = determinant(mtx, matrixsize);
/*prints in required form */
printsolution(mtx, det, matrixsize);
/*closes files used*/
fclose(matrix);
        return(0);
}

int matrixlength(FILE *matrix)
{
/* find size (length) of matrix by counting doubles then checking if a
newline starts. Only need to check first line since matrix is square.
Only works if \n follows last double on first line (check especially for
1 element matrix). Also resets fscanf to beginning.*/
double temp1=0;
char temp2=0;
int endline = 0;
int counter=0;
int matrixsize=0;
while (endline == 0)
    {
    fscanf(matrix, "%lf", &temp1);
    counter++;
    fscanf(matrix, "%c", &temp2);
    if (temp2 == '\n')
        {
        endline =1;
        matrixsize=counter;
        fseek(matrix, 0, SEEK_SET);/* reset fscanf to beginning */
        }
    }
return matrixsize;
}

double determinant(double mtx[maxmatrix][maxmatrix], int matrixsize)
{
/*takes in a maxmatrix*maxmatrix array and considers the matrixsize*matrixsize square in the
 top-left hand of the array as a matrix, computes its determinant. Note that
 this means only matrices up to size maxmatrix*maxmatrix can be computed */
double det=0;
int i,j,k;
double mtx1[maxmatrix][maxmatrix];
if (matrixsize > 1)
    {
    for (i=0;i<matrixsize;i++)
        {
        /* 2*((i+1)%2)-1 is equivalent to (-1)^i for integer i*/
        double multiplyterm;
        multiplyterm = (2*((i+1)%2)-1)*mtx[0][i];
        for (j=1;j<matrixsize;j++)
            {
            for (k=0;k<matrixsize;k++)
                {
                if (k<i)
                    {
                    mtx1[j-1][k]=mtx[j][k];
                    }
                else if (k>i)
                    {
                    mtx1[j-1][k-1]=mtx[j][k];
                    }
                }
            }
    double minor = determinant(mtx1, matrixsize-1);
    det = det + multiplyterm*minor;
        }
    }
else if (matrixsize == 1)
    {
    return mtx[0][0];
    }
return det;
}

void printsolution(double mtx[maxmatrix][maxmatrix], double det, double matrixsize)
{
/*prints determinant in required form*/
if (matrixsize==1)
    {
    printf("\n | %lf | ==== %lf\n", mtx[0][0], det);
    }
else if (matrixsize >1)
    {
    int i,j;
    for (i=0;i<matrixsize;i++)
        {
        if (i==0)
            {
            printf("\n | ",det);
            }
        else if (i==1)
            {
            printf("|    ==== %lf\n | ", det);
            }
        else
            {
            printf("|\n | ");
            }
        for (j=0;j<matrixsize;j++)
            {
            printf("%lf ", mtx[i][j]);
            }
        }
printf("|\n");
    }
}
