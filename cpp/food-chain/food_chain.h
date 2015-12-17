#ifndef FOOD_CHAIN_H
#define FOOD_CHAIN_H

#include <string>
#include <vector>

class food_chain {
    public:
        static std::string verse(int part);
        static std::string verses(int first, int last);
        static std::string sing();

    private:
        static const std::vector<std::string> verses_;
};

#endif