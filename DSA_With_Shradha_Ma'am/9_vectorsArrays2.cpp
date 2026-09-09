#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int target;
    cout << "Enter number to search: ";
    cin >> target;
    
    bool found = false;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == target){
            cout << "Found at " << i << " index" << endl;
        }
        found = true;
    }
    
    if(!found){
        cout << "Not found" << endl;
    }
    
    return 0;
}