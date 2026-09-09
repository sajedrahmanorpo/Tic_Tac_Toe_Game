#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n = 5;
    // int a[] = {1, 2, 3, 4, 5};

    // for (int st = 0; st < n; st++)
    // {
    //     for (int end = 0; end < n; end++)
    //     {
    //         for (int i = st; i <= end; i++)
    //         {
    //             cout << a[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }


    int n = 7;
    int a[] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int currentSum = 0;
        for (int end = 0; end < n; end++)
        {
            currentSum += a[end];
            maxSum = max(currentSum, maxSum);
            if(currentSum < 0){
                currentSum = 0;
            }
        }
        cout << endl;
    }
    cout << maxSum << endl;
    return 0;
}