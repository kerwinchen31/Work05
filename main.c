#include <stdio.h>
#include <string.h>
#include "strfunc.h"

int main(){
  char uno[100] = "rasca";
  char dos[100] = "cielos";
  printf("string uno: %s\n", uno);
  printf("string dos: %s\n", dos);
  printf("[mine]length of uno: %d\n", mystrlen(uno));
  printf("[mine]length of dos: %d\n", mystrlen(dos));
  printf("[standard]length of uno: %ld\n", strlen(uno));
  printf("[standard]length of dos: %ld\n", strlen(dos));
  printf("[mine]uno + 4 byte of dos: %s\n", mystrncat(uno, dos, 4));
  printf("[standard]uno + 4 (more) byte of dos: %s\n", strncat(uno, dos, 4));
  printf("string uno: %s\n", uno);
  printf("string dos: %s\n", dos);
  printf("[mine]uno + 2 bytes of dos: %s\n", mystrncat(uno, dos, 2));
  printf("[standard]uno + 2 (more) bytes of dos: %s\n", strncat(uno, dos, 2));
  return 0;
}
