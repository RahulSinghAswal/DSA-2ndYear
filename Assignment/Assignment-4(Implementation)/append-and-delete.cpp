#include <bits/stdc++.h>

using namespace std;

string appendAndDelete(string s, string t, int k) {
    int common_length = 0;
    
    for (int i = 0; i < max(s.length(), t.length()); i++){
        if (s[i] == t[i]){
            common_length ++;
        }
        else {
            break;
        }
    }
    
    int minOperationsNeeded = (s.length() - common_length) + (t.length() - common_length);
    
    if (s.length() + t.length() <= k){
        return "Yes";
    }
    else if ((k - minOperationsNeeded) >= 0){
        if (((k - minOperationsNeeded) % 2 ) == 0){
        
            return "Yes";
        }
    }
    else if (k < minOperationsNeeded){
        return "No";
    }
    
    return "No";
}

int main()
{
    string s, t;
    int k;
    cin >> s;
    cin >> t;
    cin >> k;
    
    string result = appendAndDelete(s, t, k);

    cout << result << "\n";
    return 0;
}
