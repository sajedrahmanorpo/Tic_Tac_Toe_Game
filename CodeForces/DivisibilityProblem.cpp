#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int a, b;
        cin >> a >> b;
        long long int k = (b - a % b) % b;
        cout << k << endl;
    }

    return 0;
}