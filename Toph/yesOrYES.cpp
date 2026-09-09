#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        string str; cin >> str;
        for(char &c : str){
            c = tolower(c);
        }

        if(str == "yes"){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}