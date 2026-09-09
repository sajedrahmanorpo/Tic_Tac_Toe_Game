#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums(4);
    for (int i = 0; i < 4; ++i)
    {
        cin >> nums[i];
    }

    // Sort the numbers to easily find the largest (a+b+c)
    sort(nums.begin(), nums.end());
    int total = nums[3]; // a + b + c is the largest

    // The other three numbers are a+b, a+c, b+c
    int a = total - nums[2]; // nums[2] is b + c
    int b = total - nums[1]; // nums[1] is a + c
    int c = total - nums[0]; // nums[0] is a + b

    cout << a << " " << b << " " << c << endl;

    return 0;
}