#include <iostream>

using namespace std;

int add(int, int);
int subtract(int x, int y);
int multiply(int x,int y);
int divide(int x, int y);
int power(int x, int y) ;
int xmody(int x, int y);
bool areyousureyn();

int main()
{
    cout << "Hello world!" << endl;
    cout << add(2,3) << "\n";
    cout << subtract(2,3) << "\n";
    cout << multiply(2,3) << "\n";
    cout << divide(2,3) << "\n";
    cout << power(3,6) << "\n";
    cout << xmody(7,3) << "\n";
    areyousureyn();
    return 0;
}

int add(int x, int y){
return x+y;
}

int subtract(int x, int y){
return x-y;
}

int multiply(int x,int y){
return x*y;
}

int divide(int x, int y) {
return x/y;
}

int power(int x,int y) {
    int m=1;
    for(int n=0;n<y;n++) {
    m=x*m;}
    return m;
}
int xmody(int x, int y) {
    return x%y;
}

bool areyousureyn() {
    enum yesorno {no, yes};
    enum TRUEORFALSE {FALSE, TRUE};
    bool sufficientvalidinputgiven = FALSE;
    do  {
    cout << "Are you sure? y/n\n";
    char yorn='\0';
    cin >> yorn;
    if (yorn == 'y') {
        cout << "You're sure? OK!";
        sufficientvalidinputgiven=TRUE;
        return yes;
    }
    else if (yorn == 'n') {
        cout << "You're not sure... Let's go back then";
        sufficientvalidinputgiven=TRUE;
        return no;
    }
    }
    while (sufficientvalidinputgiven == FALSE);
}
