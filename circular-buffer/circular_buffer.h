#if !defined(CIRCULAR_BUFFER_H)
#define CIRCULAR_BUFFER_H
#include <memory>
#include <stdexcept>

namespace circular_buffer {
template <typename T> class circular_buffer {
  using t_ptr = std::unique_ptr<T>;

private:
  size_t _size;
  size_t _r;
  size_t _w;
  t_ptr *_values;
  void increment(size_t &x) { ++x %= _size; }

public:
  circular_buffer(size_t size)
      : _size{size}, _r{0}, _w{0}, _values{new t_ptr[size]} {}
  T read();
  void write(T const &value);
  void overwrite(T const &value);
  void clear();
  ~circular_buffer() { delete[] _values; }
};

} // namespace circular_buffer

#endif // CIRCULAR_BUFFER_H
