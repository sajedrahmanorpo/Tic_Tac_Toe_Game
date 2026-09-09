#include <bits/stdc++.h>
using namespace std;
    // int main(){
    // int marks[5]={99, 100, 94, 36, 88};
    // int size=5;
    // int marks[5];

    // for (int i = 0; i < size; i++)
    // {
    //     cin >> marks[i];
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << marks[i] << " ";
    // }
    // cout << endl;

    // smallest value
    // int size = 6;
    // int nums[] = {5, 15, 22, 1, -15, 24};

    // int smallest = INT_MAX;
    // int largest = INT_MIN;
    // int smallestIndex = -1;
    // int largestIndex = -1;

    // for (int i = 0; i < size; i++)
    // {
        // smallest = min(nums[i], smallest);
        // largest = max(nums[i], largest);
        
        // if (nums[i] < smallest)
        // {
        //     smallest = nums[i];
        //     smallestIndex = i;
        // }

        // if (nums[i] > largest)
        // {
        //     largest = nums[i];
        //     largestIndex = i;
        // }
    //}
    // cout << "Smallest value: " << smallest << endl;
    // cout << "Smallest value index: " << smallestIndex << endl;

    // cout << "Largest value: " << largest << endl;
    // cout << "Largest value index: " << largestIndex << endl;


    //Linear Search

    // int linearSearch(int arr[], int sz, int target){
    //     for (int i = 0; i < sz; i++)
    //     {
    //         if(arr[i]==target) //found
    //             return i;
    //     }
    //     return -1; // not found   
    // }

    // int main(){
    // int arr[]={4,2,7,8,1,2,5};
    // int sz=7;
    // int target=10;
    
    // cout << linearSearch(arr, sz, target) << endl;


    // Reverse Array
    // void revArray(int arr[], int sz){
    //     int start=0, end=sz-1;
    //     while (start < end)
    //     {
    //         swap(arr[start], arr[end]);
    //         start++; end-- ;
    //     }
        
    // }
    // int main(){
    //     int arr[]={1,2,3,4,5,6,7}; int sz = 7;

    //     revArray(arr, sz);

    //     for (int i = 0; i < sz; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }





    //HomeWork
    //sumOfArrayElement
    // void sumOfArray(int arr[], int sz){
    //     int sum=0;
    //     for (int i = 0; i < sz; i++)
    //     {
    //         sum+=arr[i];
    //     }
    //     cout << sum << endl;
    // }
    // int main(){
    //     int arr[]={1,2,3,4,5}; //sum=15
    //     int sz=5;
    //     sumOfArray(arr, sz);

    //sawpTheMaxAndMin
    void swapTheMaxAndMin(int arr[], int sz){
        int maxNum = INT_MIN;
        int minNum = INT_MAX;
        int maxIndex=0;
        int minIndex=0;

        for (int i = 0; i < sz; i++)
        {
            if(arr[i] > maxNum){
                maxNum=arr[i];
                maxIndex=i;
            }

            if(arr[i] < minNum){
                minNum=arr[i];
                minIndex=i;
            }
        }
        swap(arr[maxIndex], arr[minIndex]);
    }
    int main(){
        int arr[]={2,5,9,1,-6};
        int sz=5;

        swapTheMaxAndMin(arr, sz);
        
        cout << "Array after swapping min & max: ";
        for (int i = 0; i < sz; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        
    return 0;
}