#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
  char *p = (char *)malloc(10);
  *p = 'a';
  *(p + 1) = 'b';
  *(p + 2) = 'c';
  printf("%s\n", p);
  free(p);
  p = NULL;
  return 0;
}
