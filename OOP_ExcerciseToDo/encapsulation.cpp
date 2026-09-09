#include <bits/stdc++.h>
using namespace std;
class Student
{
    string name;
public:
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
};

int main(){
    Student s1;
    s1.setName("Sajed");
    cout << s1.getName();
    return 0;
}