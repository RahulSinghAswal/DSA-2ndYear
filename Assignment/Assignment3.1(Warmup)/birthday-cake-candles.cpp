#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int maxHeight, count =0;
    maxHeight = *max_element(candles.begin(), candles.end());
    for (int i = 0; i < candles.size(); i++){
        if (candles[i] == maxHeight){
            count++;
        }
    }
    
    return count;
}

int main()
{
    

    int candles_count, a;
    
    cin >> candles_count;
    
    vector <int> candles;
    
    for (int i = 0; i < candles_count; i++){
        cin >> a;
        candles. push_back(a);
        
    }
    int result = birthdayCakeCandles(candles);
    
    cout << result << endl;

    return 0;
}
