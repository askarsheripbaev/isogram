#include "isogram.hpp"
#include <map>
#include <cctype>
#include <string>

bool is_isogram(std::string const &word)
{
  auto dict = std::map<char, int>{{word[0], 0}};
  for (auto c : word)
  {
    int a = std::tolower(c);
    c = char(a);
    if (dict.find(c) == dict.end())
      dict[c] = 1;
    else if (c == '-' or c == ' ' or c == '!' or c == ',')
      continue;
    else
      return false;
  }
  return true;
}