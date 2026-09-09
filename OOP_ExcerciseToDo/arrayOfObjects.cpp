#include <bits/stdc++.h>
using namespace std;
class Student{
    string name;
    int age;
public:
    void setData(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void getData(){
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main(){
    Student s[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i+1 << ":\n";
        s[i].setData();
    }
    cout <<"\n Student info here:\n";
    for (int i = 0; i < 5; i++)
    {
        
    }
    
    return 0;
}