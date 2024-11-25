#include<iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main()
{
    int choice = 0, tries, number;
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;
    std::srand(std::time(0)); 
    number = (std::rand() % 100) + 1;

    while(choice != 1 && choice != 2 && choice != 3)
    {
        std::cout << "Please select your difficulty level (1 - 10 chances, 2 - 5 chances, 3 - 3 chances):";
        std::cin >> choice;
        switch(choice)
        {
            case 1: 
                tries = 10;
                break;
            case 2: 
                tries = 5;
                break;
            case 3: 
                tries = 3;
                break;
            default:
                std::cout << "Your choice must be 1, 2, 3" << std::endl;
        }
    }




    int cnt = 0, guess;
    bool won = false;
    while(cnt < tries)
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        if(guess == number)
        {
            std::cout << "Congratulations! You guessed the correct number in " << cnt + 1 << " attempts." << std::endl;
            won = true;
            break;
        }
        else if(guess < number)
        {
            std::cout << "Incorrect! The number is greater than " << guess <<"." << std::endl;
        }
        else
        {
            std::cout << "Incorrect! The number is less than " << guess <<"." << std::endl;
        }
        cnt++;
    }
    if(!won)
    {
        std::cout << "Unfortunately, you lost. Better luck next time!" << std::endl;
    }
    return 0;
}