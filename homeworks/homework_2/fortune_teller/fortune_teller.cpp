#include <array>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string_literals::operator""s;

int main() {
  std::string user_name = "No Name";
  char birth_season[7] = "sNever";
  char tempo_var[20] = "empty";
  //<ADJECTIVE>
  std::vector<std::string> vect_adjectives{"a", "b"};
  //<ENDING>
  const std::vector<std::string> vect_endings{
      "eats UB for breakfast", "finds errors quicker than the compiler",
      "is not afraid of C++ error messages"};
  //
  // Print a Welcome statement  &
  // Ask the user for their name:
  cout << "Welcome to the fortune teller program! \nPlease enter your name:"
       << endl;
  cin >> user_name;
  //
  // Ask the user when they were born:
  cout << "Please enter the time of year when you were born: \n(pick from "
          "'spring', 'summer', 'autumn', 'winter')"
       << endl;
  cin >> birth_season;
  // Clear vector allocator of advices
  vect_adjectives.clear();
  // Ask for an adjective:
  cout << "Please enter an adjective:" << endl;
  cin >> tempo_var;
  vect_adjectives.emplace_back(tempo_var);
  // Ask for another adjective:
  cout << "Please enter another adjective:" << endl;
  cin >> tempo_var;
  vect_adjectives.emplace_back(tempo_var);
  // store in map season >> carachteristics <NOUN>
  const std::map<std::string, std::string> map_seasons = {
      std::pair{"spring", " STL guru"}, std::pair{"summer", " C++ expert"},
      std::pair{"autumn", " coding beast"},
      std::pair{"winter", " software design hero"}};
  // Use the modulo division by the size of the array of your adjectives on the
  // length of the provided <NAME> to get an index that you can use to get an
  // adjective from your array of adjectives <NAME>, the <ADJECTIVE> <NOUN> that
  //<ENDING> int user_name_length = user_name.length();
  cout << user_name + ", the "s +
              vect_adjectives[user_name.length() % vect_adjectives.size()] +
              map_seasons.at(birth_season) + " that "s +
              vect_endings[user_name.length() % vect_endings.size()]
       << endl;
  return 0;
}