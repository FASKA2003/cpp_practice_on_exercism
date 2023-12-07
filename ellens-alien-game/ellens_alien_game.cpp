namespace targets {
// TODO: Insert the code for the alien class here
class Alien {
private:
  int health{3};

public:
  int x_coordinate, y_coordinate;
  Alien(int x, int y) {
    this->x_coordinate = x;
    this->y_coordinate = y;
  }
  int get_health() { return this->health; }
  void hit() { this->health--; }
  bool is_alive() { return (this->health != 0); }
  bool teleport(int x, int y) {
    this->x_coordinate = x;
    this->y_coordinate = y;
    return true;
  }
  bool collision_detection(Alien obj) {
    if ((obj.x_coordinate == this->x_coordinate) &&
        (obj.y_coordinate == this->x_coordinate)) {
      return true;
    } else {
      return false;
    }
  }
};
} // namespace targets
