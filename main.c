#include <stdio.h>

int main() {
   int a, b;
   char c;

   scanf("%d %c %d", &a, &c, &b);
   if (c == '-') {
	   printf("%d\n", a - b);
   }

	return 0;
}
