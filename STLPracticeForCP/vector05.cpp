#include <bits/stdc++.h>
using namespace std;

bool vowFun(char ch){
    ch = toupper(ch);
    return ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U';
}

int main(){
    int n; cin >> n;
    vector<string>s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(!s[i].empty()){
            s[i][0] = toupper(s[i][0]);
        }
    }
    
    for(auto word : s){
        if(vowFun(word[0])){
            cout << word << " ";}
    }
    
    return 0;
}