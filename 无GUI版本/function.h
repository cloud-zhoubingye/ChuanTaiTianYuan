//
// Created by Zhou on 11/07/2023.
//

#ifndef PROJECT_FUNCTION_H
#define PROJECT_FUNCTION_H

#include <unordered_set>
#include <string>

bool is_one_argument_function(const std::string& name);
bool is_two_argument_function(const std::string& name);
bool is_function_name(const std::string& name);
double calculate_function(const std::string& name, double x, double y = 0.0);

#endif //PROJECT_FUNCTION_H
