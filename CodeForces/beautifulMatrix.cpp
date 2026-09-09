#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, cols;
    int matrix[7][7];

    for (int i = 0; i < 7; ++i)
    {
        for (int j = 0; j < 7; ++j)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                rows = i;
                cols = j;
            }
        }
    }

    int moves = abs(rows - 3) + abs(cols - 3);
    cout << moves << endl;

    return 0;
}