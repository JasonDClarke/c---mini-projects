#include <iostream>

using namespace std;

void displayArray (int array[], int size);
void dispmin(int array[], int size);
void dispmax(int array[], int size);
void dispavg(int array[], int size);

int main()
{
    int arraysize;
    cout << "Enter size of array: ";
    cin >> arraysize;
    int anarray[arraysize];
for (int i=0;i<arraysize;i++) {
    cout << "Enter value " << i <<": ";
    int value=0;
    cin >> value;
    anarray[ i ] = value;
}
cout << "\nMin: ";
dispmin(anarray,arraysize);
cout << "Max: ";
dispmax(anarray,arraysize);
cout << "Average: ";
dispavg(anarray,arraysize);
displayArray(anarray,arraysize);
}

void displayArray (int array[], int size)
{
	cout << "{";
	for ( int i = 0; i < size; i++ )
	{
		// you'll see this pattern a lot for nicely formatting
		// lists--check if we're past the first element, and
		// if so, append a comma
		if ( i != 0 )
		{
			cout << ", ";
		}
		cout << array[ i ];
	}
	cout << "}";
}

void dispmin(int array[], int size) {
    int currentmin = array [ 0 ];
for (int i=0;i<size;i++) {
   if (array[ i ] < currentmin) {
    currentmin = array[ i ];
   }
}
   cout << currentmin << "\n";
}

void dispmax(int array[], int size) {
    int currentmax = array [ 0 ];
for (int i=0;i<size;i++) {
   if (array[ i ] > currentmax) {
    currentmax = array[ i ];
   }
}
   cout << currentmax << "\n";
}

void dispavg(int array[], int size) {
    double currentsum = 0;
for (int i=0;i<size;i++) {
currentsum = currentsum + array[ i ];
}
   cout << (currentsum/size) << "\n";
}
