# Bitwise-Operations

The given C program demonstrates the usage of several functions related to bit manipulation. It includes the following header files:

- "printbits.h": Contains a function `print_bits` to print the binary representation of an integer.
- "rotateleftbynbits.h": Contains a function `rotate_left_by_nbits` to rotate an integer to the left by a specified number of bits.
- "rotaterightbynbits.h": Contains a function `rotate_right_by_nbits` to rotate an integer to the right by a specified number of bits.
- "rotatefirstnbitsright.h": Contains a function `rotate_first_nbits_right` to rotate the first n bits of an integer to the right.
- "rotatefirstnbitsleft.h": Contains a function `rotate_first_nbits_left` to rotate the first n bits of an integer to the left.

The `main` function is the entry point of the program. It demonstrates the usage of these functions by performing various operations on integers and printing their binary representations.

The program can be summarized as follows:

1. Testing `print_bits` function:
   - The `print_bits` function is used to print the binary representation of three integers: 123, 0x1580abcd, and 0xa5f41039.

2. Testing rotate functions by hexadecimal:
   - The program uses the `rotate_left_by_nbits`, `rotate_right_by_nbits`, `rotate_first_nbits_left`, and `rotate_first_nbits_right` functions to perform rotation operations on the integer 0xa5f41039.
   - The results of the rotations are printed using `%x` format specifier to display the hexadecimal representation.

3. Testing all implementations on part 4 of homework:
   - The program performs the same rotation operations as in the previous step but also includes the original integers and additional cases (0 and 38 bits rotation) for testing purposes.
   - The binary representations of the results are printed using the `print_bits` function.

This program provides a practical example of using the provided header files and functions to perform bit manipulation operations on integers.
