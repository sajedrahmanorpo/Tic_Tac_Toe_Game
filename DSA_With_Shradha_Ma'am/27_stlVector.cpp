#include <bits/stdc++.h>
using namespace std;

int main(){
    //VECTOR IN CPP

    // vector<int>v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    
    // //v.erase(v.begin()+1, v.begin()+3);
    // //v.insert(v.begin()+2,100);

    // // for(int val : v) cout << val << " ";
    // //     cout << endl;

    // // vector<int>::iterator i;
    // for (auto i = v.begin(); i != v.end(); i++)
    // {
    //     cout << *(i) << " ";
    // }
    

    //LIST IN CPP

    list<int>l; //5 3 1 2 
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    for(auto val : l) cout << val << " ";
    cout << endl;
    
    return 0;
}