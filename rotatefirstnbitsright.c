#include <stdio.h>
#include "rotatefirstnbitsright.h"

unsigned int rightMask(unsigned int num, int n){
  num >>= (32 - n - 1); // create a mask of the most significant n bits
  num <<= (32 - n - 1);
  return num;
}

unsigned int rotate_first_nbits_right(unsigned int num, int n) {
  unsigned int mask = rightMask(num, n);

  int shift = mask >> 1; // shift the first n bits from the mask
  num <<= n; // extract the least significant bits
  num >>= n;

  return shift + num; // add the shifted mask and the least significant bits
}
