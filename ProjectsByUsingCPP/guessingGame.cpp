#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    while(1){
        int guessNum;
    cout << endl;
    cout << "Enter your guess between 1 to 50: ";
    cin >> guessNum;

    int randomNum = 1 + rand() % 50;
    if(guessNum == randomNum){
        cout << "HURRYA!! YOU HAVE WON." << endl;
    }else{
        cout << "SORRY!! YOU HAVE LOST. Try again." << endl;
        cout << "Random number was: " << randomNum << endl;
    }
    cout << endl;
    }
    return 0;
}