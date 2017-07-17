#include "calculate.h"
int createcubetable(int cubesize, int ***p_p_p_timescube)
{
    for ( int i = 0; i < cubesize +1; i++ )
    {
        for (int j=0; j< cubesize +1; j++)
        {
            for(int k=0;k<cubesize +1; k++)
            {
                p_p_p_timescube[i][j][k] = i*j*k ;
            }
        }
    }
    return 0 ;
}
