#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int denominations[] = {1, 5, 10, 50, 100, 500};

    for (int i = 0; i < 6; i++) {
        int d = denominations[i];
        int count = N / d;       // koto note lagbe
        N -= count * d;          // baki taka komao
        for (int j = 0; j < count; j++) {
            cout << d << " ";
        }
    }
    cout << endl;
    return 0;
}
