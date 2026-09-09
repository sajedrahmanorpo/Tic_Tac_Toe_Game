#include <bits/stdc++.h>
using namespace std;

// When visibility mode is public
class A
{
public:
    int x;
};

class B : public A
{
public:
    void setData()
    {
        cin >> x;
    }
    void getData()
    {
        cout << "The value of x is: " << x << endl;
    }
};

int main()
{
    B b1;
    b1.setData();
    b1.getData();
    return 0;
}

// When visibility mode is private
//  class A{
//      public:
//          int x;
//  };

// class B : A{
//     public:
//         void setData(int a){
//             x = a;
//         }
//         void getData(){
//             cout << "The value of x is: " << x << endl;
//         }
// };

// int main(){
//     B b1;
//     b1.setData(20);
//     b1.getData();
// }