#include "question1.h"
#include <iostream>
#include <string>
#include <algorithm>

bool test_config()
{
    return true;
}

std::string transcribe_dna_to_rna(const std::string& dna_sequence){

    std::string rna_sequence = dna_sequence;
    std::replace(rna_sequence.begin(), rna_sequence.end(), 'T', 'U');

    return rna_sequence;

}