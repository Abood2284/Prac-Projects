#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>

using namespace std;

int main(){
    
    string Name;
    string Balance; //stores user balance
    int Dice; // stores the random number
    
    cout<<"\t ... Welcome to Venom Club ... "<<endl;
    cout<<" "<<endl;
    cout<<"Games Currently Available: "<<endl;
    cout<<"                          1. Lucky number 7"<<endl;
    cout<<"                          Soon..."<<endl;

    int yn; // whether user want to play or not
    cout<<"Do you want to play (y/n): ";
    cin>>yn;
    if (yn == 'y' || yn == 'Y')
    {
        // code ==> user wants to play
        cout<<"Enter your name: ";
        getline(cin, Name);
        cout<<"Hey"
    }

    if (yn == 'n' || yn == 'N')
    {
        return 1; // user exited the game
    }
        
    return 0;
}
