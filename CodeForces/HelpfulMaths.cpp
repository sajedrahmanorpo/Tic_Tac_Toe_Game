#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<char> digits;
    for(char c : s){
        if(c != '+'){
            digits.push_back(c);
        }
    }

    sort(digits.begin(), digits.end());

    for (int i = 0; i < digits.size(); i++)
    {
        if(i > 0) cout << "+";
        cout << digits[i];
    }
    cout << endl;
    return 0;
}