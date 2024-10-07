/*
Int OperationChoices(int c, int n, int a , int b )

The function accepts 3 positive integers ‘a’ , ‘b’ and ‘c ‘ as its arguments. Implement the function to return.

( a+ b ) , if c=1
( a – b ) , if c=2
( a * b ) ,  if c=3
(a / b) ,  if c =4
Assumption : All operations will result in integer output.

Example:

Input
c :1
a:12
b:16
Output:
Since ‘c’=1 , (12+16) is performed which is equal to 28 , hence 28 is returned.
Sample Input

 c : 2

 a : 16

 b : 20

Sample Output

-4
  */
#include <stdio.h>
#include<string.h>

int main()
{
    int a,s,d;
    scanf("%d %d %d",&a,&s,&d);
    switch(a){
        case 1:
        printf("%d",s+d);
        break;
        case 2:
        printf("%d",s-d);
        break;
        case 3:
        printf("%d",s*d);
        break;
        case 4:
        printf("%d",s/d);
        break;
    }
}
