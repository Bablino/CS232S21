#include <stdio.h>

int main(int argc, char *argv[]) {

   char str[10090];
   int ch, n = 0;

   while ((ch = getchar()) != EOF && n < 1000) {
      str[n] = ch;
      ++n;
   }
   for (int i = 0; i < n; ++i)
  {
    if(str[i]<='0'+9)
      putchar(str[i]);
    else 
      putchar(str[i]&'_');
  }

   return 0;

}

