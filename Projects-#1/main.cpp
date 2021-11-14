#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
#include <unistd.h> //sleep function

using namespace std;

void rules()
{
    system("cls");
    cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}

int main(){
    
    string Name;
    long int Balance; //stores user balance
    int Dice; // stores the random number
    int BetAmount; // stores user betting amount
    int Guess; // stores the number user guesses
    
    cout<<"\t==========Welcome to Venom Club========="<<endl;
    cout<<" "<<endl;
    cout<<"\tGames Currently Available: "<<endl;
    cout<<"     1. Lucky number 7"<<endl;
    cout<<"           Soon..."<<endl;

    char yn; // whether user want to play or not
    char choice;
        // code ==> user wants to play
        cout<<"Enter your name: ";
        getline(cin, Name);
        cout<<"Hey "<<Name<<" i hope your going to have a lucky day."<<endl;
        sleep(3);
        cout<<"Enter The Starting Balance To Play The Game"<<endl;
        cout<<": $";
        cin>>Balance;
        do
        {
            /* code */
            system("cls"); // Cleares the terminal
            rules();
            cout << "\n\nYour current balance is $ " << Balance << "\n";
            // Get players betting balance
            cout<<"Player "<<Name<<", enter amount to bet: $";
            do
            {
                /* code */
                cin>>BetAmount;
                if(BetAmount > Balance)
                    cout << "Betting balance can't be more than current balance!\n"
                        <<"\nRe-enter balance\n ";
            } while (BetAmount > Balance);

            // Get Players Number
            do
            {
                /* code */
                cout<<"Guess any betting number between 1 & 10 : ";
                cin>>Guess;
                if(Guess <=0 || Guess > 10)
                    cout<<"\nNumber should be between 1 to 10\n"
                    <<"Re-enter number:\n ";

            } while (Guess <=0 || Guess > 10);
            
            // Store random number between 1 to 9
            Dice = rand()%10 + 1;

            if (Dice == Guess)
            {
                /* Code */
                cout<<"\n\nYou are in luck!! You have won $ "<< BetAmount * 10<<endl;
                Balance = Balance + BetAmount * 10;
            }else
            {
                /* code */
                cout<<"Oops, better luck next time !! You lost $ "<< BetAmount<<endl;
                Balance = Balance - BetAmount;
                cout<<"Your Balance: $ "<<Balance;
            }
            cout << "\nThe winning number was : " << Dice <<"\n";
            cout << "\n"<<Name<<", You have balance of $ " << Balance << "\n";
            if(Balance == 0){
                cout<<"We Wish you happy Eve."<<endl;
                return 0 ;
            }
            
            
            cout<<"\n\n-->Do you want to play again (y/n)? ";
            cin>> choice;
            

        } while (choice =='Y'|| choice=='y');
        cout << "\n\n\n";
        cout << "\n\nThanks for playing the game. Your balance is $ " << Balance << "\n\n";
        
    
    return 0;
}
