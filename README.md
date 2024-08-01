# EXP-3
AIM: To study and implement operators and bitwise operators in C++

THEORY: 
1. Understanding Basic Operators
Operators in C++ are special symbols that perform operations on variables and values. The basic types include:
Arithmetic Operators: +, -, *, /, %
Relational Operators: ==, !=, >, <, >=, <=
Logical Operators: &&, ||, !
Assignment Operators: =, +=, -=, *=, /=, %=
Increment and Decrement Operators: ++, --

3. Bitwise Operators
Bitwise operators work on bits and perform bit-by-bit operations. They include:
AND (&): Sets each bit to 1 if both bits are 1.
OR (|): Sets each bit to 1 if one of the bits is 1.
XOR (^): Sets each bit to 1 if only one of the bits is 1.
NOT (~): Inverts all the bits.
Left Shift (<<): Shifts bits to the left by a specified number of positions.
Right Shift (>>): Shifts bits to the right by a specified number of positions.

3. Theory Behind Bitwise Operations
Bitwise operations are performed directly on the binary representations of numbers. They are efficient and are often used in low-level programming, such as system programming, graphics, and cryptography.

Example
Consider two integers: a = 5 (binary 0101) and b = 3 (binary 0011).
AND (&): a & b results in 0001 (binary for 1).
OR (|): a | b results in 0111 (binary for 7).
XOR (^): a ^ b results in 0110 (binary for 6).
NOT (~a): ~a results in ...11111010 (binary representation in two's complement form, typically -6 in decimal if we are considering 8-bit integers).
