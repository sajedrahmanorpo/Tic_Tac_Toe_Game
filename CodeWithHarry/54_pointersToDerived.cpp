#include <bits/stdc++.h>
using namespace std;

class Base{
public:
    int varBase;
    void printBase(){
        cout << "Dispalying Base class variable varBase: " << varBase << endl;
    }
};

class Derived: public Base{
public:
    int varDerived;
    void printDerived(){
        cout << "Dispalying Base class variable varBase " << varBase << endl;
        cout << "Dispalying Derived class variable varDerived " << varDerived << endl;
    }
};

int main(){
    Base *baseClassPtr;
    Base objBase;
    Derived objDrived;
    baseClassPtr = &objDrived;

    baseClassPtr->varBase = 5;
    baseClassPtr->printBase();


    return 0;
}