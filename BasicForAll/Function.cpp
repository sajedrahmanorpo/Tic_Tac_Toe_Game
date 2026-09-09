#include <iostream>
#include <string>
using namespace std;
// void myFunction(char name[], int age){
//     printf("Hello %s.\nYou are %d years old??", name, age);
// }

// void myFunction(string fname){
//     cout << fname << "Rahman\n";
// }

// void myFunction(string name, int age){
//     cout << name << " Sajed. " << age << "years old. \n";
// }

// void printVal(int num, float real){
//     cout << num << endl << real << endl;
// }
// int main(){
// myFunction("Orpo", 21);
// int a = 3;
// printVal(3, 1.5);
//     return 0;
// }

// no arguement, no return_value;
// void land();

// int main(){
//     land();
//     return 0;
// }

// void land(){
//     cout << "Ami valo!";
// }

// no return_value with arguement;
// void sum(int a, int b);

// int main(){
//     cout << "The sum: ";
//     sum(4, 5);
// }

// void sum(int a, int b){
//     cout << a+b;
// }

// void hello(){
//     cout << "Whats upp??" << endl;
// }

// int square(int x){
//     return x * x;
// }

// int main(){
//     hello();

//     int result = square(5);
//     cout << result;
//     return 0;
// }


// void greet(){
//     cout << "Welcome to C++ Programming!" << endl;
// }

// int multiply(int a, int b){
//     return a * b;
// }

// int main(){
//     greet();

//     int result = multiply(5, 4);
//     cout << "Your result is: " << result << endl;
//     return 0;
// }


// void printNum(int n){
//     cout << n << endl;
// }

// int main(){
//     int num1 = 10;
//     int num2 = 30;

//     printNum(num1);
//     printNum(num2);
// }

// pass by value
// void change(int a){
//     a = 22;
// }

// int main(){
//     int x = 5;

//     change(x);
//     cout << x;
// }

// pass by reference
void change(int* a){
    *a = 22;
}

int main(){
    int x = 5;

    change(&x);
    cout << x;

}