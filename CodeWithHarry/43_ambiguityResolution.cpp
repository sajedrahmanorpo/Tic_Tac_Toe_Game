#include <bits/stdc++.h>
using namespace std;

class Base1{
    public:
        void greet(){
            cout << "How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout << "Kmn acho?"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:
        void fck(){
            Base2::greet();
        }
};

class B{
    public:
        void say(){
            cout << "Hello world"<<endl;
        }
};

class D: public B{
    // public:
    //     void say(){
    //         cout<< "Hello to my world!"<<endl;
    //     }
};

int main(){
    // Base1 base1Obj;
    // base1Obj.greet();
    // Base2 base2Obj;
    // base2Obj.greet();
    // Derived d1;
    // d1.fck();

    // B b;
    // b.say(); // output--> Hello world

    // D d;
    // d.say(); // output--> Hello to my world!

    D d;
    d.say(); // output--> Hello world



    return 0;
}