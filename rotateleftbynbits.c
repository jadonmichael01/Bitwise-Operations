#include <stdio.h>
#include "rotateleftbynbits.h"

unsigned int rotate_left_by_nbits(unsigned int x, int n){

  if(n < 1){
    printf("Number of rotations should be a non-negative number! Returning x: ");
    return x;
  }else if(n > 32){
    printf("Number of rotations is bigger than 32! Returning x: ");
    return x;
  }

  int bitSize = sizeof(x) * 8; // rotating 32 bits
  int rotation = x >> (bitSize - n);
  int shift = x << n;

  return shift | rotation;  

}

