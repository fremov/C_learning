#include <stdio.h>
/*
 *
 * Вывод таблицы температур по Цельсию и по Фаренгейту
 */
int main() {
  int facr;
  puts("Celsius\tFarengeit");
  for (facr = 0; facr <= 300; facr += 20) {
    printf("%3d\t%6.1f\n", facr, (5.0 / 9.0) * (facr - 32));
  }
  return 0;
}
