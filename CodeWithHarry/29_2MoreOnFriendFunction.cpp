#include <bits/stdc++.h>
using namespace std;

class c2;

class c1{
    int val1;
    friend void exchange(c1 &, c2 &);
    public:
    void setData(int a){
        val1 = a;
    }

    void getData(){
        cout << val1 << endl;
    }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
    void setData(int b){
        val2 = b;
    }

    void getData(){
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;

}

int main(){
    c1 oc1; 
    c2 oc2;

    oc1.setData(34);
    oc2.setData(67);

    exchange(oc1, oc2);

    cout << "The value o1 exchanging becomes: ";
    oc1.getData();
    cout << "The value o2 exchanging becomes: ";
    oc2.getData();

    return 0;
}