#include "song.hpp"
using namespace std;
// add Song method definitions here:
void Song::add_title(string new_title) {
  title = new_title;
}
string Song::get_title() {
  return title;
}