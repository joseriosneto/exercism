#include "hamming.h"
#include <stdexcept>

using std::string;
using std::domain_error;

int hamming::compute(const string& strand_1, const string& strand_2)
{
    int diff_count = 0;

    if (strand_1.length() != strand_2.length())
        throw domain_error("Different length DNA strands!");

    for (int i = 0; i < strand_1.length(); ++i)
        diff_count += strand_1[i] != strand_2[i];

    return diff_count;
}