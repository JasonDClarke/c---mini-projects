#include "array3d.h"

int allocateArray3d( int iCubeSize, int ****p_p_p_timescube )
{
   *p_p_p_timescube = new int**[ iCubeSize +1 ];
    for ( int i = 0; i < iCubeSize +1; i++ )
    {
        (*p_p_p_timescube)[ i ] = new int*[ iCubeSize +1 ];
        for (int j=0; j< iCubeSize +1; j++)
        {
            (*p_p_p_timescube)[ i ][ j ] = new int[ iCubeSize +1];
            for(int k=0;k<iCubeSize +1; k++)
            {
                (*p_p_p_timescube)[i][j][k] = 100*i+10*j+k ;
            }
        }
    }
    return 0 ;
}

int freeArray3d(int iCubeSize, int ***p_p_p_timescube)
{
    for ( int i = 0; i < iCubeSize +1; i++ )
    {
        for (int j=0; j< iCubeSize +1; j++)
        {
           delete [] p_p_p_timescube[ i ][ j ] ;
        }
        delete [] p_p_p_timescube[ i ] ;
    }
    delete [] p_p_p_timescube ;

    return 0 ;
}

