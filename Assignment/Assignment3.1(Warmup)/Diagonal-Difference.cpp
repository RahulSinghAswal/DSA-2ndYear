#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    
    int leftDiagonal = 0, rightDiagonal = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++){
        leftDiagonal += arr[i][i];
        rightDiagonal += arr[i][n-i-1];
    }

    return abs(leftDiagonal - rightDiagonal);
    return 0;

}

int main()
{
    int n, a;
    cin >> n;

    vector<vector<int>> arr;

    for (int i = 0; i < n; i++) {
        vector<int> ar;

        for (int j = 0; j < n; j++) {
            cin >> a;
            ar.push_back(a);
        }
        arr.push_back(ar);
    }
    
    int result = diagonalDifference(arr);


    cout << result << endl;

    return 0;
}
