#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  /* Zero out the array */
  int uppercase=0;
  int lowercase=0;
  int words=0;
  int chars=0;
  int digits=0;
  int space=0;
  int lines=0;
  int len, i;
  char buf[MAX_BUF];
  while(fgets(buf, MAX_BUF, stdin))
  {
    len = strlen(buf);
    i=0;
    do {
        chars++;
        if(buf[i]>='A'&&buf[i]<='Z')
        {
             uppercase++;
        }
        else if(buf[i]>='a'&& buf[i]<='z')
        {
           lowercase++;
        }
        else if(buf[i]>='0'&& buf[i]<='9')
        {
          digits++;
        }
        if(buf[i]==' '|| buf[i]=='\t')
        {
          space++;
          words++;
        }
        if(buf[i]=='\n')
          words++;
        if(buf[i]=='\n')
        {
          lines++;
        }
        len--;
        i++;
    } while (len>0);
  } 
    printf("%d %d %d %d %d %d %d\n", chars, words, lines, space, uppercase, lowercase, digits);
  
}
