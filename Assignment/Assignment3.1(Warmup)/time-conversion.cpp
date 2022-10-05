#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string hr;
    hr = s[0];
    hr += s[1]; 
    int hrs = stoi(hr);
    if(s[8] == 'A'){
        if(hrs <12){
            return s.erase(8);    
        }
        else{
            cout << 0;
            hrs = 0;}
       }
    else if(s[8] == 'P' && hrs != 12){
        hrs += 12;
    }
    hr = to_string(hrs);
    s.erase(0,2); 
    return hr + s.erase(6);
}

int main()
{
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << "\n";

    return 0;
}
