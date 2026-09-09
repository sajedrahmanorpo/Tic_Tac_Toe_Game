#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Define a Method/Function Inside the Class
// class myClass{
//     public: // Access specifier
//     void myMethod(){ // Function defiend inside the class
//         cout << "Hello World";
//     }
// };
// int main(){
//     myClass myObj;
//     myObj.myMethod();
//     return 0;
// }


// Define a Method/Function Outside the Class
// class myClass{
//     public:
//     void myFunction(); // Declaration
// };

// // Method/function definition outside the class
// void myClass :: myFunction(){
//     cout << "Hello World";
// }

// int main(){
//     myClass myObj;
//     myObj.myFunction();
//     return 0;
// }


// Parameters
// class Car{
//     public:
//     int speed(int maxSpeed);
// };

// int Car :: speed(int maxSpeed){
//     return maxSpeed;
// }

// int main(){

//     Car myObj;
//     cout << myObj.speed(100);
//     return 0;
// }


// Challenge Task
class Dog{
    public:
    void bark();
};

void Dog :: bark(){
    cout << "Wooof!";
}

int main(){
    Dog myDog;
    myDog.bark();
    return 0;
}