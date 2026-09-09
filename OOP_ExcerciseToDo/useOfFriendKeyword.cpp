#include <bits/stdc++.h>
using namespace std;

class A{
    int id = 101;
    string name = "Sajed";

public:
    friend class B;
};

class B{
public:
    void display(A o1){
        cout << o1.id << endl;
        cout << o1.name << 
    }
};
int main(){
    
    return 0;
}