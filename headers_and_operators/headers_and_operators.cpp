#include <iostream>
#include "inputt.h" // note that his is user defined header file and must ne curremt directly
using namespace std;
int main()
{
    int a = 12;
    int b = 12;

    // std::cout << "hello world";
    // cout << "The value of a + b " << a + b << endl;
    // cout << "The value of a - b " << a - b << endl;
    // cout << "The value of a * b " << a * b << endl;
    // cout << "The value of a / b " << a / b << endl;
    // cout << "The value of a % b " << a % b << endl;
    // Here focus on ++a --a a++ a--
    // cout << "The value of a is " << a << endl;
    // cout << "The value of ++a " << ++a << endl;
    // cout << "The value of a is " << a << endl;

    // cout << a++ << " The value of a++ " << endl;
    // as here a is already 14
    // cout << "The value of ++a " << ++a << endl;
    

    // Comparison Operators

    // cout << "The value of a is " << a << endl;
    // cout << "The value of b is " << b << endl;  
    // cout << "The value of a == b is " << (a == b) << endl;
    // cout << "The value of a != b is " << (a != b) << endl;
    // cout << "The value of a > b is " << (a > b) << endl;
    // cout << "The value of a < b is " << (a < b) << endl;
    // cout << "The value of a <= b is " << (a <= b) << endl;
    // cout << "The value of a >= b is " << (a >= b) << endl;

    // Logical Operators
    int c = 12;
    int d = 13;
    cout << "The value of c is " << c << endl;
    cout << "The value of d is " << d << endl;
    cout << "The value of ((a==b)&&(a<b)) operator is " << ((c==d)&&(c<d)) << endl;
    cout << "The value of ((a==b)||(a<b)) operator is " << ((c==d)||(c<d)) << endl;
    cout << "The value of ((a==b)&&(a>b)) operator is " << ((c==d)&&(c>d)) << endl;
    cout << "The value of ((a==b)||(a>b)) operator is " << ((c==d)||(c>d)) << endl;

    return 0;
}