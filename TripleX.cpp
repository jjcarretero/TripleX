#include <iostream>
#include <ctime>

//I want to thank "DiegoTheOneEyedCat" for her help with grammar corrections and writting ideas.

void PrintIntroduction(int Difficulty)
{
    std::cout << "===========================================================================================================" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "     **     **       ** ******** ****     **   ********** *******   ** *******  **       ******** **     **" << std::endl;
    std::cout << "    ****   /**      /**/**///// /**/**   /**  /////**/// /**////** /**/**////**/**      /**///// //**   ** " << std::endl;
    std::cout << "   **//**  /**      /**/**      /**//**  /**      /**    /**   /** /**/**   /**/**      /**       //** **  " << std::endl;
    std::cout << "  **  //** /**      /**/******* /** //** /**      /**    /*******  /**/******* /**      /*******   //***   " << std::endl;
    std::cout << " **********/**      /**/**////  /**  //**/**      /**    /**///**  /**/**////  /**      /**////     **/**  " << std::endl;
    std::cout << "/**//////**/**      /**/**      /**   //****      /**    /**  //** /**/**      /**      /**        ** //** " << std::endl;
    std::cout << "/**     /**/********/**/********/**    //***      /**    /**   //**/**/**      /********/******** **   //**" << std::endl;
    std::cout << "//      // //////// // //////// //      ///       //     //     // // //       //////// //////// //     // " << std::endl;
    std::cout << std::endl;
    std::cout << "===========================================================================================================" << std::endl;

    //Print welcome messages to the terminal
    std::cout << "\n\nYou had been abducted!! You are at the spaceship and the aliens have you lying on a table to make experiments with your body.\n";
    std::cout << "In a mislead of your kidnappers, you have released one of your hands and punch one of those aliens in the head.\n";
    std::cout << "Taking advantage of the confusion, you have break free and run onto the door with a number " << Difficulty;
    std::cout << " on top of it.\nThere, you have to solve and strange password to keep on scaping...\n\n";
}

void PrintSuccess(int PhaseCounter)
{
    
}

bool PlayGame(int Difficulty, int PhaseCounter, int Lifes)
{
    if (PhaseCounter == 0)
        PrintIntroduction(Difficulty);

    //Declare first 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print sum and product to the terminal
    std::cout << "\n+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;
    std::cout << "\nEnter your three guesses (separated by spaces, i.e. 1 1 1):\n";

    //Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    if (!std::cin) //Handle a non-integer input
        throw std::exception("The console takes only integers!\n");

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if the player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou enter the three numeric values of the code and take a look back at the aliens... They are recovering!\n";
        std::cout << "There's a metallic sound, the door opens.\n";
        std::cout << "Run! You did it!\n";
        return true;
    }
    else
    {
        std::cout << "\nYour fingers enter the numbers... but it doesn't work!\n";
        std::cout << "The aliens are getting closer each second.\n";
        std::cout << "Suddenly, a big shadow pounces on you. You are captured again, and this time... you won't be able to escape.\n\n";
        std::cout << "GAME OVER\n";
        return false;
    }
}

int main()
{
    srand(time(NULL)); //Create new random sequence based on the time of day

    int LevelDifficulty = rand() % 3 + 1;
    const int MaxDifficulty = LevelDifficulty + 4;

    int PhaseCounter = 0;
    int Lifes = 3;

    while (LevelDifficulty <= MaxDifficulty) //Loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty, PhaseCounter, Lifes);
        std::cin.clear();  //Clear any errors
        std::cin.ignore(); //Discards the buffer

        if (bLevelComplete)
        {
            LevelDifficulty + rand() % 3 + 1;
            ++PhaseCounter;
        }
    }

    std::cout << "\nThe ship's engine roar and you can finally speed up to leave that nightmare behind\n";
    std::cout << "You have espcaped from the aliens, and now you have an awesome tale to tell to your grandchildren...\n";
    std::cout << "If they ever belive you!\n\n";
    std::cout << "Congratulations and thank you for playing Alien TripleX by JJCA\n";

    return 0;
}