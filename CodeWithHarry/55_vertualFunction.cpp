#include <bits/stdc++.h>
using namespace std;

class Base{
public:
    int varBase=1;
    virtual void display(){
        cout << "1 Dispalying Base class variable varBase: " << varBase << endl;
    }
};

class Derived: public Base{
public:
    int varDerived=2;
    void display(){
        cout << "2 Dispalying Base class variable varBase: " << varBase << endl;
        cout << "2 Dispalying Derived class variable varDerived: " << varDerived << endl;
    }
};

int main(){
    Base *baseClassPtr;
    Base objBase;
    Derived objDrived;
    baseClassPtr = &objDrived;
    baseClassPtr->display();

    // Derived *derivedClassPtr;
    // derivedClassPtr = &objBase;

    return 0;
}