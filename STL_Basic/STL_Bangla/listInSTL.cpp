#include <bits/stdc++.h>
using namespace std;

int main(){
    // list<int>li;
    // li.push_back(1);
    // li.push_back(2);
    // li.push_back(3);
    // li.push_back(4);

    // li.push_front(4);
    // li.push_front(5);
    // li.push_front(6);

    // li.pop_front();
    // li.pop_back();

    // list<int>::iterator it;
    // for (it = li.begin(); it != li.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // list<int>::iterator it;
    // it = li.begin();
    // advance(it, 3);
    // li.insert(it, 4, 10);

    // for(auto it: li){
    //     cout << it << " ";
    // }


    list<int>li={1,2,3,4,5,6};
    list<int>::iterator it, it2;
    it=li.begin();
    it2=li.begin();
    advance(it2, 3);

    li.erase(it, it2);
    for(auto it: li){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}