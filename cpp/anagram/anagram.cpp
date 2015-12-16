#include "anagram.h"

#include <algorithm>
#include <boost/algorithm/string/case_conv.hpp>

using std::string;
using std::vector;
using boost::algorithm::to_lower_copy;

namespace anagram {

Matcher::Matcher(const string& word)
    : word_{move(to_lower_copy(word))}
{
}

Matcher::Matcher(const Matcher& matcher)
    : word_{matcher.word_}
{
}

vector<string> Matcher::matches(const vector<string>& candidates) const
{
    vector<string> anagrams;

    for (const string& word : candidates) {
        const string aux = to_lower_copy(word);

        if (aux == word_)
            continue;
        if (aux.length() != word_.length())
            continue;
        if (!is_permutation(aux.begin(), aux.end(), word_.begin()))
            continue;
        anagrams.push_back(word);
    }

    return anagrams;
}

Matcher anagram(const string& word)
{
    return Matcher(word);
}

}