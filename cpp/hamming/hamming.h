#ifndef HAMMING_H
#define HAMMING_H

#include <string>

class hamming {
    public:
        static int compute(const std::string& strand_1,
                const std::string& strand_2);
};

#endif