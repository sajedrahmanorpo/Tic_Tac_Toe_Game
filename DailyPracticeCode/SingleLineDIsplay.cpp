// 
// #include <iostream>
// using namespace std;
// int main(){
//     int A, B;
//     cin >> A >> B;

//     if(A > B){
//         cout << "A is the largest number";
//     } else{
//         cout << "B is the largest number";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    float F, C;
    
    cout << "Asked tempereature in Fahrenheit: ";
    cin >> F;

    C = ((F - 32) * 5 / 9);

    cout << "Display tempereture in Celcious: " << C << endl;
    return 0;
}