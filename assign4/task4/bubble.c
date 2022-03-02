/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include <stdlib.h>

#define NUM 30   /* number of strings */
#define LEN 1200  /* max length of each string */

int cmp(char* s1, char* s2);
int main()
{
  char * Strings[NUM];
  for(int i=0; i<NUM; i++)
    Strings[i]= malloc(NUM);
  printf("Please enter %d strings, one per line:\n", NUM);
  /* Write a for loop here to read NUM strings.
  
     Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length. However, each 
	 string stored in array Strings must not waste space. That is, only the buffer
	 used by fgets() to temporary store the string read from input stream needs to 
	 be LEN bytes long.  
	 Note that the newline and NULL characters will be included in LEN.
  */
  for(int i=0; i<NUM; i++)
   {
     fgets(Strings[i],LEN,stdin);
   }
  puts("\nHere are the strings in the order you entered:");
  /* Write a for loop here to print all the strings. */
   for(int i=0; i<NUM; i++)
    {
       printf("%s",Strings[i]);
    }
  
  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Your code must meet the following requirements:
        (i) The comparison of two strings must be done by checking them one
            character at a time, without using any C string library functions.
            That is, write your own while/for loop to do this.
  
       (ii) Implement a swap function to swap two strings by swapping pointers
	    without copying any chars.You are not allowed to use any C library 
	    functions in swap.
      (iii) You are allowed to use strlen() to calculate string lengths.
  */
  for(int i=0; i<NUM; i++)
  {
    for(int j=i+1; j<=NUM-1; j++)
    {
       if(cmp(Strings[i],Strings[j])>0)
       {
         char * c= Strings[j];
         Strings[j]=Strings[i];
         Strings[i]=c;
       }
    }
  }
  
  
  /* Output sorted list */
 // puts("\nIn alphabetical order, the strings are:");     
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */
  puts("\nHere are the strings in alphabetical order:");
  for(int i=0; i<NUM; i++)
    {
      printf("%s",Strings[i]);
      free(Strings[i]);
    }
  //cd free(*Strings);
}
int cmp(char* s1, char* s2)
{
  int num=-1;
  int len1= strlen(s1);
  int len2 = strlen(s2);
  int truLen=0;
  if(len1>len2)
    truLen=len1;
  else
    truLen=len2;
  for(int i=0; i<truLen; i++)
    {
      if(s1[i]>s2[i])
        return 1;
      else if(s1[i]<s2[i])
        return 0;
    }
  return num;
}
