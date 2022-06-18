/**
 * Simple use of std::queue.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include <queue>

int main() {
  // Create a std::queue:
  std::queue<std::string> q;     //Queue of strings

  // Add several strings to the queue:
  // Orange will be at front (right) of queue
  q.push( "Orange" );
  q.push( "Blue" );
  q.push( "Illinois" );

  // Print the front of the queue out and pop it off:
  std::cout << "First pop(): " << q.front() << std::endl;  //prints Orange
  q.pop();  //pops Orange from front of queue

  // Add another string and then print ouf the front of the queue:
  q.push( "Illini" ); //goes to end of queue (left)
  std::cout << "Second pop(): " << q.front() << std::endl; //Blue

  return 0;
}

/* OUTPUT:
First pop(): Orange
Second pop(): Blue
*/ 