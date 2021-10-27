#include <stdio.h>

int main() {
   int a, b;
   char c;

   scanf("%d %c %d", &a, &c, &b);
   if (c == '-') {
	   printf("%d\n", a - b);
   }

   if (c == '+') {
	   printf("%d\n", a + b);
   }
   
   if (c == '*') {
	   printf("%d\n", a * b);
   }

   if (c=='/'){
      printf("%d\n",a/b);
   }

   if(c=='P'){
      int ans=1;
      for(int i=1;i<=b;i++){
         ans*=a--;
      }
      printf("%d\n",ans);
   }
   return 0;
}
