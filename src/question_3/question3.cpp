#include "question3.h"
#include <iostream>
#include <algorithm>

bool test_config()
{
    return true;
}

int find_gdc(int num1, int num2){

    if (num1 == 0 && num2 == 0){

        return -1;
    }
    if (num1 == 0){

        return num2;
    }
    if (num2 == 0){

        return num1;
    }

    int gdc = 1;
    int limit = std::min(num1, num2);

    for (int i = 1; i <= limit; ++i){

        if (num1 % i == 0 && num2 % i == 0){

            gdc = i;
        }
    }
}