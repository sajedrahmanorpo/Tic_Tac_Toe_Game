#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m){
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    
}
int main(){
    map<int, string>m;
    m[1]="abc"; // O(log(n))
    m[5]="cdc";
    m[3]="adc";
    m[2]="bgs";
    m[0]="ks";
    auto it = m.find(7); // O(log(n))
    m.erase(it); // log(n)
    // if(it == m.end()){
    //     cout << "No Value";
    // }else cout << (*it).first << " " << (*it).second;
    print(m);
    return 0;
}