#include <iostream>
#include <string>
using namespace std;
    class fcPlayer{
        private:
            string name;
            string club;
            int age;
        public:
            int goals;
            int assists;
            void setData(string unreal_name, string unreal_club, int unreal_age);    
            void getData();
    };
    void fcPlayer :: setData(string unreal_name, string unreal_club, int unreal_age){
            name = unreal_name;
            club = unreal_club;
            age =  unreal_age;
    }
    void fcPlayer :: getData(){
        cout << "Player Name: " << name << endl;
        cout << "Player Age: " << age << endl;
        cout << "Player Club: " << club << endl;
        cout << "Player Goals: " << goals << endl;
        cout << "Player Assists: " << assists << endl;
        cout << "" << endl;
    }




int main(){
    


    fcPlayer Messi;
    fcPlayer Neymar;
    fcPlayer Ronaldo;

    string inName; 
    string inClub; 
    int inAge;
    cout << "Enter Name: " << endl;
    getline(cin, inName);
    cout << "Enter Club: " << endl;
    getline(cin, inClub);
    cout << "Enter Age: " << endl;
    cin >> inAge;

    Messi.setData(inName, inClub, inAge);
    Neymar.setData("Neymar Jr", "Santos FC", 34);
    Ronaldo.setData("Cristiano Ronaldo", "Al Nassr", 40);


    Messi.goals = 100;
    Messi.assists = 100;


    Neymar.goals = 90;
    Neymar.assists = 90;  
    
    
    Ronaldo.goals = 80;
    Ronaldo.assists = 80;


    Messi.getData();
    Neymar.getData();
    Ronaldo.getData();
    
    return 0;
}