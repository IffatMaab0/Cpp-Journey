#include <iostream>
using namespace std;

int main() {
	
	
    // 1. Arithmetic Operators
    int a = 10, b = 3;

    cout << "--- Arithmetic Operators ---" << endl;   // associativity from left to right
    cout << "Addition (a + b): " << a + b << endl;
    cout << "Subtraction (a - b): " << a - b << endl;
    cout << "Multiplication (a * b): " << a * b << endl;
     cout << "operator precedence: " << 10 % 2 / 1 * 5 - 7 + 2 << endl;

    // 2. Relational Operators              //Left to Right
    cout << "\n Relational Operators" << endl;
    cout << "Is a > b? " << (a > b) << endl;
    cout << "Is a < b? " << (a < b) << endl;
    cout << "Is a == b? " << (a == b) << endl;

    // 3. Logical Operators
    bool x = true, y = false;    // true-->1 ; false-->0

    cout << "\n--- Logical Operators ---" << endl;
    cout << "x AND y (x && y): " << (x && y) << endl;    //Left to Right
    cout << "x OR y (x || y): " << (x || y) << endl;     //Left to Right
    cout << "NOT x (!x): " << (!x) << endl;              //right to left

    // 4. Assignment Operators 
    // '=' is a assignment operator, its associativity is from right to left

    return 0;
    
    // what is associativity?
     //Associativity decides which operator is evaluated first 
	 //when two operators of the same precedence appear in an expression.
    
    
    
    
    
}
