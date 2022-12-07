#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> last_jedi;
  
  // Add characters here:
  last_jedi.push_back("kylo");
  last_jedi.push_back("rey");
  last_jedi.push_back("luke");
  last_jedi.push_back("finn");

  //delete from back with :.pop_back();
  
  
  
  
  
  std::cout << last_jedi[0] << " \n";
  std::cout << last_jedi[1] << " \n";
  std::cout << last_jedi[2] << " \n";
  std::cout << last_jedi[3] << " \n";
  
}