#include <bits/stdc++.h>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector <int> result;
    int aPoints = 0, bPoints = 0;
    for (int i = 0; i < a.size(); i++){
        if (a[i] > b[i]){
            aPoints++;
        }
        else if (a[i] < b[i]){
            bPoints++;
        }
    }
    result.push_back(aPoints);
    result.push_back(bPoints);
    
    return result;

}

int main()
{
    vector<int> a(3);
    int c, d;

    for (int i = 0; i < 3; i++) {
        cin >> c;
        a.push_back(c);
        }

    vector<int> b(3);

    for (int i = 0; i < 3; i++) {
        cin >> d;
        b.push_back(d);
    }

    vector<int> result = compareTriplets(a, b);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
