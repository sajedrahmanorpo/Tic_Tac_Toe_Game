#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int sumOfTwo(int a, int b)
// {   
//     cout << "Using function with 2 arguments" << endl;
//     return a + b;
// }

// int sumOfThree(int a, int b, int c)
// {   
//     cout << "Using function with 3 arguments" << endl;
//     return a + b + c;
// }

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.1416 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return(a * a * a);
}

// Rectunguker box
int volume(int l, int b, int h){
    return(l * b * h);
}


int main()
{

    // cout << "The sum of two numbers: " << sumOfTwo(2, 3) << endl;
    // cout << "The sum of three numbers: " << sumOfThree(2, 3, 3) << endl;
    cout << "The volume of two numbers: " << volume(2, 3) << endl;

    return 0;
}