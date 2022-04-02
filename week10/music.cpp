#include <iostream>
#include "song.hpp"
using namespace std;

int main() {
    Song electric_relaxation;
    electric_relaxation.add_title("electric Relaxation");
    cout << electric_relaxation.get_title();
}