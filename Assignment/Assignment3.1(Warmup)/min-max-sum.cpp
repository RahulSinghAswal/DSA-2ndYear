#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<long long> arr) {
    long long sum = 0;
    int n = arr.size();
    for (int i = 0; i < arr.size(); i++){
        sum += arr[i];   
    }
    long long minSum = sum - *max_element(arr.begin(), arr.end());
    long long maxSum = sum - *min_element(arr.begin(), arr.end());
    cout << minSum << " " << maxSum ;
}

int main()
{
    long long a;
    vector<long long> arr;
    for (int i = 0; i < 5; i++) {
        cin >> a;
        arr.push_back(a);
    }
    miniMaxSum(arr);

    return 0;
}
