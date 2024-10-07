/*def ProductSmallestPair(sum, arr)

The function accepts an integers sum and an integer array arr of size n. Implement the function to find the pair, (arr[j], arr[k]) where j!=k, Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair

NOTE

Return -1 if array is empty or if n<2
Return 0, if no such pairs found
All computed values lie within integer range
Example

Input

sum:9

size of Arr = 7

Arr:5 2 4 3 9 7 1

Output

2

Explanation

Pair of least two element is (2, 1) 2 + 1 = 3 < 9, Product of (2, 1) 2*1 = 2. Thus, output is 2

Sample Input

sum:4

size of Arr = 6

Arr:9 8 3 -7 3 9

Sample Output

-21
*/
#include <stdio.h>

int main()
{
    int a,s[100],d,m,k;
    scanf("%d %d",&a,&d);
    for(int e=0;e<d;e++){
        scanf("%d",&s[e]);
    }
    k=m=9999;
    for(int e=0;e<d;e++){
        if(s[e]<k){
        m=k;
        k=s[e];
        }
        else if(s[e]<m && s[e]!=k)
        m=s[e];
    }
    if(m*k<d)
    printf("the ans :%d ",m*k);
    else
    return 0;
}
