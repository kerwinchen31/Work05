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
