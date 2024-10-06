#include <stdio.h>
#include<string.h>

void  main()
{
    char a[100];
    scanf("%s",a);
    int w=strlen(a),p[26]={0};
    for(int e=0;e<w;e++){
        p[a[e]-'a']++;
    }
    for(int e=0;e<w;e++){
        printf("%c:%d\n",a[e],p[a[e]-'a']);
    }
}
