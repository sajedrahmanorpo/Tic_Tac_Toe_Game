#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, a, b, c;
    cin >> x;
    cin >> a >> b >> c;

    int sum = a + b + c;
    int result = x - sum;

    cout << result << endl;
    return 0;
}