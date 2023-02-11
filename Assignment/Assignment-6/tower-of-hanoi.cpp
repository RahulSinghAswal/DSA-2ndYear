#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void towerOfHanoi(int n, char from_peg, char using_peg,
                char to_peg)
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, from_peg, to_peg, using_peg);
    cout << "Moving ring " << n << " from " << from_peg
        << " to " << to_peg << endl;
    towerOfHanoi(n - 1, using_peg, from_peg, to_peg);
}

int main() {

    int N;
    cin >> N;   
    towerOfHanoi(N, 'A', 'C', 'B');
    
    return 0;
}
