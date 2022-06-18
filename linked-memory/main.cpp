/**
 * Simple C++ main using a linked-memory list class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "List.h"
#include <iostream>

int main() {
  List<int> list; // creates an empty List

  // We'll be able to store const references to these objects in the List
  // because these constants on the stack exist in the same function scope
  // that lasts until the end of main().
  const int item_a = 3;
  const int item_b = 30;

  std::cout << "Inserting element 3 at front..." << std::endl; 
  // inserts new node that has data 3
  list.insertAtFront(item_a); // at front, l[0]
  std::cout << "list[0]: " << list[0] << std::endl; //should be 3

  std::cout << "Inserting element 30 at front..." << std::endl; 
  list.insertAtFront(item_b); // now l[0] = 30
  std::cout << "list[0]: " << list[0] << std::endl; //head pointer to 30
  std::cout << "list[1]: " << list[1] << std::endl; //pointer to 3

  return 0;
}

/* OUTPUT:
Inserting element 3 at front...
list[0]: 3
Inserting element 30 at front...
list[0]: 30
list[1]: 3
*/