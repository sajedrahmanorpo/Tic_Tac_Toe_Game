#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int size = 5;
    // int marks[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> marks[i];
    // }
    // cout << "Marks down bellow" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << marks[i] << endl;
    // }

    // Find the smallest/largest number
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }

    cout << "Smallest = " << smallest << endl;
    return 0;
}