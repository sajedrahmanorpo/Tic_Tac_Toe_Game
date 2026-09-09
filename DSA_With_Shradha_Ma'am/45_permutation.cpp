#include <bits/stdc++.h>
using namespace std;

void getPermutation(vector<string>& arr, int idx, vector<vector<string>>& ans){
    if(idx == arr.size()){
        ans.push_back(arr);
        return;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[idx], arr[i]);
        getPermutation(arr, idx+1, ans);
        swap(arr[idx], arr[i]);
    }
}
int main(){
    vector<string> arr = {"a", "b", "c"};
    vector<vector<string>> ans;
    getPermutation(arr, 0, ans);

    for(auto seq: ans){
        for(auto s: seq){
            cout << s;
        }
        cout << endl;
    }
    return 0;
}