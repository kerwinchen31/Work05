#include <stdio.h>

int mystrlen( char *s){
  int ans = 0;
  while(*s){
    ans++;
    s++;
  }
  return ans;
}

char * mystrncat( char *dest, char *source, int n){
  char* ans = dest;
  int x = n;
  while(*dest)
    dest++;
  while(x){
    *dest = *source;
    dest++;
    source++;
    x--;
  }
  dest++;
  *dest = 0;
  return ans;
}

char * mystrcpy( char *dest, char *source ){
  for (int i=0; i<sizeof(source); i++){
    *dest = *source;
    dest++;
    source++;
  }
  return dest;
}

int mystrcmp( char *s1, char *s2 ){
  int ans = 0;
  while(*s1){
    printf("*s1: %d, *s2: %d\n", *s1, *s2);
    ans = ans + *s1 - *s2;
    *(s1++);
    *(s2++);
    printf("ans: %d\n", ans);
  }
  return ans;
}

char * mystrchr( char *s, char c ){
  while(*s){
    if(*s == c){
      return s;
    }
    *s++;
  }
  return 00000000;
}
