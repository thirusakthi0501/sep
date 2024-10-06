#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n=a,q,r=0,t;
    while(n>0){
        q=n%10;
        r=(r*10)+q;
        n/=10;
    }
    printf("%d ",r);
}
