#include "simple_linked_list.h"

#include <stdexcept>

namespace simple_linked_list {

std::size_t List::size() const {
  // TODO: Return the correct size of the list.
  return this->current_size;
}

void List::push(int entry) {
  // TODO: Implement a function that pushes an Element with `entry` as data to
  // the front of the list.
  Element *element = new Element(entry);
  element->next = this->head;
  element->data = entry;
  this->head = element;
  this->current_size += 1;
}

int List::pop() {
  // TODO: Implement a function that returns the data value of the first
  // element in the list then discard that element.
  Element *temp = (this->head);
  this->head = temp->next;
  int value = temp->data;
  this->current_size -= 1;
  delete temp;
  return value;
}

void List::reverse() {
  // TODO: Implement a function to reverse the order of the elements in the
  // list.
  Element *prev = nullptr;
  Element *next = nullptr;

  while (this->head != nullptr) {
    next = this->head->next;
    this->head->next = prev;
    prev = this->head;
    this->head = next;
  }
  this->head = prev;
}

List::~List() {
  // TODO: Ensure that all resources are freed on destruction
  Element *ptr = this->head;
  Element *temp;
  while (ptr != nullptr) {
    temp = ptr->next;
    delete ptr;
    ptr = temp;
  }
}

} // namespace simple_linked_list
