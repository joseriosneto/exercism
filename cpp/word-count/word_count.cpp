#include "word_count.h"

#include <regex>
#include <boost/algorithm/string/case_conv.hpp>

using std::string;
using std::regex;
using std::sregex_iterator;
using std::map;
using boost::algorithm::to_lower_copy;

map<string, int> word_count::words(const string& sentence)
{
    map<string, int> map_words;
    regex regex_words{"\\w+|\\w+'\\w+"};
    sregex_iterator it(sentence.begin(), sentence.end(), regex_words),
                    it_end = std::sregex_iterator();

    for (; it != it_end; it++) {
        const string& word = (*it).str();
        map_words[move(to_lower_copy(word))]++;
    }

    return map_words;
}