#include "json_reader.h"
#include <iostream>

using namespace std;

int main() {
  json data = read("test.json");
  std::cout << data["key1"] << "\n";
  return 0;
}
