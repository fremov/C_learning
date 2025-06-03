#include <stdio.h>
int main() {
  int c, nl, spaces, tabs;

  nl = 0;
  spaces = 0;
  tabs = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    if (c == 9)
      ++tabs;
    if (c == 32)
      ++spaces;
  }
  printf("End str: %d\n", nl);
  printf("Tabs: %d\n", tabs);
  printf("Spaces: %d\n", spaces);
  return 0;
}
