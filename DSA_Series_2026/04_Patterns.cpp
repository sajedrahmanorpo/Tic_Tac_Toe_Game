#include <bits/stdc++.h>
using namespace std;

// Square Pattern
//  int main(){
//      int n;
//      cout << "Enter N: ";
//      cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "*" << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// int main(){
//     int n = 6;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// int main(){
//     int n=3;
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << num;
//             num++;
//         }
//         cout << endl;

//     }

//     return 0;
// }

// triangel pattern
//  int main(){
//      int n;
//      cout << "Enter N: ";
//      cin >> n;

//     char ch = 'A';

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= i+1; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// int main(){
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         // for (int j = 1; j < i+1; j++)
//         for(int j = i+1; j >= 1; j--)
//         {
//             cout << j;
//         }
//     cout << endl;
//     }

//     return 0;
// }

// Floyd's Triangle
//  int main(){
//      int n = 4;
//      char ch = 'A';
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = 0; j < i+1; j++)
//          {
//              cout << ch << " ";
//              ch++;
//          }
//      cout << endl;
//      }

//     return 0;
// }

// Inverted Triangle
// int main(){
//     int n = 4;
//     char ch = 'A';
//     for (int  i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n-i; j++)
//         {
//             cout << ch;
//         }
//         cout << endl;
//         ch++;
//     }

//     return 0;
// }

// Pyramid pattern
//  int main(){
//      int n = 10;
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = 0; j < n-i-1; j++)
//          {
//              cout << " ";
//          }
//          for (int j = 1; j <= i+1; j++)
//          {
//              cout << j;
//          }
//          for (int j = i; j > 0; j--)
//          {
//              cout << j;
//          }
//          cout << endl;
//      }

//     return 0;
// }

// Hollow diamond pattern
// int main()
// {
//     int n = 4;
//     // top part
//     for (int i = 0; i < n; i++)
//     {
//         // spaces
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         // stars
//         cout << "*";

//         if (i != 0)
//         {
//             // spaces
//             for (int j = 0; j < (2 * i - 1); j++)
//             {
//                 cout << " ";
//             }
//             // stars
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // bottom part
//     for (int i = 0; i < n - 1; i++)
//     {
//         // spaces
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << " ";
//         }

//         // stars
//         cout << "*";

//         if (i != n - 2)
//         {
//             // speaces
//             for (int j = 0; j < 2 * (n - i) - 5; j++)
//             {
//                 cout << " ";
//             }
//             cout << "*";
//         }
//     }
//     cout << endl;

//     return 0;
// }

//Butterfly Pattern
int main(){
    int n = 10;
    //Top Part
    for (int i = 0; i < n; i++)
    {   
        //stars
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        //spaces
        if(i != n){
            for (int j = 0; j < n-i-1; j++)
            {
                cout << " ";
            } 
        }
        //spaces
        if(i != n){
            for (int j = 0; j < n-i-1; j++)
            {
                cout << " ";
            }
        }
        //stars
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //Bottom Part
    for (int i = 0; i < n; i++)
    {
        //stars
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        //spaces
        if(i!=0){
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        }
        //spaces
        if(i!=0){
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        }
        //stars
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    

    return 0;
}