#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Create an object called "myObj" and access the attributes:
// class myClass{ // The class
//     public : // Access specifier
//     int myNum; // Attribute
//     string myString;
// };

// int main(){
//     myClass myObj;

//     // Access attributes and set values
//     myObj.myNum = 12;
//     myObj.myString = "Rahman";

//     // Print attributes value
//     cout << "My number: " << myObj.myNum << endl;
//     cout << "my name: " << myObj.myString;
//     return 0;
// }


// Multiple Objects
// class Car{
//     public:
//     string brand;
//     string model;
//     int year;
// };

// int main(){
//     // Create an object of Car
//     Car carObj1;
//     carObj1.brand = "BMW";
//     carObj1.model = "X5";
//     carObj1.year = 1999;

//     // Create another object of Car
//     Car carObj2;
//     carObj2.brand = "Ford";
//     carObj2.model = "Mustang";
//     carObj2.year = 1969;

//     // Print attribute values
//     cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
//     cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
//     return 0;
// }


// Challenge Task
class Book {
    public:
    string title;
    string author;
    int year;
};

int main(){
    
    Book bookObj1;
    bookObj1.title = "Matilda";
    bookObj1.author = "Roald Dahl";
    bookObj1.year = 1988;

    Book bookObj2;
    bookObj2.title = "The Giving Tree";
    bookObj2.author = "Shel Silverstein";
    bookObj2.year = 1964;

    cout << endl;
    
    cout << bookObj1.title << ", " << bookObj1.author << ", " << bookObj1.year << endl;
    cout << bookObj2.title << ", " << bookObj2.author << ", " << bookObj2.year << endl;

    cout << endl;
    return 0;
}