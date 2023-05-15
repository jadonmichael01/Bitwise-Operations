#include <stdio.h>
#include "printbits.h"
#include "rotateleftbynbits.h"
#include "rotaterightbynbits.h"
#include "rotatefirstnbitsright.h"
#include "rotatefirstnbitsleft.h"

void main(){

printf("Testing printbits: \n");
print_bits(123);
print_bits(0x1580abcd);
print_bits(0xa5f41039);
printf("\n");

printf("Testing rotate functions by hexadecimal: \n");
printf("%x\n", rotate_left_by_nbits(0xa5f41039, 6));
printf("%x\n", rotate_right_by_nbits(0xa5f41039, 3));
printf("%x\n", rotate_first_nbits_left(0xa5f41039, 8));
printf("%x\n", rotate_first_nbits_right(0xa5f41039, 4));
printf("\n");

printf("Testing all implementations on part 4 of homework: \n");
print_bits(123);
print_bits(0x1580abcd);
print_bits(rotate_left_by_nbits(0xa5f41039, 6));
print_bits(rotate_right_by_nbits(0xa5f41039, 3));
print_bits(rotate_first_nbits_left(0xa5f41039, 8));
print_bits(rotate_first_nbits_right(0xa5f41039, 4));
print_bits(rotate_left_by_nbits(0xa5f41039, 0));
print_bits(rotate_left_by_nbits(0xa5f41039, 38));

}
