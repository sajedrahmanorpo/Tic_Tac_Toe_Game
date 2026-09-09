#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Basic intro of constructor
// class myClass{      // The class
//     public:         // Access specifier
//     myClass(){      // Constructor
//         cout << "Hello World!";
//     }
// };

// int main(){
//     myClass myObj;  // Create an object of MyClass (this will call the constructor)
    
//     return 0;
// }


// Constructor with Parameters
// class Car{
//     public:
//     string brand;
//     string model;
//     int year;
//     Car(string x, string y, int z){   // Constructor with parameters
//         brand = x;
//         model = y;
//         year = z;
//     }
// };

// int main(){
//     // Create Car object and call the constructor with different values
//     Car carObj1("BMW","X5", 1990);
//     Car carObj2("Ford","Mustang", 1969);

//     // print values
//     cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
//     cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
    
//     return 0;
// }


// Constructor Defined Outside the Class
class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z); // Constructor declaration
    
};

// Constructor definition outside the class
Car :: Car(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
    }

int main(){
    // Create Car object and call the constructor with different values
    Car carObj1("BMW","X5", 1990);
    Car carObj2("Ford","Mustang", 1969);

    // print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
    
    return 0;
}