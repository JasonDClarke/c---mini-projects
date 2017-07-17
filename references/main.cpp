#include <iostream>

using namespace std;

void swapp (int& left, int& right)
{
int temp = right;
right = left;
left = temp;
}

int main()
{
    int a=-6;
    int b=4;
    swapp(a,b);
    cout << a << " " << b;
    return 0;
}
