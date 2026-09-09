#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    int rollNum;

public:
    void setRollNum(int);
    void getRollNum(void);
};

void Student ::setRollNum(int r)
{
    rollNum = r;
}

void Student ::getRollNum(void)
{
    cout << "The roll number is: " << rollNum << endl;
}


class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void setMarks(float, float);
        void getMarks(void);

};

void Exam :: setMarks(float m, float p){
    maths = m;
    physics = p;
}

void Exam :: getMarks(void){
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}


class Result : public Exam{
    float percentage;
    public:
        void display(){
            getRollNum();
            getMarks();
            cout << "Your percentage in both subjects: " << (maths+physics)/2 <<"%"<< endl;
        }
};

int main()
{
    Result sajed;
    sajed.setRollNum(518);
    sajed.setMarks(94.0, 90.0);
    sajed.display();
    return 0;
}