#include <bits/stdc++.h>
using namespace std;

// void printNum(int n){
//     if(n==1){
//         cout << "1\n";
//         return;
//     }
//     cout << n << " ";
//     printNum(n-1);
// }
// int main(){
//     printNum(4);
//     return 0;
// }


// int isFactorial(int n){
//     if(n==0){
//         return 1;
//     }
//     return n * isFactorial(n-1);
// }
// int main(){
//     cout << isFactorial(5) << endl;
// } 


// int sumNum(int n){
//     if(n==1)
//         return 1;
//     return n + sumNum(n-1);
// }
// int main(){
//     cout << sumNum(5) << endl;
// }


// int fibonacciNum(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//    return fibonacciNum(n-1)+fibonacciNum(n-2);
// }
// int main(){
//     cout << fibonacciNum(6) << endl;
// }


// bool isSorted(vector<int> arr, int n){
//     if(n==0 || n==1){
//         return true;
//     }
//     return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
// }
// int main(){
//     vector<int> arr = {1, 2, 3, 4, 5};
//     cout << isSorted(arr, arr.size());
// }


int binSearch(vector<int> arr, int tar, int st, int end){
    if(st <= end){
        int mid = st + (end-st) / 2;

        if(arr[mid] == tar) return mid;
        else if(arr[mid] <= tar){
            return binSearch(arr, tar, mid+1, end);   
        }else{
            return binSearch(arr, tar, st, mid-1);
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-1, 0, 8, 10, 26, 88};
    int tar = 0;
    cout << binSearch(arr, tar, 0, arr.size()-1);
}