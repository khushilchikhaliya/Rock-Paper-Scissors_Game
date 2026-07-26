#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    // srand(time(NULL));
    // cout << "random number is " << rand()%3 << endl ;

    cout << "================================" << endl;
    cout << " Welcome to Rock-Paper-Scissors " << endl ;
    cout << "================================" <<  endl << endl;

    cout << " # Instruction : Enter only first character latter of your choice as a example : "<< endl;
    cout << " R <--- Rock , P <--- Paper , S <--- Scissors " << endl;
    cout << "Maintain Case-sensitivity and use Capital latter(R/P/S) for choice " << endl;
    cout << "You may enter 'Q' to over the game." << endl;
    cout << "----------------------------------------------" << endl << endl ;

    int userPoint = 0 , computerPoint = 0;
    srand(time(NULL));  //random number generator

    while(true){
        char userChoice ;
        char computerChoice ;
        int randomNumber ; 

        randomNumber = rand()%3;

        if(randomNumber == 0){      // computer choice according to random number
            computerChoice = 'R';
        }
        else if(randomNumber == 1){
            computerChoice = 'P';
        }
        else if(randomNumber == 2){
            computerChoice = 'S';
        }
        

        cout << "Enter your choice : "; // input from user 
        cin >> userChoice ;
        if(userChoice == 'Q'){
            cout << "Game over! , Thank you for playing." << endl;
            cout << "The Final score is " << userPoint << "-" << computerPoint << endl;
            break;
        }
        else if(userChoice != 'R' && userChoice != 'P' && userChoice != 'S'){
            cout << "Invalid Input , kindly enter R/P/S " << endl;
            continue;
        }
        else{
            cout << "Computer chose : "<< computerChoice << endl;
        }

        

        if(userChoice == computerChoice){
            cout << "Match Draw !" << endl ;         
        }
        else if(userChoice == 'R' && computerChoice == 'P'){
            cout << "Computer won! " << endl;
            computerPoint++;
        }
        else if(userChoice== 'R' && computerChoice== 'S'){
            cout << "User won!" << endl ;
            userPoint++;
        }
        else if(userChoice== 'P' && computerChoice=='S'){
            cout << "Computer won! " << endl;
            computerPoint++;
        }
        else if(userChoice== 'P' && computerChoice== 'R'){
            cout << "User won!" << endl ;
            userPoint++;
        }
        else if(userChoice == 'S' && computerChoice== 'R'){
            cout << "Computer won! " << endl;
            computerPoint++;
        }
        else if(userChoice == 'S' && computerChoice=='P'){
            cout << "User won!" << endl ;
            userPoint++;
        }

        cout << "-----------------------------" << endl ;
        cout << "The Scoreboard (User-Computer) : " << userPoint << "-" <<  computerPoint << endl ;
        cout << "-----------------------------" << endl ;

    }

    

    return 0;
}