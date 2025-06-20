#include <iostream>
using namespace std;

// Learn about structure, union, enum
// Structure is used to combine different datatypes
    // struct employee
    // {
    //     int eID;
    //     char favChar;
    //     float salary;
    // };

    // we can also use typedef keyword as
    // jisko mai struct employee bolta tha usko mai em bolna pasand karunga
    typedef struct employee
    {
        int eID; // 4
        char favChar; // 1
        float salary; // 4
    }em;
    // above memory allocated : 9
    // Union: i will use only one value at a time transaction
    union money{
        int rice; // 4
        char car; // 1
        float rupees; // 4

    };
    // above memory allocate is the max : 4

    // enum is simply used to allocate number as a string
    enum Meal{breakfast, lunch, dinner};

int main(){
    em piyush;
    em devansh;
    em markand;
    piyush.eID = 1;
    piyush.favChar = 'p';
    piyush.salary = 12000000;
    // cout << piyush.eID << endl;
    // cout << piyush.favChar << endl;
    // cout << piyush.salary << endl;
    union money m1;
    m1.rice = 34;
    cout << "The value of m1.rice when not overriden " << m1.rice << endl;

    m1.rupees = 34.34;
    cout << "The value of m1.rice when overriden by m1.rupees is " << m1.rice << endl; // it will return garbage value as it is over ride by m1.rupees

    cout << "The value of m1.rupees is " << m1.rupees << endl; // it will return garbage value as it is over ride by m1.rupees
    // cout << "The value of m1.rice is " << m1.rice << endl; // it will return garbage value as it is over ride by m1.rupees

    cout << "The value of breakfast is " << breakfast << endl;
    cout << "The value of lunch is " << lunch << endl;
    cout << "The value of dinner is " << dinner << endl;
    int a = dinner;
    Meal css = dinner;
    cout << a << endl;
    return 0;
}