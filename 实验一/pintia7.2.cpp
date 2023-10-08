
#include <stdio.h>

int main()
{
  int i, j,k;
  for (i = 0; i < 4; i++) {
    if (i) {
      printf("%*s", i, " ");
    }
    for (j = 0; j < 4 - i; j++) {
      printf("*");
    }
    for (k = 4; k>i; k--) 
{
printf(" ");
}

    printf("\n");
  }
  return 0;
}
