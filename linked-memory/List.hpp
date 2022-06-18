/**
 * Simple linked-memory, templated list class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

// Redundantly make sure theat List.h is included. Since List.h is written
// to include this file, we won't need to explicitly include List.hpp in
// the main.cpp file.
#include "List.h"

template <typename T>
const T & List<T>::operator[](unsigned index) {  // retrieves index into the loop
  // Start a `thru` pointer to advance thru the list:
  ListNode *thru = head_;

  // Loop until the end of the list (or until a `nullptr`):
  // thru pointer goes to next element with each loop
  // means thru no longer points to its first, but its second node 
  // after the first loop
  while (index > 0 && thru->next != nullptr) {
    // input index you're trying to find ([4])
    thru = thru->next;
    index--;    // decrement index so loop has an end 
    // index is decrementing, but thru pointer is moving up indexes
    //until it gets to the one we want, [4]
  }  

  // Return the data that the thru pointer eventually lands on
  // aka the data at our desired index
  return thru->data;
}


template <typename T>
void List<T>::insertAtFront(const T & data) {
  // Create a new ListNode on the heap:
  ListNode *node = new ListNode(data);

  // Set the new node’s next pointer point the current
  // head of the List:
  node->next = head_;

  // Update the List’s head pointer to be the new node:
  head_ = node;
}


/**
 * Finds and returns the ListNode containing `data` in the
 * List or `nullptr` if the data is not found.
 */
template <typename T>
typename List<T>::ListNode *List<T>::_find(const T & data) {
  ListNode *thru = head_;
  while (thru != nullptr) {
    if (thru->data == data) { return thru; }
    thru = thru->next;
  }

  return nullptr;  
}