#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // if we do not want to change value of a variable once it is created
    // const int a = 3;
    // cout << "The constant a is " << a << endl;

    // moving towards manipulators : endl,setw
    // int a = 3, b = 34, c = 345;
    // cout << "The value of a is " <<a << endl;
    // cout << "The value of b is " <<b << endl;
    // cout << "The value of c is " <<c << endl;
    
    // cout << "The value of a is " << setw(4) <<a << endl;
    // cout << "The value of b is " << setw(4) <<b << endl;
    // cout << "The value of c is " << setw(4) <<c << endl;

    // cout << "The value of a is " << setw(3) <<a << endl;
    // cout << "The value of b is " << setw(3) <<b << endl;
    // cout << "The value of c is " << setw(3) <<c << endl;

    // operator precedence : like bodmas treat it as importance also always use bracket to make it more precise
    int c;
    int a = 3, b = 4;
    c = (a*5) + b - 45;
    cout << "c is " << c << endl;
    return 0; 
}