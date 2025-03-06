#include <iostream>
#include <windows.h>
#include "person.h"

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    Person people[3];
    char buff[50];
    for (int i = 0; i < 3; i++) {
        cout << "Enter name of person " << i + 1 << ": ";
        cin.getline(buff, 50);
        people[i].name = buff;
        cout << "Enter age of person " << i + 1 << ": ";
        cin >> people[i].age;
        cout << "Enter height of person " << i + 1 << ": ";
        cin >> people[i].height;
        cin.ignore();
    }
    for (int i = 0; i < 3; i++) {
        cout << people[i].name << " " << people[i].age << " " << people[i].height << endl;
    }

    if (people[1]==people[2]) {

    }

    return 0;
}