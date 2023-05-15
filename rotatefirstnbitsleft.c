#include <stdio.h>
#include "rotatefirstnbitsleft.h"

unsigned int leftMask(unsigned int num, int n){
  num >>= (32 - n - 1);
  num <<= (32 - n - 1); // create a mask and of the most significant n bits

  return num;
}

unsigned int rotate_first_nbits_left(unsigned int num, int n) {
  unsigned int mask = leftMask(num, n); 
  int shift = mask << 1; // shift the mask by 1
  num <<= n; // extract the least significant bits
  num >>= n;

  return shift + num; // add the mask and the least significant bits for the rotation 
}


