#include <iostream>
using namespace std;
// let us create a function to swap two values
int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    return b;
}


// here a and b stores addresses
// note that int* a refers to address of x
// dereferencing a means *a will give value of x
int swapPointer(int* a, int* b){
    // below codes change address at local scope
    // int* temp = a;
    // a = b;
    // b = temp;

    // below code change value through address
    int temp = *a;
    *a = *b;
    *b = temp;
    // 1 2
    // temp = a = 1
    // a = 1 == b = 2
    // b = 1
    // 2 1
}

int &swapReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    // return a;

}
int main(){
    int x = 1, y = 2;
    
    // This will take no action as we called x and y as value
    // cout << "The value of x is " << x << endl;
    // cout << "The value of y is " << y << endl;
    // swapPointer(x, y);
    // cout << "The value of x is " << x << endl;
    // cout << "The value of y is " << y << endl;    
    
    // this will swap as it will get address of x and y and then using its locating values it will change the code 
    // the value of &x is same as *a
    // int* dum1 = &x;
    // int* dum2 = &y;
    // cout << "The value of x is " << x << endl;
    // cout << "The value of y is " << y << endl;
    // swapPointer(dum1, dum2);
    // cout << "The value of x is " << x << endl;
    // cout << "The value of y is " << y << endl; 

    // you cannot change address of x and y stored
    // method 2 is using reference variables
    cout << "The value of x is " << x << endl;
    cout << "The value of y is " << y << endl;
    swapReference(x, y);
    cout << "The value of x is " << x << endl;
    cout << "The value of y is " << y << endl; 

    // Return by reference: function returns reference
    // just note that it is also possible
    swapReference(x, y) = 1080;
    swapReference(x, y) = 720;
    cout << "the value of x is " << x << endl;
    cout << "the value of y is " << y << endl;
    swapReference(x, y) = 720, 1080;
        cout << "the value of x is " << x << endl;
    cout << "the value of y is " << y << endl;

    return 0;
}