#include <bits/stdc++.h>
using namespace std;

int main(){
    // stack<int> s;
    // s.push(2);
    // s.push(7);
    // s.push(4);
    // s.push(6);
    // while (!s.empty())
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    // }

    queue<string> q;
    q.push("ajh");
    q.push("jug");
    q.push("vfd");
    q.push("kukg");
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0;
}