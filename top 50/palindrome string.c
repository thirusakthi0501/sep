#include <stdio.h>
#include<string.h>

void  main()
{
    char a[100];
    scanf("%s",a);
    int w=strlen(a),m=0;
    for(int e=0;e<strlen(a);e++){
        if(a[e]!=a[w-e-1]){
            m=1;
            break;
        }
    }
    if(m)
    printf("no");
    else
    printf("Yes");
}
