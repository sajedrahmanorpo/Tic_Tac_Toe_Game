#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
        return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int roll, marks;
        cin >> roll >> marks;
        vp.push_back({roll, marks});
    }

    sort(vp.begin(), vp.end(), cmp);

    for (auto p : vp)
    {
        cout << "Roll: " << p.first << ", Marks: " << p.second << endl;
    }

    return 0;
}