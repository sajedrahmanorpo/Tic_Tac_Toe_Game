#include <iostream>

using namespace std;

void displayArray(int arr[]){
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){
    int number[5] = {10, 20, 30, 40, 50};
    displayArray(number);
    return 0;
}