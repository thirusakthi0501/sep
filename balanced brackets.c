//[[]],(([[]])),()[] valid

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 1000
int iso(char l){
    return (l=='('||l=='['||l=='{');
}
int isc(char l){
    return (l==')'||l==']'||l=='}');
}
int mis(char l,char k){
    return l=='('&& k==')'||l=='['&& k==']'||l=='{'&&k=='}';
}
int bal(char p[]){
    char m[100];
    int top=-1,y=strlen(p);
    for(int t=0;t<y;t++){
        if(iso(p[t])){
            m[++top]=p[t];
        }
        else if(isc(p[t])){
            if(top==-1 || !mis(p[top],p[t])){
                return 0;
            }
            top-=1;
        }
    }
    return (top==-1);
}

int main() {
    char e[MAX];
    scanf("%s",e);
    int a =bal(e);
    if(a)
    printf("True");
    else
    printf("false");
    return 0;
}
