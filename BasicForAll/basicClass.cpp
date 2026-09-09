#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    double cgpa;

    // void getFunction(int a, double b){
    //     roll = a;
    //     cgpa = b;
    // }

    Student(int x, double y){ //we use here constructor
        roll = x;
        cgpa = y;
    }

    Student(){ // default constructor hasn't any parameters
        cout << "Default constructor"<< endl;
    }

    void display(){
        cout <<"The roll number is: " << roll << " and the cgpa is: " << cgpa << endl;
    }
};

int main(){
    Student Ovi;
    Student sajed(58, 78.99);
    sajed.display();
    return 0;
}