#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    int rollNum;

public:
    void setRollNum(int r)
    {
        rollNum = r;
    }
    void printRollNum(void)
    {
        cout << "My roll no is: " << rollNum << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void printMarks(void)
    {
        cout << "My result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void setScore(float s)
    {
        score = s;
    }
    void printScore(void)
    {
        cout << "My PT score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        printRollNum();
        printMarks();
        printScore();
        cout << "My total result is: " << endl;
    }
};

int main()
{
    Result sajed;
    sajed.setRollNum(518);
    sajed.setScore(9);
    sajed.setMarks(78.9, 76.8);
    sajed.display();
    return 0;
}