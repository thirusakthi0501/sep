//if 6-->(divisible numbers)1+2+3==6
#include <stdio.h>

void  main()
{
    int a,s=1;
    scanf("%d",&a);
    for(int e=2;e<a;e++){
        if(a%e==0){
            s+=e;
        }
    }
    if(s==a)
    printf("Yes");
    else
    printf("No");
}
