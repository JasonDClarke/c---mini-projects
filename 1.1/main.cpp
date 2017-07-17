#include <iostream>

using namespace std;
int main() {
int numberofbottles;
cout << "On a scale of 0 to 10000, how much time do you have to burn?\n";
cin >> numberofbottles;
if (numberofbottles >= 10000)
    cout << "In 10,000 hours, you can become an expert in a chosen field. Why not go and become the Pavarotti of the Organ?";
else while(numberofbottles>=3)
    {cout << "There were " << numberofbottles << " green bottles standing on the wall,\n";
    cout << "there were " << numberofbottles << " green bottles standing on the wall,\n";
    cout << "and if one green bottle should accidentally fall,\n";
    cout << "there'd be " << numberofbottles-1 << " green bottles standing on the wall.\n\n";
    numberofbottles--; }
while (numberofbottles == 2)
        {cout << "There were " << numberofbottles << " green bottles standing on the wall,\n";
    cout << "there were " << numberofbottles << " green bottles standing on the wall,\n";
    cout << "and if one green bottle should accidentally fall,\n";
    cout << "there'd be " << numberofbottles-1 << " green bottle standing on the wall.\n\n";
    numberofbottles--; }
while (numberofbottles == 1)
        {cout << "There was " << numberofbottles << " green bottle standing on the wall,\n";
    cout << "there was " << numberofbottles << " green bottle standing on the wall,\n";
    cout << "and if one green bottle should accidentally fall,\n";
    cout << "there'd be " << numberofbottles-1 << " green bottles standing on the wall!\n";
    break;
}
}
