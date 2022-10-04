#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for (int i = 0; i < ar.size(); i++){
        sum += ar[i]; 
    }
    return sum;
}

int main(){
    int n, a;
    cin >> n;
    vector <int> ar;
    for (int i = 0; i < n; i++){
        cin >> a;
        ar.push_back(a);
    }
    cout << simpleArraySum(ar) << endl;
    return 0;
        
}
