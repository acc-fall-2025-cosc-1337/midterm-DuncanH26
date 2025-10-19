#include <string>
#include "question1.h"
int main()
{

    std::string dna_input = "GATGGAACTTGACTACGTAAATT";
    std::string expected_rna_output = "GAUGGAACUUGACUACGUAAAUU";

    std::string actual_rna_output = transcribe_dna_to_rna(dna_input);

    std::cout << "Dna Input: " << dna_input << std::endl;
    std::cout << "Expected Rna Output: " << expected_rna_output << std::endl;
    std::cout << "Actual Rna Output: " << actual_rna_output << std::endl;


    if (actual_rna_output == expected_rna_output){

        std::cout << "Test Passed" << std::endl;
    } else{

        std::cout << "Test Failed" << std::endl;
    }




    return 0;
}