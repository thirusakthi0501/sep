
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main() {
   char a[100],w[100],p[100];
   int n=0,m=0,x=0,c=0;
   scanf("%[^\n]s",a);
   for(int e=strlen(a)-1;e>=0;e--){
       if(a[e]==' ')
       break;
       else{
       n+=1;
       p[c++]=a[e];
       }
   }
   for(int e=0;e<strlen(a);e++){
       if(a[e]==' ')
       break;
       else{
           w[x++]=a[e];
       m+=1;
       }
   }
  
   for(int e=c-1;e>=0;e--){
       printf("%c",p[e]);
   }
   for(int e=m;e<strlen(a)-n;e++){
       printf("%c",a[e]);
   }
   for(int e=0;e<x;e++){
       printf("%c",w[e]);
   }
 
   
}
