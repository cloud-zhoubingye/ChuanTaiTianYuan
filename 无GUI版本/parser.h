//
// Created by Zhou on 11/07/2023.
//

#ifndef PROJECT_PARSER_H
#define PROJECT_PARSER_H

#include <string>
#include <stdexcept>

#include "lexer.h"
#include "variable.h"

class Parser {
public:
    explicit Parser(Token_stream& ts);
    double statement();
    double declaration(bool is_const);
    double assignment(const std::string& var_name);
    double expression();
    double term();
    double primary();
    double function(const std::string& func_name);

private:
    Token_stream& ts;
    Symbol_table var_table;
};

class Parser_error : public std::runtime_error {
    using std::runtime_error::runtime_error;
};

#endif //PROJECT_PARSER_H
