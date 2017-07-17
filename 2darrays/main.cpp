#include <iostream>
using namespace std;
int main ()
{
int array[ 8 ][ 8 ]; // Declares an array that looks like a chessboard
int i = 0;
for ( int j = 0; j < 8; j++ )
    array[ i ][ j ] = 0;
    //-----------------------------
int j = 0;
for ( int i = 0; i < 8; i++ )
    array[ i ][ j ] = 0;
    //-----------------------------
array[ 1 ][ 0 ] =1;
    //-----------------------------
for ( int i = 1; i < 8; i++ )
{
for ( int j = 1; j < 8; j++ )
{
array[ i ][ j ] = array[ i ][ j-1 ] + array[ i-1 ][ j-1 ]; // Set each element to a value
}
}
cout << "Pascal's Triangle:\n";
for ( int i = 0; i < 8; i++ )
{
    cout << "\n";
for ( int j = 0; j < 8; j++ )
{
cout << array[ i ][ j ] <<"\t";
}
}
}
