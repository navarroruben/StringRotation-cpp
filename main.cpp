// Ruben Navarro
// 01/15/2019
// main.cpp
// CTCI - Rotate String
// Checks if initial string is a substring of secondary string

#include <iostream>
#include "prototypes.h"
#include <string>

int main() {

       std::string s = "bowl";
       std::string s2 = "owlb";
    // std::string s = "seven";
    // std::string s2 = "vense";

    // checks length of both strings if strings are not of equal lengths returns false
    if (!checkLength(s, s2))
        std::cout << "Initial string: [" << s << "] is not a substring of: [" << s2 << "]" << std::endl;

    // checks if initial string is a substring of the secondary string
    if (isSubString(s,s2))
        std::cout << "Secondary string: " << s2 << " is a subset of the initial string: " << s << std::endl;
    else
        std::cout << "Secondary string: " << s2 << " is not a subset of the initial string: " << s << std::endl;
    return 0;
}
