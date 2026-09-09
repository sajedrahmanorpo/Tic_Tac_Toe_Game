#include <bits/stdc++.h>
using namespace std;

class Point{
    int a, b;
    public:
    Point(int x, int y){
        a = x;
        b = y;
    }
    void displayPoint(){
        cout << "The point is (" << a << ", " << b <<")" << endl;
    }
};

int main(){
    Point p(1, 2);
    Point q(4, 6);
    p.displayPoint();
    q.displayPoint();
    return 0;
}