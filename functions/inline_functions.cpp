#include <iostream>
using namespace std;

// inline functions(speed some extent): use when minimal work is done
// do not use inline function for recursions, static variables
// whenever we make a function inline, ham compiler ko devta bana dete hai

inline int product(int a, int b){
    return a*b;
} 

// use of static variable: "static int value" it will execute only once, value is retained
// int c = 0; // replace this with static in fucnction
int ss(int a, int b){
    static int c; // it will do job for recursion
    // int c; // it will not do the job for recursion
    c = 0;
    c = c + 1;
    return a*b+c;
}

float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

int strlen(const char *p){
    // valid for pointers and reference variable
}


int main(){
    int a, b;
    a = 3, b = 4;
    // cout << "The value is " << ss(a, b) << endl;
    // cout << "The value is " << ss(a, b) << endl;
    // cout << "The value is " << ss(a, b) << endl;
    // cout << "The value is " << ss(a, b) << endl;
    // cout << "The value is " << ss(a, b) << endl;
    // cout << "The value is " << ss(a, b) << endl;
    // cout << "The value is " << ss(a, b) << endl;
    // cout << "The value is " << ss(a, b) << endl;


    // default arguments: must always be at extreme right
    int money;
    money = 120000; 
    cout << "If you have " << money << " in bank account, you will receive " << moneyReceived(money)  << endl;
    cout << "If you are VIP and you have " << money << " in bank account, you will receive " << moneyReceived(money, 1.10)  << endl;

    // constant arguments: we use const to never change the value



    return 0;
}