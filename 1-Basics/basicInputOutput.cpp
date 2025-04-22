#include <iostream>
#include<string>
using namespace std;

int main() {
    float height;

    // Asking for user input
    cout << "Enter your height in feet: ";
    cin >> height;

    // Showing output
    cout << "Your height is " << height << " feet." << endl;

    string name;
    int age;

    // Asking for user input
    cout << "Enter your First name: ";
    cin >> name;  // Takes input until space or enter (for full name use getline)

    cout << "Enter your age: ";
    cin >> age;

    // Showing output
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}
