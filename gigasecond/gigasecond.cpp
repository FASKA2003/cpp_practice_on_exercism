#include "gigasecond.h"

namespace gigasecond {
ptime advance(ptime in) { return in + seconds(1000000000); }
} // namespace gigasecond
