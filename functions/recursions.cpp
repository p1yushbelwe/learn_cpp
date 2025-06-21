#include <iostream>
using namespace std;

// we use factorial in order to solve some problems
int factorial(int num){
    if(num <= 1){
        return 1;
    }
    else{
        return num * factorial(num -1);
    }
    // return num * factorial(num -1);
}

int fibonacci(int n){}
int main(){
    // cout<<factorial(4)<<endl;
    // int a = 0;
    // int b = 1;
    //     cout << a << endl;
    // // cout << b << endl;
    // int temp;
    // temp = a;
    // a = b;
    // b = temp + b;
    // cout << a << endl;
    // // cout << b << endl;

    // temp = a;
    // a = b;
    // b = temp + b;
    // cout << a << endl;
    // cout << b << endl;
// int a = 0;

    // solved fibonacci using loop
    int no;
    cout << "Enter the number of digits upto which you want to print fibonacci : " << endl;
    cin >> no;
    for(int i = 0; i <= no; i++){
        static int a = 0;
        static int b = 1;
        int temp;
        cout << a << endl;
        temp = a;
        a = b;
        b = temp + b;
    }
    return 0;
}

// decoding fibonacci
// a = 0, b = 1
// a = 1, b = 0 + 1
// a = 1, b = 1 + 1
// a = 2, b = 1 + 2 

// use formula
// f(n) = f(n-1) + f(n-2)
// when n = 0;
