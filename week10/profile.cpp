#include <iostream>
#include "profile.hpp"
using namespace std;

Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns) {
    name = new_name;
    age = new_age;
    city = new_city;
    country = new_country;
    pronouns = new_pronouns;
}

Profile::~Profile() {}

string Profile::view_profile() {
    return "My name is "+name+" at the age of "+to_string(age)+" living in "+city+", "+country+". My hobbies are "+hobbies[0];
}

void Profile::add_hobby(string new_hobby) {
    hobbies.push_back(new_hobby);
}