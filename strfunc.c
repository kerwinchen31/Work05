char * strncat( char *dest, char *source, int n){
  int x = n;
  int i = 0;
  while (!n){
    dest[strlen(dest) + i] = *(source + i);
  }
  dest[strlen(dest) + i + 1] = '\0';
  return dest;
}
