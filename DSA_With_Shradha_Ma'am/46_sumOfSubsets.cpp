#include <bits/stdc++.h>
using namespace std;

void getSumOfSubsets(vector<int>& arr, int idx, int sum, int trg, vector<int>& subset, vector<vector<int>>& ans){
    if(sum == trg){
        ans.push_back(subset);
        return;
    }
    if(idx == arr.size() || sum > trg){
        return;
    }

    subset.push_back(arr[idx]);
    getSumOfSubsets(arr, idx + 1, sum + arr[idx], trg, subset, ans);
    subset.pop_back();
    getSumOfSubsets(arr, idx + 1, sum, trg, subset, ans);

}

int main(){
    vector<int> arr = {2, 4, 5, 7};
    int trg = 7;
    vector<int> subset;
    vector<vector<int>> ans;

    getSumOfSubsets(arr, 0, 0, trg, subset, ans);

    for(auto s: ans){
        cout << "[ ";
        for(auto val: s){
            cout << val << " ";
        }
        cout << "]\n";
    }
    return 0;
}