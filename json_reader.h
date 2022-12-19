#ifndef __MYlIB_H_
#define __MYlIB_H_

#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

json read(string path);

#endif
