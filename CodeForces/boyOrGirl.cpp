#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;

    set<char>disChar;
    for(char c : n){
        disChar.insert(c);
    }

    if(disChar.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}