// HackerRanker - https://www.hackerrank.com/challenges/playing-with-characters/submissions/code/291417069

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch, s[100], sen[200];
    scanf("%c", &ch);
    scanf("%s", &s);
    
    scanf(" %[^\n]%*c", &sen); 
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
     
    return 0;
}
