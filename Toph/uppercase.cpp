#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    getline(cin, line);

    stringstream ss(line);
    string w;

    vector<string>v;

    while (ss >> w)
    {
        bool upper = true;
        for(auto c: w){
            if(!isupper(c)){
                upper = false;
            }
            if(!upper){
                v.push_back(w);
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if(i) cout << " ";
        cout << v[i];
    }
    
    
}