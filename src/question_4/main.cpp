#include "question4.h"
#include 

int main()
{
    char choice;
    do{

        int num;
        bool valid_input = false;

        while (!valid_input){

            std::cout << "Enter a number between 1-10: ";
            std::cin >> num;

            if (std::cin .fail() || num < 1 || num > 10){

                std::cout << "Invalid number" std::endl;
                std::cin.clear();
                while (std::cin.get() != '\n');
            } else {

                valid_input = true;
            }
        }

        std::string factorial_result = get_factorial_sequence(num);

        std::cout << "Factorial sequence for " << num << ": " << factorial_result << std::endl;

        std::cout << "Do you wish to continue (y/n): "
        std::cin >> choice;

         } while (choice == 'y' || choice == 'Y');

     std::cout << "Exiting program." << std::endl;
    

    return 0;
}