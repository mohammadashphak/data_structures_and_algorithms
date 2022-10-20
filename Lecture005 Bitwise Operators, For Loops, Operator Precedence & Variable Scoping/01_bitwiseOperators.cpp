#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Bitwise Operator
  // The bitwise operators are used to perform operations on the bits of the operands.
  // The bitwise operators are:
  /*
  & (bitwise AND)
  | (bitwise OR)
  ^ (bitwise XOR)
  ~ (bitwise NOT)
  << (left shift)
  >> (right shift)
  */

  // 1. & (bitwise AND)
  /*
  Gives 1 if both bits are 1, else gives 0.
  0 & 0 = 0
  0 & 1 = 0
  1 & 0 = 0
  1 & 1 = 1
  */

  // 2. | (bitwise OR)
  /*
  Gives 1 if any of the bits is 1, else gives 0.
  0 | 0 = 0
  0 | 1 = 1
  1 | 0 = 1
  1 | 1 = 1
  */

  // 3. ^ (bitwise XOR)
  /*
  Gives 1 if the bits are different, else gives 0.
  0 ^ 0 = 0
  0 ^ 1 = 1
  1 ^ 0 = 1
  1 ^ 1 = 0
  */

  // 4. ~ (bitwise NOT)
  /*
  Gives 1 if the bits are 0, else gives 0.
  ~0 = 1
  ~1 = 0
  */

  // 5. << (left shift)
  /*
  Shifts the bits of the first operand to the left by the number of bits specified by the second operand.
  padding with 0s from the right.
  0b00001111 = 15
  0b00001111 << 1 = 0b00011110 = 30
  */

  // 6. >> (right shift)
  /*
  Shifts the bits of the first operand to the right by the number of bits specified by the second operand.
  padding with 0s from the left.
  0b00001111 = 15
  0b00001111 >> 1 = 0b00000111 = 7
  */

  // Important things to remember in left shift and right shift operators
  /*
  Left shift and right shift are used to multiply and divide by 2 respectively.
  0b00001111 << 1 = 0b00011110 = 30
  0b00001111 >> 1 = 0b00000111 = 7
  left shift of a big number can cause overflow and give a negative number.
  0b01111111 = 127
  0b01111111 << 1 = 0b11111110 = -2
  right shift of a negative number can cause overflow and give a big number.
  0b11111111 = -1
  0b11111111 >> 1 = 0b01111111 = 127
  */

  int a = 4; // 0b00000100
  int b = 5; // 0b00000101

  cout << "a & b = " << (a & b) << endl;   // 0b00000100 = 4
  cout << "a | b = " << (a | b) << endl;   // 0b00000101 = 5
  cout << "a ^ b = " << (a ^ b) << endl;   // 0b00000001 = 1
  cout << "~a = " << (~a) << endl;         // 0b11111011 = -5
  cout << "a << 1 = " << (a << 1) << endl; // 0b00001000 = 8
  cout << "a >> 1 = " << (a >> 1) << endl; // 0b00000010 = 2

  return 0;
}