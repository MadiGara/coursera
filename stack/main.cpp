/**
 * Simple use of std::sueue.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include <stack>

int main() {
  // Create a std::stack of strings:
  std::stack<std::string> s;

  // Add several strings to the stack:
  s.push( "Orange" );
  s.push( "Blue" );
  s.push( "Illinois" );
  // will be (front) Illinois, Blue, Orange (back) in that order

  // Print the front of the stack out and pop it off:
  std::cout << "First pop(): " << s.top() << std::endl; //Illinois
  s.pop();

  // Add another string and then print ouf the front of the stack:
  s.push( "Illini" ); //Illini, Blue, Orange
  std::cout << "Second pop(): " << s.top() << std::endl; //Illini

  return 0;
}

/* OUTPUT:
First pop(): Illinois
Second pop(): Illini
*/