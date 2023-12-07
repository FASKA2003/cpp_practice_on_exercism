namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
enum class AccountStatus { troll, guest, user, mod };
// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
enum class Action { read, write, remove };

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.

bool display_post(AccountStatus poster, AccountStatus viewer) {
  if (poster == AccountStatus::troll && viewer != AccountStatus::troll) {
    return false;
  } else {
    return true;
  }
}

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
bool permission_check(Action action, AccountStatus status) {
  bool result = true;
  if (status == AccountStatus::guest && action != Action::read) {
    result = false;
  } else if (status == AccountStatus::troll && action == Action::remove) {
    result = false;
  } else {
    result = true;
  }
  return result;
}

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
bool valid_player_combination(AccountStatus player1, AccountStatus player2) {
  bool valid = false;
  if (player1 == AccountStatus::troll && player2 == AccountStatus::troll) {
    valid = true;
  } else if (player1 == AccountStatus::user && player2 == AccountStatus::user) {
    valid = true;
  } else {
    valid = false;
  }
  return valid;
}

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
bool has_priority(AccountStatus account1, AccountStatus account2) {
  // Assign numeric priorities
  int priority1 = 0;
  int priority2 = 0;

  switch (account1) {
  case AccountStatus::troll:
    priority1 = 1;
    break;
  case AccountStatus::guest:
    priority1 = 2;
    break;
  case AccountStatus::user:
    priority1 = 3;
    break;
  case AccountStatus::mod:
    priority1 = 4;
    break;
  }

  switch (account2) {
  case AccountStatus::troll:
    priority2 = 1;
    break;
  case AccountStatus::guest:
    priority2 = 2;
    break;
  case AccountStatus::user:
    priority2 = 3;
    break;
  case AccountStatus::mod:
    priority2 = 4;
    break;
  }
  // Compare priorities
  return priority1 > priority2;
}

} // namespace hellmath
