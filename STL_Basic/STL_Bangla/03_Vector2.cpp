#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int>v;
    // v.push_back(100); v.push_back(5);
    // v.push_back(30); v.push_back(67);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    
    // //v.insert(v.begin()+2, 2, 5); // index, howManyNumbers, whichNumber
    // sort(v.begin(), v.end());

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    vector<int>::iterator it;
    // it=v.begin()+3;
    // cout << *it << endl;

    for ( it = v.begin(); it < v.end(); it++)
    {
        cout << *it << endl;
    }
    
    return 0;
}