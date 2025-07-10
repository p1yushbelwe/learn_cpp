#include <iostream>
using namespace std;
int main(){
    // Learn about if-else, if-else ladder, switch statements

    // s1mple if else
    // int age;
    // cout << "Tell me you age: " << endl;
    // cin >> age;
    // if(age < 18){
    //     cout << "You are below 18" << endl;
    // }
    // else{
    //     cout << "You are above 18" << endl;
    // }
    // return 0;

    // if else ladder
    // int age2;
    // cout << "Tell me your age " << endl;
    // cin >> age2;
    // if((age2 < 18) && (age2 > 0)){
    //     cout << "You are below 18 " << endl;
    // }
    // else if (age2 <= 0)
    // {
    //     cout << "You do not exist " << endl;
    // }
    // else{
    //     cout << "You are above 18 " << endl;
    // }
    
    // switch case statements, break means get out of the event
    int age2;
    cout << "Tell me your age " << endl;
    cin >> age2;
    switch (age2)
    {
    case 18:
        cout << "You are 18 " << endl;
        break;
    case 22:
        cout << "You are 22 " << endl;
        break;
    case 2:
        cout << "You are 2 " << endl;
        break;
    default:
        cout << "No special Case " << endl;
        break;
    }
    // if we do not use break it will print go to next and will print next
    
}