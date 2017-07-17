#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
void guessgame ();
void guessgamecomp ();
int randRange (int low, int high);
int Options();

int main ()
{
while (1){
        int Choice = Options();
        if (Choice == 0) {
            break;
        }
        else if (Choice == 1) {
    guessgame();
        }
        else if (Choice == 2) {
    guessgamecomp();
        }
}
return 0;
}

void guessgame () {
    cout << "Guessing game!\n";
srand( time( NULL ) );
int guess=0;
int low=1;
cout << "Choose a lower bound:\n";
cin >> low;
int high=100;
cout << "Choose an upper bound:\n";
cin >> high;
int number = randRange( low, high );
cout << "Now GUESS!!\n";
while (guess != number) {
cin >> guess;
if (guess > number){
    cout << "Lower!\n";
     }
else if (guess < number) {
    cout << "Higher!\n";
    }
else if (guess == number) {
    cout << "\nYou Win!";
}
}
}

void guessgamecomp () {
    cout << "Guessing game!\n";
srand( time( NULL ) );

int turnno=1;
int low=1;
cout << "Choose a lower bound:\n";
cin >> low;
int high=100;
cout << "Choose an upper bound:\n";
cin >> high;
cout << "Now GUESS!!\n";
int guess=(high + low)/2;
int number = randRange( low, high );
while (guess != number) {
turnno++;
int a=pow(2,turnno);
if (guess > number){
    cout << guess << "\n";
    cout << "Lower!\n";
    guess = (guess - (max(((high - low +1)/(a)), 1)));
     }
else if (guess < number) {
    cout << guess << "\n";
    cout << "Higher!\n";
    guess = (guess + (max(((high - low +1)/(a)), 1)));
    }
}
    cout << guess << "\n";
    cout << "You Win!";
}


int randRange (int low, int high)
{
// we get a random number, get it to be between 0 and the number
// of values in our range, then add the lowest possible value
return rand() % ( high - low + 1 ) + low;
}

int Options() {
    enum options {quit, play, computerplay};
    enum TRUEORFALSE {FALSE, TRUE};
    bool sufficientvalidinputgiven = FALSE;
    do  {
    cout << "\nPlay again? 0: Quit, 1: play, 2: Let the computer play.\n";
    int choice=1;
    cin >> choice;
    if (choice == 0) {
        cout << "Miserable sod.\n";
        sufficientvalidinputgiven=TRUE;
        return quit;
    }
    else if (choice == 1) {
        cout << "Let's play!\n";
        sufficientvalidinputgiven=TRUE;
        return play;
    }
        else if (choice == 2) {
        cout << "Lazy...\n";
        sufficientvalidinputgiven=TRUE;
        return computerplay;
    }
    }
    while (sufficientvalidinputgiven == FALSE);
}
