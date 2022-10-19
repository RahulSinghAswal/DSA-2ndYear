#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector<int> a, vector<int> b) {
    vector<int> arr;
    int count = 0;
    for (int i = a[a.size() - 1]; i <= b[0]; i++) {
        for (int j = 0; j < a.size(); j++) {
            if(i % a[j] == 0){
                arr.push_back(i);
            }
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if(b[j] % arr[i] == 0){
                count++;
            }
        }

    }

    return count;

}

int main()
{
    int m, n, a, b;
    cin >> m >> n;

    vector<int> arr(m);
    vector<int> brr(n);

    for (int i = 0; i < m; i++) {
        cin >> a;
        arr[i] = a;
    }

    for (int j = 0; j < n; j++) {
        cin >> b;
        brr[j] = b;
    }

    int total = getTotalX(arr, brr);

    cout << total << "\n";
    return 0;
}