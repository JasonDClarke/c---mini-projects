#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

double determinant(double mtx[10][10], int matrixsize)
{
/*does determinant stuff*/
double det=0;
int i,j,k;
if (matrixsize > 1)
{
for (i=0;i<matrixsize;i++)
{
    /* 2*(i%2)-1 is equivalent to (-1)^n for integer n*/
    double multiplyterm;
    multiplyterm = (2*(i%2)-1)*mtx[0][i];
    for (j=0;j<matrixsize-1;j++)
        for (k=0;k<matrixsize;k++)
    {
        if (j<i || k<i)
        {
        mtx[j][k]=mtx[j][k];
        }
        else if (j>i && k>i)
        {
        mtx[j][k]=mtx[j-1][k-1];
        }
    }
    det = det + multiplyterm*determinant(mtx, matrixsize-1);
}
}
else if (matrixsize == 1)
{
   return mtx[0][0];
}
return det;
}

