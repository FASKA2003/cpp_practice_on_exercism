#include "phone_number.h"
#include <regex>
#include <stdexcept>
#include <string>

namespace phone_number {
phone_number::phone_number(const std::string &s) {
  std::regex re{R"(^\D*(?:\+?1)?\D*([2-9]\d{2})\D*([2-9]\d{2})\D*(\d{4})\D*$)"};
  std::smatch sm;

  if (std::regex_match(s, sm, re)) {
    inner_number = sm[1].str() + sm[2].str() + sm[3].str();
    inner_area_code = sm[1].str();
    inner_string =
        "(" + sm[1].str() + ")" + " " + sm[2].str() + "-" + sm[3].str();
  } else {
    throw std::domain_error("invalid input");
  }
}
std::string phone_number::number() const { return inner_number; }
std::string phone_number::area_code() const { return inner_area_code; }
} // namespace phone_number
