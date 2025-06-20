#include <iostream>
using namespace std;

// Arrays: if you have to store multiple data that means multiple memory hence we use arrays for memory allocation
/*
if we have to store data of 2500 students
it is not good to declare 2500 variables
hence we can declare array of size 2500 
thus we can store massive data using only one variable
*/


int main(){
    int marks[] = {34, 45, 55, 65};
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    
    // cout << "value of marks 2 before changing "<< marks[2] << endl;
    // marks[2] = 100;
    // cout << "Value of marks 2 after changing " << marks[2] << endl;
    // cout << marks[0] << endl;

    // printing using loops
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << marks[i] << endl;
    // }
    

    // Pointers in arrays and pointer arithmetic
    // here we do not use &marks we only use marks
    int*p = marks;
    // cout << marks << endl; // do not use &marks
    // cout << "The value of marks is " << *p << endl;
    // p++;
    // cout << *p << endl;
    // cout << *(++p) << endl;
    cout << "Loop Starts" << endl;
    for (int i = 0; i < 3; i++)
    {
        // cout << *p << endl;
        cout << *(++p) <<endl;
        
    
    }
    /*
    p++;
    cout << *p << endl;
    above code has alternative as
    cout << *(++p) << endl;
    */
    return 0;
}