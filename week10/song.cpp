#include <iostream>
#include "song.hpp"

using namespace std;
// add Song method definitions here:
Song::Song() {}
Song::Song(std::string new_title) {
    title = new_title;
}
Song::~Song() {
    cout << "Goodbye " << title << endl;
}

string Song::get_title() {
  return title;
}