#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ---> Example 1: Roll number & name
    // pair<int, string> student;
    // student.first = 101;
    // student.second = "Sajed";
    // cout << "ID: " << student.first << ", Name: " << student.second << endl;


    //---> Example 2: Float & char using make_pair()
    // pair<float, char>p;
    // p = make_pair(3.13, 'A');
    // cout << p.first << " " << p.second;


    //---> Example 3: Array of coordinate pairs
    // pair<int, int> arr[3];
    // arr[0] = {1, 2};
    // arr[1] = {3, 4};
    // arr[2] = {5, 6};

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i].first << " " << arr[i].second << endl;
    // }


    //---> Example 4: Nested pair
    // pair<int, pair<int,int>>student = {10,{20,30}};
    // cout << student.first << " " << student.second.second<<endl;

    
    // Example 5: Max height from pair array
    // pair<int, int>arr[3]={{170, 60}, {180, 75}, {165, 55}};
    // // int maxHeight = INT_MIN;
    // int minHeight = INT_MAX;
    // for (int i = 0; i < 3; i++)
    // {
    //     // maxHeight = max(maxHeight, arr[i].first);
    //     minHeight = min(minHeight, arr[i].first);
    // }
    // cout << "Max Height: " << minHeight << endl;


    // Example 6: Find the person with minimum weight
    // pair<int, int>pepole[4]={{170, 60}, {180, 75}, {165, 55}, {175, 65}};
    // int minWeight = INT_MAX;
    // int minHeight = INT_MAX;
    // for (int i = 0; i < 4; i++)
    // {
    //     if(pepole[i].second < minWeight){
    //         minWeight = pepole[i].second;
    //         minHeight = pepole[i].first;
    //     }
    // }
    // cout << "The person with minimum weight: " << minWeight << endl;
    // cout << "The person with minimum height: " << minHeight << endl;


    // Task 3: Swap weight of tallest and shortest person
    pair<int, int> people[3]={{160, 50}, {180, 70}, {170, 60}};
    int tallestHeight = 0;
    int shortestHeight = 0;
    for (int i = 0; i < 3; i++)
    {
        if(people[i].first > people[tallestHeight].first) tallestHeight = i;
        if(people[i].first < people[shortestHeight].first) shortestHeight = i;
    }
    
    return 0;
}