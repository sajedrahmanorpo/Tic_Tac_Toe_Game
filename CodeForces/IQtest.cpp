#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int upper = 0;

    for(char c : s){
        if(isupper(c)) upper++;
    }

    for(char &c : s){
        c = (upper > s.length()/2) ? toupper(c) : tolower(c);
    }
    cout << s << endl;
    return 0;
}