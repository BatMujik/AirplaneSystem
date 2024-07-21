//
// Created by Thomas on 20.07.2024.
//

#include <string>
#include <regex>
#include "user_validation.h"

bool isValidEmail(const std::string& email)
{
    const std::regex pattern(
            "(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    return std::regex_match(email, pattern);
}