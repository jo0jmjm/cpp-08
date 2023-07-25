#ifndef EASY_HPP
# define EASY_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <string>

void myPutStr(std::string s1, std::string s2, std::string color);

const std::string PINK170 = "\033[38;5;170m";
const std::string PINK183 = "\033[38;5;183m";
const std::string PINK198 = "\033[38;5;198m";
const std::string PINK201 = "\033[38;5;201m";
const std::string RED = "\033[38;5;52m";
const std::string RESET_COLOR = "\033[m";

const std::string PINK136 = "\033[38;5;136m";
const std::string PINK180 = "\033[38;5;180m";
const std::string PINK190 = "\033[38;5;190m";
const std::string PINK208 = "\033[38;5;208m";

#include "easyfind.tpp"
#endif