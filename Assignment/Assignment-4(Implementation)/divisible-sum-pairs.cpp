#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int pairs = 0;
    for (int i = 0; i < ar.size()-1; i++){
        for (int j = i+1; j < ar.size(); j++){
                if ((ar[i]+ar[j])%k == 0){
                pairs ++;
                
            
        }
    }}
    return pairs;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = divisibleSumPairs(n, k, arr);

    cout << result << "\n";

    return 0;
}
