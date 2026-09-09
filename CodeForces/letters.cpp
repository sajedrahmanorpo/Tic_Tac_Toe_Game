#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    getline(cin, s);
    set<char> ltr;

    for(auto a: s){
        if(a >= 'a'  && a <= 'z'){
            ltr.insert(a);
        }
    }

    cout << ltr.size() << endl;
    return 0;
}