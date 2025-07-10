#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    cout << "The sum is " << c << endl;
    // return c;
}

// function prototyping: it is just difference between declaration and defination
int sub(int a, int b);
void g(void);
// formal parameters and actual parameters
// 34 and 34 are actual parameters
// a and b are formal parameter

void g(){
    cout << "Good Morning" << endl;
}



int main(){
    cout<<"hello world" << endl;
    // int ans = sum(4,5);
    sum(34,34);
    // cout << "Sum is " << sum(34,34) << endl;
    cout << "The sub function is " << sub(45,4) << endl;
    g();
    return 0;
}

int sub(int a, int b){
    int c = a - b;
    return c;
    }
