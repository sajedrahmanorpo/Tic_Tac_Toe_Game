#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {
    cout << v[i] << " ";
    }
    cout << endl;
    // cout << "ITERATORS:" << endl;
    // vector<int> ::iterator it = v.begin();
    // cout << (*it) << endl;
    // cout << (*(it+1)) << endl;

    // for (it = v.begin(); it != v.end(); ++it)
    // {
    //     cout << (*it) << endl;
    // }
    
    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    // vector<pair<int,int>> :: iterator it;
    for (auto it = v_p.begin(); it != v_p.end(); it++)
    {
        cout << (*it).first <<" "<< (*it).second<<endl;
    }
    // vector<pair<int,int>>v_p={{1,2},{2,3}};
    // for(pair<int,int> &value : v_p){
    //     cout << value.first << " " << value.second <<endl;
    // }
    // for(int value : v){
    //     cout << value << " ";
    // }

    
    return 0;
}