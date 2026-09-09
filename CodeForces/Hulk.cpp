#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string  sum = "I hate";

    for (int i = 2; i <= n; i++)
    {
        if(i % 2 == 0){
            sum += " that I love";
        }else{
            sum += " that I hate";
        }
    }
    
    sum += " it";
    cout << sum << endl;
    return 0;
}