/*
  Void *ReplaceCharacter(Char str[], int n, char ch1, char ch2);

The function accepts a string  ‘ str’ of length n and two characters ‘ch1’ and ‘ch2’ as its arguments . Implement the function to modify and return the string ‘ str’ in such a way that all occurrences of ‘ch1’ in original string are replaced by ‘ch2’ and all occurrences of ‘ch2’  in original string are replaced by ‘ch1’.

Assumption: String Contains only lower-case alphabetical letters.

Note:

Return null if string is null.
If both characters are not present in string or both of them are same , then return the string unchanged.
Example:

Input:
Str: apples
ch1:a
ch2:p
Output:
paales
  */
  #include <stdio.h>
#include<string.h>

int main()
{
    char q[100],s,d;
    scanf("%s",q);
    scanf(" %c %c",&s,&d);
    for(int e=0;e<strlen(q);e++){
        if(q[e]==s){
            printf("%c",d);
        }
        else if(q[e]==d){
            printf("%c",s);
        }
        else
        printf("%c",q[e]);
    }
}
