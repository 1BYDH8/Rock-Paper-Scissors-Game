#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rule(char p, char c){
    if (p == c){
        return 0;
    }
    else if (p == 'q'){
        return 2;
    }
    else if (p == 'r' && c == 'p'){
        return -1;
    }
    else if (p == 's' && c == 'p'){
        return 1;
    }
    else if (p == 'p' && c == 'r'){
        return 1;
    }
    else if (p == 's' && c == 'r'){
        return -1;
    }
    else if (p == 'r' && c == 's'){
        return 1;
    }
    else if (p == 'p' && c == 's'){
        return -1;
    }
    else{
        return 3;
    }
}

string choice(char c){
    if (c == 'r'){
        std::string ro = "Rock";
        return ro;
    }
    else if (c == 'p'){
        std::string pa = "Paper";
        return pa;
    }
    else if (c == 's'){
        std::string sc = "Scissor";
        return sc;
    }
    else if (c == 'q'){
        string q = "Quit\n";
        return q;
    }
    else{
        string e = "INVALID";
        return e;
    }
}

int main(){

    char computer;
    char player;
    char playmore;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t Welcome to Rock, Paper and Scissors Game" << endl;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t Note: " << endl;
    cout << "\t\t\t\t";
    cout << "\t\t r : Rock" << endl << "\t\t\t\t" << "\t\t p - Paper" << endl << "\t\t\t\t" << "\t\t s - Scissor" << endl << "\t\t\t\t" <<"\t\t q - Quit"<< "\t\t\t\t"<< endl << endl;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    while(playmore != 'q'){
        int number = 0;
        srand(time(0));        // initialized time to 0
        number = rand() % 100; // will choose a number in range 0 - 99
        // r - for rock
        // p - for paper
        // s - for scissors
        if (number < 33)
        {
            computer = 'r';
        }
        else if (number > 66)
        {
            computer = 's';
        }
        else
        {
            computer = 'p';
        }
        // cout << "Note: \"r\" for \"Rock\", \"p\" for \"Paper\", \"s\" for \"Scissor\"." << endl;
        cout << "\t\t\t\t";
        cout << "Enter your choice: ";
        cin >> player;
        string pl = choice(player);
        string co = choice(computer);
        cout << "\t\t\t\tComputer Choose:"<< co << endl;
        cout << "\t\t\t\tYour Choice is :" << pl << endl;
        int result = rule(player, computer);
        if(result == 3){
            cout << "\t\t\t\tMake a Valid Choice " << endl;
            cout << "\t\t\t\t";
            for(int i = 0; i < 50; i++){
                cout << "-";
            }
            cout << endl;
            continue;
        }
        else if(result == 1){
            cout << "\t\t\t\t";
            cout << "You won! Hurray" << endl;
        }
        else if(result == -1){
            cout << "\t\t\t\t";
            cout << "You lose! Bad Luck" << endl;
        }
        else if (result == 0){
            cout << "\t\t\t\t";
            cout << "Woah! That's Tie!" << endl;
        }
        cout << "\t\t\t\t";
        cout << "Do you want to Play Again?" << endl;
        cout << "\t\t\t\t";
        cout << "Note: Press 'q' to exit! Press Anything to continue: ";
        cin >> playmore;
        cout << "\t\t\t\t";
        if(playmore == 'q' ){
            //cout << "\t\t\t\t";
            cout << "Quitting Game\n\t\t\t\t" << "Come Back Later" << endl << "\t\t\t\tThanks For Playing\n";
        }
        cout << "\t\t\t\t";
        for(int i = 0; i < 50; i++){
            cout << "-";
        }
        cout << endl;
    };

    return 0;
}