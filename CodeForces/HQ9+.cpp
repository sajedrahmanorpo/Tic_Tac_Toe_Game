#include <iostream>
#include <string>
using namespace std;

int main() {
    string p;
    cin >> p;

    if (p.find('H') != string::npos ||
        p.find('Q') != string::npos ||
        p.find('9') != string::npos) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
