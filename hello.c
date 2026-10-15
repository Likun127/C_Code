#include <stdio.h>

int main(void)
{
  int number;
  int divisor;
  int is_prime;

  printf("1到100之间的素数：\n");

  for (number = 2; number <= 100; number++) {
    is_prime = 1;

    for (divisor = 2; divisor * divisor <= number; divisor++) {
      if (number % divisor == 0) {
        is_prime = 0;
        break;
      }
    }

    if (is_prime) {
      printf("%d ", number);
    }
  }

  printf("\n");
  return 0;
}