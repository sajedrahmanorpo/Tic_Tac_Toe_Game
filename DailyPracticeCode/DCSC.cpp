#include <iostream>
using namespace std;
int main(){
    int Mp, Mc, Sp, Sc;
    cin >> Mp >> Mc >> Sp >> Sc;

    int mainMeter = Mp - Mc;
    int subMeter = Sp - Sc;

    int totalReading = (subMeter - mainMeter);
    cout << totalReading;
    return 0;
}