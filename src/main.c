#include <stdio.h>

int main() {
  unsigned int x = 4;
  int sx = (int)(x);

  unsigned int bigx = 0xfffffefe;
  short kindabig = (short)bigx;

  short short2 = -1;           // 0xffff 1111
  int wasashort = (int)short2; // 0x0000ff

  float f = 3.14;
  int wasafloat = (int)f;

  printf("%i\n", bigx);
  printf("%i\n", kindabig);

  return 0;
}
