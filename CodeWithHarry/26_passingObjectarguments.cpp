#include <bits/stdc++.h>
using namespace std;
// class Complex{
//     int a;
//     int b;
// public:
//     void setData(int v1, int v2){
//         a = v1;
//         b = v2;
//     }

//     void setDataBySum(Complex o1, Complex o2){
//         a = o1.a + o2.a;
//         b = o1.b + o2.b;
//     }
    
//     void printNumber(){
//         cout << "Your complex number is " << a << " + " << b << "i" << endl;
//     }
// };
// int main(){
//     Complex c1, c2, c3;
//     c1.setData(1, 2);
//     c1.printNumber();

//     c2.setData(3, 4);
//     c2.printNumber();

//     c3.setDataBySum(c1, c2);
//     c3.printNumber();
//     return 0;
// }


class Time{
    int hours;
    int minutes;
public:
    void setTime(int a, int b){
        hours = a;
        minutes = b;
    }

    void getTime(){
        cout << hours << " hours and ";
        cout << minutes << " minutes " << "\n";
    }

    void sumOfThem(Time t1, Time t2){
        minutes = t1.minutes + t2.minutes;
        hours = minutes/60;
        minutes = minutes%60;
        hours = hours + t1.hours + t2.hours;
    }
};

int main(){
    Time s1, s2, s3;
    s1.setTime(2, 45);
    s1.getTime();

    s2.setTime(3, 30);
    s2.getTime();

    s3.sumOfThem(s1, s2);
    s3.getTime();
    return 0;
}