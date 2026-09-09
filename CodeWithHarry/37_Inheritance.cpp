#include <bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode = 9;
    
    Programmer(int inpId)
    {
        id = inpId;
    }
    void getData(){
        cout<<id<<endl;
    }
};


int main(){
    Employee sajed(2), siam(1);
    cout << sajed.salary << endl;
    cout << siam.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();
    return 0;
}