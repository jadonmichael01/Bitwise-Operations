#include <stdio.h>
#include "printbits.h"

void print_bits(unsigned int x){

  for(int i = 31; i >= 0; i--){ // iterate each bit to check 0 and 1
    int a = (x >> i); // shift bitwise to right by i
    printf("%d", a & 1); // determine whether a bit is 0 or 1
    i % 4 == 0 ? printf(" ") : printf(""); // for each four bits make a space
  }
  printf("\n"); 

}
