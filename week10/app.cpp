#include <iostream>
#include "profile.hpp"

using namespace std;

int main() {
    Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
    sam.add_hobby("fishing");
    cout << sam.view_profile() << endl;
    return 0;
}