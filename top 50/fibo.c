#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s=1,d=0,f=s+d,q,w;
    printf("%d %d ",d,s);
    for(int e=3;e<a;e++){
        q=w;
        w=f;
        f=q+w;
        printf("%d ",f);
    }
}
