// Demonstrate declaration of variables with different data types in C++

#include <iostream>
using namespace std;

int main() {
    // Integer type
    int age = 20;

    // Floating point type
    float height = 5.4;

    // Double precision floating point type
    double weight = 55.6;

    // Character type
    char grade = 'A';

    // Boolean type
    bool isStudent = true;

    // String type (need to include <string> for this)
    string name = "Iffat";

    // Displaying the values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " ft" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is a student: " << isStudent << endl;

    return 0;
}
