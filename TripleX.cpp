#include <iostream>

//I want to thank "DiegoTheOneEyedCat" for her help with grammar corrections and writting ideas.

int main()
{
    //Print welcome messages to the terminal
    std::cout << "You had been abducted!! You are at the spaceship and the aliens have you lying on a table to make experiments with your body.";
    std::cout << std::endl;
    std::cout << "In a mislead of your kidnappers, you have released one of your hands and punch one of those aliens in the head.";
    std::cout << std::endl;
    std::cout << "Taking advantage of the confusion, you have break free and run onto the door.";
    std::cout << "There, you have to solve and strange password to keep on scaping..." << std::endl;

    //Declare first 3 number code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 3;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    std::cout << std::endl;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You enter the three numeric values of the code and take a look back at the aliens... They are recovering!" << std::endl;
        std::cout << "There's a metallic sound, the door opens." << std::endl;
        std::cout << "Run! You did it!" << std::endl;
    }
    else
    {
        std::cout << "Your fingers enter the numbers... but it doesn't work!" << std::endl;
        std::cout << "The aliens are getting closer each second." << std::endl;
        std::cout << "Suddenly, a big shadow pounces on you. You are captured again, and this time... you won't be able to escape." << std::endl;
        std::cout << std::endl;
        std::cout << "GAME OVER" << std::endl;
    }

    return 0;
}