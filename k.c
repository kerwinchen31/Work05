#include <stdio.h>
//#include <string.h>
#include "strfunc.h"

int main(){
  char uno[100] = "rasca";
  char dos[100] = "cielos";
  printf("string uno: %s\n", uno);
  printf("string dos: %s\n", dos);
  printf("uno + 4 byte of dos: %s\n", strncat(uno, dos,4));
  printf("string uno: %s\n", uno);
  printf("string dos: %s\n", dos);
  printf("uno + 2 bytes of dos: %s\n", strncat(uno, dos, 2));
  return 0;
}
