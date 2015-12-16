#include "bob.h"
#include <regex>

using std::string;
using std::regex;

string bob::hey(const string& word)
{
    regex regex_only_uppercase("[^a-z]*[A-Z]+[^a-z]*");
    regex regex_ends_with_question("\\?\\s*$");
    regex regex_nothing("^\\s*$");

    if (regex_match(word, regex_only_uppercase))
        return "Whoa, chill out!";
    if (regex_search(word, regex_ends_with_question))
        return "Sure.";
    if (regex_search(word, regex_nothing))
        return "Fine. Be that way!";
    return "Whatever.";
}