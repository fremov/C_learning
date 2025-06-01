#include <stdio.h>
/*
 *
 * Вывод таблицы температур по Цельсию и по Фаренгейту
 */
int main() {
  int lower, upper, step;
  float facr, celsius;

  lower = 0;
  upper = 50;
  step = 10;

  facr = lower;
  printf("facr\telsius\n");
  while (facr < upper) {
    celsius = (5.0 / 9.0) * (facr - 32.0);
    printf("%3.0f\t%6.2f\n", facr, celsius);
    facr += step;
  }

  celsius = lower;
  printf("celsius\tfacr\n");
  while (celsius < upper) {
    facr = celsius * (9.0 / 5.0) + 32;
    printf("%3.0f\t%6.2f\n", celsius, facr);
    celsius += step;
  }

  return 0;
}
