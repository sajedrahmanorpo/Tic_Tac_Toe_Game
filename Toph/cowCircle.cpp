#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    const double PI = acos(-1);

    while (t--)
    {
        long long l; cin >> l;
        double area = PI * l * l;
        cout << fixed << setprecision(3) << area << "\n";
    }
    
    return 0;
}