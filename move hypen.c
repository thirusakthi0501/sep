/*
char*MoveHyphen(char str[],int n);

The function accepts a string “str” of length ‘n’, that contains alphabets and hyphens (-). Implement the function to move all hyphens(-) in the string to the front of the given string.

NOTE:- Return null if str is null.

Example :-

Input:
str.Move-Hyphens-to-Front
Output:
—MoveHyphenstoFront
Explanation:-

The string “Move-Hyphens -to-front” has 3 hyphens (-), which are moved to the front of the string, this output is “— MoveHyphen”

Sample Input

Str: String-Compare
Sample Output-

-StringCompare
  */
#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],m[100];
    int i=0;
    scanf("%s",a);
    for(int e=0;e<strlen(a);e++){
        if(a[e]=='-')
        m[i++]=a[e];
    }
    for(int e=0;e<strlen(a);e++){
        if(a[e]!='-')
        m[i++]=a[e];
    }
    for(int e=0;e<strlen(a);e++){
        printf("%c",m[e]);
    }
}
