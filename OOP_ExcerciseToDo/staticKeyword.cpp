#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    static int count;

    Student()
    {
        count++;
    }

    static void showTotal()
    {
        cout << "Total student: " << count << endl;
    }
};
int Student::count = 0;
int main()
{
    Student s1, s2, s3;
    Student::showTotal();
    return 0;
}