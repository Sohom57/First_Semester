#include <stdio.h>

int main() {
   int t;
   scanf("%d", &t);

   if (((t % 4 == 0) && (t % 100!= 0)) || (t%400 == 0))
      printf("%d is a leap-year", t);
   else
      printf("%d is not a leap-year", t);

   return 0;
}
