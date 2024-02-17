#include <stdio.h>

void arnab(int xyz)
 {
     for(int i=0;i<xyz;i++)
      {
          printf("%d",i);
      }
 }
int main()
 {
     int a;
     scanf("%d",&a);
     arnab(a);
 }
