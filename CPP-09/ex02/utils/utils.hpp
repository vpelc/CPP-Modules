#pragma once

#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <cmath>

std::string				before_sort(int argc, char** argv);
std::string				after_sort(std::vector<int>& vec);
std::vector<int>		fill_vector(int argc, char** argv);
std::deque<int>			fill_deque(int argc, char** argv);