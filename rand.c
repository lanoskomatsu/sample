#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("RAND_MAX: %d\n", RAND_MAX);

  for(int i = 0; i < 3; i++) {
    printf("%d\n", rand());
  }

  for(int i = 0; i < 3; i++) {
    printf("%d\n", rand() % 10 + 1);
  }
 
  return 0;
}

