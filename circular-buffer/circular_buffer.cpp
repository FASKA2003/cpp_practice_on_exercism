#include "circular_buffer.h"

namespace circular_buffer {
template <typename T> T circular_buffer<T>::read() {
  if (_values[_r] == nullptr) {
    throw std::domain_error("Buffer is empty.");
  }
  auto v = *_values[_r];
  clear();
  return v;
}
template <typename T> void circular_buffer<T>::clear() {
  if (_values[_r] == nullptr) {
    return;
  }
  _values[_r].reset();
  increment(_r);
}
template <typename T> void circular_buffer<T>::write(T const &v) {
  if (_values[_w] != nullptr) {
    throw std::domain_error("Buffer is full.");
  }
  _values[_w] = std::make_unique<T>(v);
  increment(_w);
}
template <typename T> void circular_buffer<T>::overwrite(T const &v) {
  if (_values[_w] != nullptr) {
    _values[_w].reset();
    increment(_r);
  }
  write(v);
}
} // namespace circular_buffer
