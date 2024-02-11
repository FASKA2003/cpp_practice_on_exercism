#pragma once
#include <list>

namespace sublist {
enum List_comparison { equal, sublist, superlist, unequal };
List_comparison sublist(std::list<int>, std::list<int>);
} // namespace sublist
