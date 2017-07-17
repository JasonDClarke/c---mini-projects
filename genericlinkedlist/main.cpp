#include <iostream>
#include <string>

using namespace std;

struct person
{
    string name;
    int age;
    char favouriteChar;
    person* p_nextPerson;
    person* p_previousPerson;
};
person getGenericPerson();
person getPerson(string name, int age, char favouriteChar) ;

int main()
{
    //initialising a "person" struct
    person Jason;
    Jason.name = "Jason";
    Jason.age = 19;
    Jason.favouriteChar='J';
    Jason.p_nextPerson= NULL;
    Jason.p_previousPerson= NULL;
    //----
    getGenericPerson();
    //----

    return 0;
}

   //---- writing a function that initialises an generic person struct
   person getGenericPerson() {
   person Jim;
   Jim.name = "Jim";
   Jim.age = -1;
   Jim.favouriteChar = '\0';
   Jim.p_nextPerson= NULL;
   Jim.p_previousPerson= NULL;
   return Jim;
   }

   person getPerson(string personName, int age, char favouriteChar) {
   person x;
   x.name = personName;
   x.age = age;
   x.favouriteChar = favouriteChar;
   x.p_nextPerson= NULL;
   x.p_previousPerson= NULL;
   return x;
   }
