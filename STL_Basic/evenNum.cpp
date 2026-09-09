#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    cout << "Even numbers: ";
    for (int i = 0; i < v.size(); i++)
    {   
        if(v[i] % 2 == 0){
            cout << v[i] << " ";
        }
    }
    
    return 0;
}