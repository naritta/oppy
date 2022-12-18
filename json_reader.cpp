#include "json_reader.h"
#include <cstdio>
#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>

using json = nlohmann::json;
using namespace std;

void read() {
  std::ifstream f("test.json");
  json data = json::parse(f);
  std::cout << data["key1"] << "\n";
}
