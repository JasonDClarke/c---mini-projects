#include <iostream>
#include <string>

using namespace std;

struct personaldetails {
    string name;
    string address[ 4 ];
    string phonenumber;
};
personaldetails getpersonaldetails(personaldetails one) ;
void printpersonaldetails(personaldetails one);
void emptyaddressbook(personaldetails addressbook[], int booksize);
void displayall(personaldetails addressbook[], int booksize);

int main()
{
int booksize;
cout << "How many entries would you like?  ";
cin >> booksize;
cin.ignore();
personaldetails addressbook[booksize];
emptyaddressbook(addressbook, booksize);
personaldetails currentlyentering;
for (int i=0;i<booksize;i++) {
addressbook[ i ] = getpersonaldetails(currentlyentering);
}
displayall(addressbook, booksize);
    return 0;
}

personaldetails getpersonaldetails(personaldetails one) {
cout <<"Enter your Name: ";
getline(cin, one.name);
for (int i=0;i<4;++i) {
cout << "Enter Adress line " << i << ": ";
getline(cin, one.address[ i ]);
}
cout << "Enter phone number: ";
getline(cin, one.phonenumber);
return one;
}

void printpersonaldetails(personaldetails one) {
    cout << "\nName: " << one.name << "\n";
for (int i=0;i<4;i++) {
cout << "Address line" << i << ": " << one.address[ i ] << "\n";
}
cout << "Phone number: " << one.phonenumber << "\n";
}

void displayall(personaldetails addressbook[],int booksize) {
for (int i=0, length = booksize; i < length;i++) {
printpersonaldetails(addressbook[ i ]);
}
}

void emptyaddressbook(personaldetails addressbook[],int booksize) {
for (int i=0, length = booksize; i < length;i++) {
addressbook[ i ] = {{" "}, {" "," "," "," ",}, {" "}};
}
}
