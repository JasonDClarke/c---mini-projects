#include <iostream>

using namespace std;
void reversearray(int anarray[], int arraysize);

int main()
{
    int arraysize=5;
    int anarray[ arraysize ];
    for (int i=0; i<arraysize; i++) {
        anarray[i]=i;
        cout << anarray[i];
    }
reversearray(anarray, arraysize);
cout << " -> ";
 for (int i=0; i<arraysize; i++) {
        cout << anarray[i];
    }
}

void reversearray(int anarray[], int arraysize) {
for(int i=0; i<arraysize/2;i++) {
int temp=anarray[i];
anarray[i]=anarray[arraysize-i-1];
anarray[arraysize-i-1]=temp;
}
}

