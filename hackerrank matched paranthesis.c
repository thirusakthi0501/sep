/*A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].

Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {}, and ().

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].

By this logic, we say a sequence of brackets is balanced if the following conditions are met:

It contains no unmatched brackets.
The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.
Given  strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, return YES. Otherwise, return NO.

Function Description

Complete the function isBalanced in the editor below.

isBalanced has the following parameter(s):

string s: a string of brackets
Returns

string: either YES or NO
Input Format

The first line contains a single integer , the number of strings.
Each of the next  lines contains a single string , a sequence of brackets.

Constraints

, where  is the length of the sequence.
All chracters in the sequences ∈ { {, }, (, ), [, ] }.
Output Format

For each string, return YES or NO.

Sample Input

STDIN           Function
-----           --------
3               n = 3
{[()]}          first s = '{[()]}'
{[(])}          second s = '{[(])}'
{{[[(())]]}}    third s ='{{[[(())]]}}'
Sample Output

YES
NO
YES
Explanation

The string {[()]} meets both criteria for being a balanced string.
The string {[(])} is not balanced because the brackets enclosed by the matched pair { and } are not balanced: [(]).
The string {{[[(())]]}} meets both criteria for being a balanced string.
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ad 5
int arr[ad];
int top=-1;
int iso(char p){
    return (p=='('||p=='{'||p=='[');
}
int isc(char p){
    return (p==')'||p==']'||p=='}');
}
int ism(char o,char p){
    return (o=='('&&p==')'||o=='['&&p==']'||o=='{'||p=='}');
}
int sw(char q[]){
    for(int e=0;e<strlen(q);e++){
        if(iso(q[e]))
        arr[++top]=q[e];
        else if(isc(q[e])){
            if(top==-1&&!ism(q[top],q[e])){
                return 0;
            }
        top--;
        }
    }
    return (top==-1);
}
int main(){
    int j,g=0;
    scanf("%d",&j);
    int y[j];
    for(int e=0;e<j;e++){
        char t[100];
        top=-1;
        scanf("%s",t);
        int s=sw(t);
        if(s)
        y[g++]=1;
        else
        y[g++]=0;
    }
    for(int e=0;e<g;e++){
        if(y[e]==1)
        printf("YES\n");
        else
        printf("NO\n");
    }
    
}
