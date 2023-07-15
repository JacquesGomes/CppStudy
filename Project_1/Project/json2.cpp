#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>

using namespace std;

int main(){
  nlohmann::json j;
  string k = "jacques";
  j["AtribuidaPor:"] = k;
  cout << setw(2) << j << '\n';

  ofstream arquivo_saida("output.txt");

  arquivo_saida << setw(2) << j << '\n';
}