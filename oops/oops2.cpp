#include <iostream>
// #include <string>
using namespace std;
// string a;
// string indexes[10] = {};
// int arrSize = sizeof(indexes) / sizeof(indexes[0]);
int indexes[10] = {};
int arrSize = sizeof(indexes) / sizeof(indexes[0]);

string arrayConverter[20] = {};
int arrayConverterLength = sizeof(arrayConverter) / sizeof(arrayConverter[0]);

class binary
{
private:
    string s;
    int val;
    // string customReplacer;

public:
    void inputString(void);
    void checkBinary(void);
    void checkIndexInvalidBinary(void);
    // void replaceBinary(void); not defined externally yet
    void changeIndexValue(int val);
    void displayBinary(void);
    void changeRealtime(void);
    void changeRealtimeCustom(char customReplacer);
    void putStringToArray();
    void displayConvertedArray(void);
    int checkIn(char checkVar);
    void replaceError(char checkVar, char checkVarReplacer);
};

void binary ::inputString(void)
{
    cout << "Enter The Binary String" << endl;
    cin >> s;
}
void binary ::displayBinary(void)
{
    // for (int i = 0; i < arrSize; i++)
    // {
    //     cout << indexes[i] << endl;
    // }
    cout << "The binary input is " << s << endl;
}
void binary ::checkBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Invalid Binary" << endl;
            break;
        }
    }
}
void binary ::checkIndexInvalidBinary(void)
{
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "This is not binary at index " << i << endl;
            // string convertedIndex = to_string(i);

            indexes[j] = i;
            j++;
        }
    }
}

void binary ::changeIndexValue(int val)
{
    s.at(val) = 'x';
    cout << "Changed Index At value " << val << endl;
}

void binary ::changeRealtime(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            s.at(i) = 'x';
        }
        else
        {
        }
    }
}

void binary :: changeRealtimeCustom(char customReplacer){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            
            s.at(i) = customReplacer;
        }
        else
        {
        }
    }
}


void binary :: putStringToArray(){
    for(int i = 0; i < s.length(); i++){
        arrayConverter[i] = s.at(i);
    }
    cout << "Added to Array " << endl;
}
void binary :: displayConvertedArray(void){
    for(int i = 0; i < arrayConverterLength; i++){
        cout << "The values at are " << arrayConverter[i] << endl;
    }
}

int binary :: checkIn(char checkVar){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == checkVar){
            cout << "founded at index " << i << endl;
            return i;
        }
        
    }
}


void binary :: replaceError(char checkVar, char checkVarReplacer){
    int Error = checkIn(checkVar);
    s.at(Error) = checkVarReplacer;

}
int main()
{
    binary a;
    binary b;
    binary c;
    a.inputString();

    // a.checkBinary();

    // a.putStringToArray();

    // a.displayConvertedArray();






    // a.checkIn('x');
    a.displayBinary();
    a.replaceError('x','0');
    a.displayBinary();
    

    
}