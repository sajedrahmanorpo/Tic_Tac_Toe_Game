#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << 1 << endl;
    } else {
        long long a = 1;
        long long b = 1;
        long long current = 0;

        for (int i = 3; i <= n; i++) {
            current = a + b;
            a = b;
            b = current;
        }
        cout << b << endl;
    }

    return 0;
}