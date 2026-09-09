#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    Student(string name){
        this -> name = name;
    }
    void getData(){
        cout << name << endl;
    }
};
int main(){
    Student s1("Sajed");
    s1.getData();
    return 0;
}