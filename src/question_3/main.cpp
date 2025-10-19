#include "question3.h"
int main()
{

    int num1, num2;
    char choice;

    do{

        std::cout << "Enter first integer: ";
        std::cin >> num1;

        while (num1 < 1  || num1 > 200){

            std::cout << "Invalid Input";
            std::cin >> num1;
        }

        std::cout << "Enter second integer: ";
        std::cin >> num2;

        while (num2 < 1  || num 2 > 200){

            std::cout << "Invalid Input";
            std::cin >> num2;
        }

        int result = find_gdc(num1, num2);

        if (result == -1){

            std::cout << "No common factors";

        } else {

            std::cout << "The greatest common factor is: " << result << std::endl;
        }

        std::cout << "Do you wish to continue? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y'  || choice == 'Y');


    return 0;
}