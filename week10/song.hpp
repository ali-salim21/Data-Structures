#include <string>

// add the Song class here:
class Song {
  std::string title;

  public:
    Song();
    Song(std::string new_title); 
    ~Song();
    std::string get_title();
};