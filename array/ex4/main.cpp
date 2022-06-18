/**
 * Calculating the memory seperation of elements in a std::vector.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include <vector>
#include "../Cube.h"

using uiuc::Cube;

int main() {
  std::vector<Cube> cubes{ Cube(11), Cube(42), Cube(400) };
  //note curly brackets around vectors and arrays

  // Examine capacity:  
  std::cout << "Initial Capacity: " << cubes.capacity() << std::endl; //3
  cubes.push_back( Cube(800) ); //add another element
  std::cout << "Size after adding: " << cubes.size() << std::endl; //4
  std::cout << "Capacity after adding: " << cubes.capacity() << std::endl;
  //will likely be about double the initial capacity (gives extra space)

  // Using pointer arithmetic, ask the computer to calculate
  // the offset from the beginning of the array to [2]:
  int offset = (long)&(cubes[2]) - (long)&(cubes[0]);
  std::cout << "Memory separation: " << offset << std::endl;
  // 16 if stored sequentially in mem (2*8)

  // Find a specific `target` cube in the array:
  Cube target = Cube(400);
  for (unsigned i = 0; i < cubes.size(); i++) { //goes through array
    if (target == cubes[i]) {
      std::cout << "Found target at [" << i << "]" << std::endl;
    }
  }

  return 0;
}

/* OUTPUT:
Initial Capacity: 3
Size after adding: 4
Capacity after adding: 6     - indeed, double initial cap!
Memory separation: 16       - what we expected
Found target at [2]
*/
