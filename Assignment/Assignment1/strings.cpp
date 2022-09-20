// HackerRanker - https://www.hackerrank.com/challenges/c-tutorial-strings/submissions/code/290502485


#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a;
    cin >> b;
    char a0 = a[0];
    
    
    cout << a.size()  << " " << b.size() << endl;
    cout << a + b << endl;
    
    a0 = a[0];
    a[0] = b[0];
    b[0]=  a0;
   
    cout << a << " " << b << endl;
    
    
    return 0;
}

