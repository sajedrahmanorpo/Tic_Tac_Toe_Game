#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v = {12, 23, 34, 54, 78, 100, 7};

    // if(find(v.begin(),v.end(),200) != v.end()) cout << "Found";
    // else cout << "Not found";

    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());

    // for(auto vec : v){
    //     if(vec % 2 == 0) cout << vec << " ";
    // }

    // v.push_back(90);
    // v.push_back(55);

    // v.insert(v.begin()+3, 10);
    // v.erase(v.begin()+1);
    
    // v.clear();
    // cout << "Size: " << v.size() << endl;
    // for (auto vec : v)
    // {
    //     cout << vec << " ";
    // }


    vector<int>v={1, 3, 6};
    for(auto &x : v){
        x += 5;
    }
    for(auto x : v){
        cout << x << " ";
    }

    return 0;
}