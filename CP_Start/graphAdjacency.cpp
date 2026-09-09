// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, e; cin >> n >> e;
//     vector<int> graph[n+1];
//     for (int i = 0; i < e; i++)
//     {
//         int u, v; cin >> u >> v;
//         graph[u].push_back(v);
//         graph[v].push_back(v);
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "Node " << i << " connects to: ";
//         for(int j : graph[i]){
//             cout << j << " ";
//         }
//     }
    
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m; // n = node সংখ্যা, m = edge সংখ্যা
    cout << "Node: ";
    cin >> n;
    cout << "Edge: ";
    cin >> m;

    vector<int> graph[n + 1]; // 1-based indexing

    cout << "Edge (u v format):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // Undirected graph হলে দুইদিকে edge add করবো
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // Adjacency list print করছি
    cout << "\nAdjacency List:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << " connects to: ";
        for (int j : graph[i]) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
