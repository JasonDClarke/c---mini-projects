#include <iostream>
#include "calculate.h"
#include "array3d.h"

using namespace std;
//createtable
void labeltoprow(int tablesize, int **p_p_timestable);
void labelleftcolumn(int tablesize, int **p_p_timestable);

int main()
{
    int iResult = 0 ;
    int cubesize = 1;
    cout << "Enter cubesize: ";
    cin >> cubesize;
    int ***p_p_p_timescube;

    iResult = allocateArray3d( cubesize, &p_p_p_timescube ) ;
    iResult = createcubetable( cubesize, p_p_p_timescube ) ;
    //iResult = printcubetable( cubesize, p_p_p_timescube ) ;
    iResult = freeArray3d( cubesize, p_p_p_timescube ) ;

}
/*
//------

printlabelledtable(tablesize, p_p_timestable);
memfree_timestable(tablesize, p_p_timestable);
}

void printlabelledtable(int tablesize, int **p_p_timestable) {
for (int i=0; i<tablesize +1; i++)
{
        cout << "\n";
    for (int j=0; j<tablesize +1; j++)
    {
        cout << p_p_timestable[ i ][ j ] << "\t";
    }
}
}

void labeltoprow(int tablesize, int **p_p_timestable) {
for (int j=1; j<tablesize +1; j++)
{
    p_p_timestable[ 0 ][ j ]= j;
}
}

void labelleftcolumn(int tablesize, int **p_p_timestable) {
for (int i=1; i<tablesize +1; i++)
{
    p_p_timestable[ i ][ 0 ]= i;
}
}

void fillmultiplications(int tablesize, int **p_p_timestable) {
for (int i=1; i<tablesize +1; i++)
{
    for (int j=1; j<tablesize +1; j++)
    {
        p_p_timestable[ i ][ j ]= i*j;
    }
}
}

void memfree_timestable(int tablesize, int **p_p_timestable) {
for (int i=0; i<tablesize +1; i++)
{
       delete [] p_p_timestable[ i ];
}
delete [] p_p_timestable;
}

void createtable(int tablesize, int **p_p_timestable) {
p_p_timestable[ 0 ][ 0 ] = 0;
labelleftcolumn(tablesize, p_p_timestable);
labeltoprow(tablesize, p_p_timestable);
fillmultiplications(tablesize, p_p_timestable);
}
*/
