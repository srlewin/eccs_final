#include <iostream>
using namespace std;

// Demonstrate the use of aliases. See Lecture Notes on Parameter passing 
// by Reference
// To compile with Gnu compiler:
// % g++ -Wall -g alias.cpp -o alias.out
// To run on Linux/Mac:
// % ./alias.out

void f1() {
    cout << "Example 1 of aliases" << endl;
    int a = 4;
    int &b = a;    // Declares alias b. Binds to a.
    cout << "Initial a =  " << a << endl;     // prints out 4.
    cout << "Initial b (alias) =  " << b << endl;     // prints out 4.
    b = 5;                // Sets a to 5, since b is an alias of a.
    cout << "Final a = " << a << endl;     // prints out 5
    cout << "Final b (alias of a) = " << b << endl << endl;

}

void f2() {
    int a = 4;
    int c = 3;
    cout << "Example 2 of aliases" << endl;
    int &b = a;         // Declares and binds alias b to a.
    cout << "Initial a, b (alias), c = " << a << ", " << b << ", " 
         << c << endl;
    b = c;   // Q: Does b become bound to c? Or does a become 3? 
    b = b - 1;  // Which variable changes here?
    cout << "Final a, b (alias), c = " << a << ", " << b << ", " << c << endl;
}

/* Illustrates returning multiple values from a function. This
   function returns p/q and p % q in reference parameters quotient and
   remainder. It also returns true if q is non-zero and false
   otherwise to indicate success or failure in computing p/q and p %
   q.
*/

bool divandmodulo(int p, int q, int &quotient, int &remainder) {
    if (q == 0) return false; // quotient and remainder not relevant.
    quotient = p/q;
    remainder = p % q;
    return true;
}

void stringtest() {
    string s1 = "abc";
    string &s2 = s1;
    s2 = "def";
    cout << s1 << endl;
}

int main() {
    f1();
    f2();
    cout << "computing 5/3 and 5 % 3 using m1 function" << endl;
    int a, b;

    /* test the function divandmodulo above */

    bool status = divandmodulo(5, 3, a, b);
    cout << "success status of dividing 5 and 3 = " << status << endl;
    cout << "quotient of 5 and 3 = " << a << endl;
    cout << "remainder of 5 and 3 = " << b << endl;
    status = divandmodulo(5, 0, a, b);
    cout << "success status of dividing 5 and 0 = " << status << endl;

    stringtest();
    
}
