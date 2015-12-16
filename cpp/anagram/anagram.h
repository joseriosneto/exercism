#ifndef ANAGRAM_H
#define ANAGRAM_H

#include <string>
#include <vector>

namespace anagram {

class Matcher {
    public:
        Matcher() = delete;
        Matcher(const std::string& word);
        Matcher(const Matcher& matcher);
        std::vector<std::string> matches(
                const std::vector<std::string>& candidates) const;

    private:
        std::string word_;
};

Matcher anagram(const std::string& word);

}

#endif