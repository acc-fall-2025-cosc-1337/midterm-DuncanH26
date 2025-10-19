//
#include "question4.h"
#include <string>
#include <numeric>

bool test_config()
{
    return true;
}

std::string get_factorial_sequence(int n) {

    if (n < 1) {

        return "Invalid Input"
    }

    std::string sequence = "";
    long long factorial_value = 1;

    for (int i = 1; i <= n; ++i){

        factorial value *= i;
        sequence += std::to_string(i);

        if (i < n){

            sequence += "x";
        }
    }

    sequence += "=" + std::to_string(factorial_value);
    return sequence;
}