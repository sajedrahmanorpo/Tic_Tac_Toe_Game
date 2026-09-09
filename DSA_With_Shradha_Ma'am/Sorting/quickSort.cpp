#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int idx = st - 1, pivot = arr[end];
    for (int i = st; i < end; i++)
    {
        if(arr[i] <= arr[end]){
            idx++;
            swap(arr[i], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quickSort(vector<int>& arr, int st, int end){
    if(st < end){
    int pivIdx = partition(arr, st, end);
    quickSort(arr, st, pivIdx - 1); 
    quickSort(arr, pivIdx + 1, end); 
    }
}

int main(){
    vector<int> arr = {12, 31, 35, 8, 11, 19, 44};
    quickSort(arr, 0, arr.size() - 1);

    for(auto val: arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}