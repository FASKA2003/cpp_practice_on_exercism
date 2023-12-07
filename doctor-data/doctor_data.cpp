#include "doctor_data.h"

heaven::Vessel::Vessel(std::string name, int num) {
  this->name = name;
  this->generation = num;
}

heaven::Vessel::Vessel(std::string name, int num, star_map::System systype) {
  this->name = name;
  this->generation = num;
  this->current_system = systype;
}

heaven::Vessel heaven::Vessel::replicate(std::string name) {
  heaven::Vessel result(name, 0);
  return result;
}

void heaven::Vessel::make_buster() { this->busters++; }
bool heaven::Vessel::shoot_busters() {
  this->busters--;
  return true;
}

std::string heaven::get_older_bob(heaven::Vessel obj1, heaven::Vessel obj2) {
  return (obj1.generation < obj2.generation ? obj1.name : obj2.name);
}
