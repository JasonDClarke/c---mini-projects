#include "array3d.h"

int allocateArray3d( int iCubeSize, int ****array )
{
   *p_p_p_timescube = new int**[ cubesize +1 ];
    for ( int i = 0; i < cubesize +1; i++ )
    {
        *p_p_p_timescube[ i ] = new int*[ cubesize +1 ];
        for (int j=0; j< cubesize +1; j++)
        {
            *p_p_p_timescube[ i ][ j ] = new int[ cubesize +1];
            for(int k=0;k<cubesize +1; k++)
            {
                *p_p_p_timescube[i][j][k] = 100*i+10*j+k ;
            }
        }
    }
    return 0 ;
}

int freeArray3d(int iCubeSize, int ***array)
{
    for ( int i = 0; i < cubesize +1; i++ )
    {
        for (int j=0; j< cubesize +1; j++)
        {
           delete [] p_p_p_timescube[ i ][ j ] ;
        }
        delete [] p_p_p_timescube[ i ] ;
    }
    delete [] p_p_p_timescube ;

    return 0 ;

