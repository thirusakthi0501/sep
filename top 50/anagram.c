//two strings have same number of letters eg.rescue && secure
#include<string.h>

void  main()
{
    char a[100],z[100];
    int s[26]={0},d[26]={0},c=0;
    scanf("%s",a);
     scanf("%s",z);
    for(int e=0;e<strlen(a);e++){
        s[a[e]-'a']++;
    }
    for(int e=0;e<strlen(z);e++){
        d[z[e]-'a']++;
    }
    for(int e=0;e<26;e++){
        if(s[e]==d[e])
        c+=1;
    }
    if(c==26)
    printf("yes");
    else
    printf("no");
    
}
