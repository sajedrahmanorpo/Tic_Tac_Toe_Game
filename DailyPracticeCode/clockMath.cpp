#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int H, M;
    cin >> H >> M;

    long double hoursAngle = (H*30)+(M*0.5);
    long double minAngle = M*6;
    long double totalAngle = abs(hoursAngle - minAngle);
    long double mainAngle = (360 - totalAngle);
    long double Angle = min(totalAngle,mainAngle);
    cout << fixed << setprecision(7) << Angle << totalAngle <<endl;
    return 0;
}