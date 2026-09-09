#include <iostream>
using namespace std;

class Student{
    protected:
    int rollNum;
    public:
        void setRollNum(int r){
            rollNum = r;
        }
        void getRollNum(void){
            cout << "The roll is: " << rollNum << endl;
        }
};

class Exam : public Student{
    protected:
    float maths;
    float physics;
    public:
        void setMarks(float m, float p){
            maths = m;
            physics = p;
        }
        void getMarks(void){
            cout << "The maths marks are: " << maths << endl;
            cout << "The physics marks are: " << physics << endl;
        }
};

class Percentage : public Exam{
    public:
        void showTheResult(void){
            getRollNum();
            getMarks();
            cout << "The percentage of your result are: " << (maths + physics)/2 << endl;
        }
};

int main() {
    Percentage sajed;
    sajed.setRollNum(518);
    sajed.setMarks(94.0, 90.0);
    sajed.showTheResult();
}