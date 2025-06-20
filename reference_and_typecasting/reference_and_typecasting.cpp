#include <iostream>
using namespace std;
// let us talk about accessing global and local variables
int c = 45;

int main(){
    int a, b, c;

    // cout << "Enter the value of a: " << endl;
    // cin >> a;
    // cout << "\nEnter the value of b:" << endl;    
    // cin >> b;
    // c = a + b;
    // // here c is a local variable
    // cout << "\nThe sum value of c is " << c << endl;
    // // but if we have to access global variable we use scope resolution operators ::
    // cout << "\nThe global value of c is " << ::c << endl;

    float d = 34.4f;
    long double e = 34.4L;
    // defaultly c compiler gets 34.4 as double but if we want to specify we do as 34.4f
    // sizeof() to get 
    // cout << "The value of d is " << d;
    // cout << "\nThe value of e is " << e;

    // Note:
    // 34.4 is generally double : 4
    // 34.4f is now float : 8
    // 34.4l is not long double : 12
    cout << "The size of 34.4 is " << sizeof(34.4);
    cout << "\nThe size of 34.4f " << sizeof(34.4f);
    cout << "\nThe size of 34.4F " << sizeof(34.4F);
    cout << "\nThe size of 34.4l " << sizeof(34.4l);
    cout << "\nThe size of 34.4L " << sizeof(34.4L);

    // Reference Variables :- 
    // if we want to call a value by two or more other identities then we use reference variables
    // Piyush --> p1yush.b --> flash

    float x = 455;
    float & y = x;
    cout<< endl;
    cout << x << endl;
    cout << y << endl;

    // typecasting : convertion of variables
    int num1 = 45;
    float num2 = 45.45;
    cout << "The value of num1 + num2 is " << num1 + num2 <<endl;
    cout << "The value of num1 + int(num2) is " << num1 + int(num2) <<endl;
    cout << "The value of num1 + (int)num2 is "<<num1 + (int)num2  <<endl;
    cout << "The value of float(num1) + int(num2) is "<<float(num1) + int(num2)  <<endl;
    return 0;


}