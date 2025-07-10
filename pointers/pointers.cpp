#include <iostream>
using namespace std;
int main(){
    // Pointers is type of data type which holds the address of other data type
    // & is the address of operator
    // * is dereference operator
    // I think best for memory management
    // understand it using room number method
    int a = 12;
    int* b = &a;

    // cout << "The address of b is " << &a << endl;
    // cout << "The address of b is " << b << endl;
    // cout << "The value of b is " << *b << endl;


    // Pointer to pointer
    int** c = &b;
    cout << "The address of c is " << c << endl;
    cout << "The adress of c is " << &c << endl;
    cout << "The value of c is " << **c <<endl;

    return 0;
}