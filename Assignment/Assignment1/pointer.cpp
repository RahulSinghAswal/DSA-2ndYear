// HackerRanker - https://www.hackerrank.com/challenges/c-tutorial-pointer/submissions/code/290271034


#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int atemp;   
    atemp = *a + *b;
    if (*a > *b){
        *b = *a - *b;
    }
    else {
        *b = *b - *a;
    }
    *a = atemp; 
     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

