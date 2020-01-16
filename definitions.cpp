// Ruben Navarro
// 01/15/2019
// definitions.cpp
// CTCI - Rotate String
// Checks if initial string is a substring of secondary string

#include <string>

bool checkLength(std::string s, std::string s2) {
    return !(s.size() > s2.size() || s.size() < s2.size());
}

bool isSubString(std::string s, std::string s2) {
    std::string s3;
    std::size_t found;

    int n = s2.size() + 1 / 2;

    // returns true if both strings are equal
    if (s == s2)
        return true;

    // loops through number of variations
    for (int i = 0; i < n; ++i) {
        // appends last half of the string to new string;
        s3.append(s2, s2.size() / 2, s2.size());
        // appends first half of string (half - 1 if odd) to new string
        s3.append(s2, 0, s2.size() / 2);

        // searches new string for initial string
        found = s3.find(s);

        // if initial string is found in new string returns true
        if (found != std::string::npos) {
            return true;
        }
    }
return false;
}