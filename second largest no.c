/*
  def LargeSmallSum(arr)

The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest  element from the even positions and second smallest from the odd position of given ‘arr’

Assumption:

All array elements are unique
Treat the 0th position as even
NOTE

Return 0 if array is empty
Return 0, if array length is 3 or less than 3
Example

Input

arr:3 2 1 7 5 4

Output

7

Explanation

Second largest among even position elements(1 3 5) is 3
Second smallest among odd position element is 4
Thus output is 3+4 = 7
Sample Input

arr:1 8 0 2 3 5 6

Sample Output

8
*/
#include <stdio.h>

int main() {
    int q, w[100], p[100], c = 0, v = 0;

    // Input the number of elements
    scanf("%d", &q);
    
    // Read inputs into w and p arrays
    for (int e = 0; e < q; e++) {
        if (e % 2 == 0) {
            scanf("%d", &w[c++]);  // Even index -> w
        } else {
            scanf("%d", &p[v++]);  // Odd index -> p
        }
    }

    // Initialize variables for finding first and second largest in w
    int firstLargestW = -1, secondLargestW = -1;

    // Find first and second largest in w
    for (int e = 0; e < c; e++) {
        if (w[e] > firstLargestW) {
            secondLargestW = firstLargestW;
            firstLargestW = w[e];
        } else if (w[e] > secondLargestW && w[e] != firstLargestW) {
            secondLargestW = w[e];
        }
    }

    // Initialize variables for finding first and second smallest in p
    int firstSmallestP = 101, secondSmallestP = 101;  // Assuming elements are less than 100

    // Find first and second smallest in p
    for (int e = 0; e < v; e++) {
        if (p[e] < firstSmallestP) {
            secondSmallestP = firstSmallestP;
            firstSmallestP = p[e];
        } else if (p[e] < secondSmallestP && p[e] != firstSmallestP) {
            secondSmallestP = p[e];
        }
    }

    // Check if we found valid second largest and second smallest
    if (secondLargestW != -1 && secondSmallestP != 101) {
        printf("%d\n", secondLargestW + secondSmallestP);
    } else {
        printf("0\n");  // Handle cases where there's no valid second largest or second smallest
    }

    return 0;
}
