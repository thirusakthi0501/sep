#include<stdio.h>
int main(){
    int a,s;
    scanf("%d %d",&a,&s);
    int r=((a<s)?a:s);
    while(r>0){
        if(a%r==0 && s%r==0)
        break;
        r--;
    }
    printf("%d ",(a*s)/r);
}
