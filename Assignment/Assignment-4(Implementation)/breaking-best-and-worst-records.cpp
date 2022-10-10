#include <bits/stdc++.h>

using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    vector<int> arr;
    int count_highest_score = 0, count_least_score = 0;
    int highest_score = scores[0],least_score = scores[0];
    for (int i = 1; i < scores.size(); i++){
        if (scores[i] > highest_score){
            count_highest_score ++;
            highest_score = scores[i];
            
        }
        else if (scores[i] < least_score){
            count_least_score ++;
            least_score = scores[i];
        }
        
    }
    arr.push_back(count_highest_score);
    arr.push_back(count_least_score);
    return arr;

}

int main()
{
    int n;
    cin >> n;
    vector<int> scores(n);

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
        
    }

    vector<int> result = breakingRecords(scores);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
