#include <bits/stdc++.h>
using namespace std;

int changeA(int& ptr){
    ptr = 20;
}

int main(){
    int a = 10+10+20;
    
    changeA(a);
    cout << a << endl;

    return 0;
}