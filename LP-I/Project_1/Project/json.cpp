#include <iostream>
#include <nlohmann/json.hpp>

using namespace std;

int main(){
  nlohmann::json j;
  j.push_back("Hello");
  j.push_back("Hello");
  j.push_back("Hello");
  j.emplace_back("World");
  cout << setw(2) << j << '\n';
}