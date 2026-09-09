#include <bits/stdc++.h>
using namespace std;

class Student
{
    int id;
    int salary;

public:
    void setId(void)
    {
        cout << "Enter Id of the student: ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The Id of your student is " << id << endl;
    }
};

int main()
{
    // Student sajed, siam, mushi;
    // sajed.setId();
    // sajed.getId();
    // siam.setId();
    // siam.getId();
    // mushi.setId();
    // mushi.getId();

    Student myId[4];
    for (int i = 0; i < 4; i++)
    {
        myId[i].setId();
        myId[i].getId();
    }

    return 0;
}