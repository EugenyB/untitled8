#include <iostream>
#include <windows.h>
#include "person.h"

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    Person people[3];
    char buff[100];
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
    for (auto & i : people) {
        cout << i.name << " " << i.age << " " << i.height << endl;
    }


    cout << "Hello World!" << endl;

    return 0;
}