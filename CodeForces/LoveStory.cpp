#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string phrase = "codeforces";

    while(t--){
        string s;
        cin >> s;

        int count = 0;

        for (int i = 0; i < 10; i++)
        {
            if(s[i] != phrase[i]){
                count++;
            }
        }
        
        cout << count << endl;

    }

    return 0;
}