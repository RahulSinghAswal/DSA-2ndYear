#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
    int countNegative = 0, countPositive = 0, countZero = 0;
    float n  = arr.size();
    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            countPositive++;
        }
        else if (arr[i] < 0){
            countNegative++;
        }
        else {
            countZero++;
        }
    }
    printf("%f\n%f\n%f", countPositive/n, countNegative/n, countZero/n);

}

int main()
{
    int n, a;
    cin >> n;
    vector <int> arr ;
    for (int i = 0; i < n; i++){
        cin >> a;
        arr.push_back(a);
    }
    
    plusMinus(arr);

    return 0;
}
