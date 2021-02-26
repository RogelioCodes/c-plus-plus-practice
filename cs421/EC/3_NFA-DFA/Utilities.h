#ifndef UTILITIES_H
#define UTILITIES_H

#include <vector>
#include <string>

using std::vector;
using std::string;

namespace Utilities {
  vector<string>& split(string& str, char delimiter, vector<string>& results);
};

#endif
