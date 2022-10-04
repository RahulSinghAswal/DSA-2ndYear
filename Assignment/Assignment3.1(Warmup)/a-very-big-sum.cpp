#include <bits/stdc++.h>

using namespace std;

long aVeryBigSum(vector<long> ar) {
    long sum = 0;
    for (int i = 0; i < ar.size(); i++){
        sum += ar[i];
        }
    return sum;
}

int main()
{
    int n, a;
    cin >> n;
    vector <long> ar;
    for (int i = 0; i< n; i++){
        cin >> a;
        ar.push_back(a);
    }
    
    long result = aVeryBigSum(ar);
    cout << result;
    return 0;
}
