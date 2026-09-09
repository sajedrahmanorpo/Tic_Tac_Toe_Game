#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        void say(){
            cout << "Hello world!"<<endl;
        }
};

class B : public virtual A{
};

class C : public virtual A{
};

class D : public B, public C{
};

int main(){
    C c;
    c.say();
    return 0;
}