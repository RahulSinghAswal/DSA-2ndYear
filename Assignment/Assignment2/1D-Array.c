// HackerRanker - https://www.hackerrank.com/challenges/1d-arrays-in-c/submissions/code/291807607

#include <stdio.h>

int main() {  
    int n, sum = 0;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
        sum = sum + A[i];
    }
    printf("%d", sum);
      
    return 0;
}


