#include <bits/stdc++.h>
using namespace std;

class Person{
    int age;
    public:
        string name;
        void setAge(){
            cin >> age;
        }
        int getAge(){
            return age;
        }
        void setName(){
            cin >> name;
        }
};

class Student : public Person{
    public:
        int roll;
        void setRoll(){
            cin >> roll;
        }
        void display(){
            cout << "His name is: " << name << endl;
            cout << "His age is: " << getAge() << endl;
            cout << "His roll is: " << roll << endl;
        }
};

int main(){
    Student st1;
    st1.setName();
    st1.setAge();
    st1.setRoll();
    st1.display();
    return 0;
}