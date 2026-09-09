#include <bits/stdc++.h>
using namespace std;

bool vowelFun(char ch){
    ch = toupper(ch);
    return ch == 'I' || ch == 'E';
}

int main(){
    int n; cin >> n;
    vector<string>w(n);
    for (int i = 0; i < w.size(); i++)
    {
        cin >> w[i];
    }
    
    for (int i = 0; i < w.size(); i++)
    {
        if(!w[i].empty()){
            w[i][0]=toupper(w[i][0]);
        }
    }

    for(auto word : w){
        if(vowelFun(word[0])){
            cout << word << " ";
        }
    }
    
    cout << endl;
    return 0;
}