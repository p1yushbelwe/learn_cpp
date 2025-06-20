#include <iostream>
using namespace std;



int main(){
    /*
    Loops in C++:
        1. For Loops
        2. While Loops
        3. do-While Loops
    */ 

    // for loop
    // for(int i = 1; i <= 100; i++){
    //     cout << i << endl;
    // }

    // while loops
    // int i = 0;
    // while(i <= 10){
    //     cout << i << endl;
    //     i++;
    // }

    // do-While: it will initially run at any cost after that it will start checking conditions
    // int i = 0;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 12);
    

    // Further Dicussions About Break and Continue
    // break: it exits the loop
    // continue: stop the current iteration
    // use this when you want to skip iterartion and break the loop simulatanously
    for (int i = 0; i < 12; i++)
    {
        // this will skip 
        if(i==2 || i==4){
            continue;
        }
        cout << i << endl;
        if(i==10){
            break;
        }
        
    }
    



    return 0;
}