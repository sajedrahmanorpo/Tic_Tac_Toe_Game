#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     char ch;
//     cout << "Enter char: ";
//     cin >> ch;

//     if(ch >= 'a' && ch <= 'z'){
//         cout << "Lowercase.\n";
//     } else {
//         cout << "Uppercase.\n";
//     }
//     return 0;
// }

// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         int m = 5;
//         for (int i = 1; i <= 5; i++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
    
// }

// sum of all num 1toN which divisible by 3
// int main(){
//     int n;
//     cout << "Enter your N: ";
//     cin >> n;
//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         if(i%3 == 0){
//             sum += i;
//         }
//     }
//     cout << "Answer: " << sum;   
// }

//factorial of a number N;
int main(){
    int n;
    cout << "Enter the N: ";
    cin >> n;

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Answer: " << fact;
}