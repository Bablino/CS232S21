#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Program to convert a 32-bit Decimal numbers to Binary
//1) Do not change the signature of convert_2, or your task receives zero
//2) No globals allowed.
char* convert_2(int dec)
{
  
  char *arr = malloc(sizeof(char*)*34);
  int count=32;
  arr[0]='0';
  arr[1]='b';
  for(char* p=&arr[32]; p>=&arr[2];p--)
  {
      
      *p=((dec>>(32-count))&1) + '0';
      count--;
  }
  *(arr+33)='\0';
  return  arr;
}

int main() {
	int n;
	char * bin;
	printf("Enter the Decimal Number\n");
	scanf("%d",&n);
	bin = convert_2(n);
	printf("The Binary Notation of %d is\t %s\n", n, bin);
  free(bin);
	//TODO: do we need to release the memory of bin?
}
