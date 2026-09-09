#include <bits/stdc++.h>
using namespace std;

int main(){
    // set<int, greater<int>>st;
    // st.insert(1);
    // st.insert(3);
    // st.insert(4);
    // st.insert(2);
    // st.insert(2);

    // // set<int>::iterator it;
    // // for (it = st.begin(); it != st.end(); it++)
    // // {
    // //     cout << *it << " ";
    // // }

    // // for(auto it: st) cout << it << " ";

    // auto it = st.find(9);
    // if(it != st.end()) cout << "FIND";
    // else cout << "NOT FIND";


    multiset<int>ms;
    ms.insert(7);
    ms.insert(1);
    ms.insert(5);
    ms.insert(1);
    ms.insert(3);
    ms.insert(3);
    ms.insert(4);

    for(auto it: ms) cout << it << " ";
    cout << endl;

    // auto it = ms.begin();
    // advance(it, 3);

    // ms.erase(it);

    auto it = ms.lower_bound(2);
    cout << *it << endl;

    
    return 0;
}