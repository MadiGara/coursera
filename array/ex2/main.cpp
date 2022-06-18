/**
 * Calculating the memory seperation of elements in an array.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

int main() {
  // Create an array of 10 primes:
  int values[10] = { 2, 3, 5, 7, 11, 13, 15, 17, 21, 23 };
  
  // Print the size of each type `int`:
  std::cout << sizeof(int) << std::endl;  //4 or 8

  // Using pointer arithmetic, ask the computer to calculate
  // the offset from the beginning of the array to [2]:
  int offset = (long)&(values[2]) - (long)&(values[0]);
               //^ mem address where index 2 is stored
  //tells us how much mem is b/w index 2 and index 0
  std::cout << offset << std::endl; //4*2 should be 8 (bytes)

  return 0;
}
