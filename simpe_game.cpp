#include <iostream>
#include <cstdlib>
using namespace std;
int score = 0;

int game(void){
    int num1;
    int num2 = (rand() % 10) + 1;
    cout << "Your score: " << score << endl;
    cout << "Computer will choose a random number between 1 and 10" << "\n";
    cout << "Try to guess it : ";
    cin >> num1;
    if(num1 == num2){
        cout <<"\nRight !\n";
        cout <<"Socre :" << ++score << "\n"; 
    }
    else{
        cout <<"\nWrong !\n";
        cout <<"Socre :" << --score << "\n";
    }

    char replay;
    cout << "Want to play again? (y/n): ";
    cin >> replay;

    if (replay == 'y' || replay == 'Y') {
        cout <<"\n-----------------------\n";
        game();
    }
    return 0;
}
    
int main(void){
    game();
}



