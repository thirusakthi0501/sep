/*
there are n stone on a table in the row,each of them are red,blue,green,count the min number of stones to take from the table so that any two neighbouring stoneshad diff colors .stones in a row re considered neighbouring if there are no other stones bet them 
input :
3 
RRG 
output:1
input :
6
RRRBGR
  */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    char s[n+1];
    scanf("%s", s); 
    int count = 0; 
    for(int i = 1; i < n; i++) {
        if(s[i-1] == s[i]) {
            count++; 
        }
    }
    
    printf("%d\n", (n-count)/2);
    
    return 0;
}
