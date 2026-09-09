#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void change(int *p) {
//     *p = 100;
// }

void sum(int *a, int *b){
    int result = *a + *b;
    cout << "Sum = " << result;
}
int main(){
    int x = 20;
    int y = 10;
    sum(&x, &y);


    // int x = 10;
    // change(&x);  // &x = address of x
    // cout << x;   // Output: 100 (value changed)


    // int a = 10;
    // int *p = &a;

    // cout << "a = " << a << endl;
    // cout << "Address of a = " << &a << endl;
    // cout << "Pointer p = " << p << endl;
    // cout << "Value of using pointer = " << *p << endl;

    // int arr[5] = {10, 20, 30, 40, 50};
    // int *p = arr;

    // cout << "Array = " << *(p + 2) << endl; // arr[0] index's value

        // for (int i = 0; i < 5; i++)
        // {
        //  cout << *(p + i) << " ";
        // }

    // int arr[] = {10, 20, 30, 40, 50, 60};
    // int *p = arr;

    // cout << "Even-indexed elements:\n";
    // for (int i = 1; i < 6; i += 2)
    // {
    //     cout << *(p + i) << " ";
    // }
   
    return 0;
}