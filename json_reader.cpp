#include "json_reader.h"
#include <cstdio>
#include <fstream>
#include <iostream>

json read(string path) {
  std::ifstream f(path);
  json data = json::parse(f);
  return data;
}
