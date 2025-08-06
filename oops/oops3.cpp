#include <iostream>
using namespace std;
// learned memory allocation in oops and arrays with classes
class lib{
    int counter;
    int bookId[15];
    int bookPage[15];
    public:
        void initNumber(void){counter = 0;}
        void setInfo(int a, int b);
        void displayInfo(int idNumber);
};

void lib :: setInfo(int a, int b){
    bookId[counter] = a;
    bookPage[counter] = b;
    counter++;
}

void lib :: displayInfo(int idNumber){
    // for(int i = 0; i < 15; i++){
        cout << "The Book Id is " << bookId[idNumber] << " The Book pages is " << bookPage[idNumber] << endl;
    // }
}
int main(){

    lib gcoea;
    gcoea.initNumber();
    gcoea.setInfo(1,100);
    gcoea.setInfo(2,200);
    gcoea.displayInfo(1);
    gcoea.displayInfo(2);

}