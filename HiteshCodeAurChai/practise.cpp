#include <iostream>
using namespace std;

int main() {
    int cups;
    float member_year;

    cout << "How many cup tea do you want? ";
    cin >> cups;
    cout << "How many years of membership? ";
    cin >> member_year;

    //bool discount = (cups > 12) || (member_year > 1);

    if ((cups > 12) || (member_year > 1)) {
        cout << "Congratulations" << endl;
    } else {
        cout << "Sorry, Bahinchod!" << endl;
    }

    return 0;
}