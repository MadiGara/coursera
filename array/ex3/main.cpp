/**
 * Calculating the memory seperation of elements in an array.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include "../Cube.h"

using uiuc::Cube;

int main() {
  // Create an array of 3 `Cube`s:
  Cube cubes[3] = { Cube(11), Cube(42), Cube(400) };
  
  // Print the size of each type `Cube`:
  std::cout << sizeof(Cube) << std::endl; //8 bytes long

  // Using pointer arithmetic, ask the computer to calculate
  // the offset from the beginning of the array to [2]:
  int offset = (long)&(cubes[2]) - (long)&(cubes[0]);
  //2*8 bytes long, offset should print 16
  //note the above line of code didn't change at all, but gives
  //different output due to diff size of ints and cubes in mem
  std::cout << offset << std::endl;

  return 0;
}
