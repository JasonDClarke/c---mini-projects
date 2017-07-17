#include <iostream>
using namespace std;
int pow (int x, int tothepowery)
{
    if (tothepowery >= 1){
        return x*pow(x,tothepowery-1);
        }
    else if (tothepowery==0){
        return 1;
    }
    else {
        return 0;
    }
}
int main ()
{
cout << pow( 2,3 ); // First function call, so it starts at one
}
