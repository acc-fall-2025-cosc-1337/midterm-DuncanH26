#include  <iostream>
#include <limits>
#include "question2.h"
int main()
{
    char user_choice 

    do{
        int widgets_sold;
        std::cout << "Enter number of widgets sold: ";

        while (!(std::cin >> widgets_sold) || widgets_sold < 0) {

            std::cout << "Invalid Input. Try again: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
       
        } 

        int earned_points = get_earned_points(widgets_sold);

        std::cout << "Points earned: " << earned_points << std::endl;

        std::cout << "Do you want to calculate points again? (y/n): ";
        std::cin >> user_choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (user_choice == 'y' || user_choice == 'Y');

    std::cout << "Program Exiting.." <<std::endl;

    return 0;
}