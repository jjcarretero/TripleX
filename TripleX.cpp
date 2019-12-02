#include <iostream>
#include <ctime>

//I want to thank "DiegoTheOneEyedCat" for her help with grammar corrections and writting ideas.

void PrintIntroduction(int Difficulty, int PhaseCounter)
{

    if (PhaseCounter == 0)
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
    else if (PhaseCounter == 1)
    {
        std::cout << "\nAfter running through a corridor, you finally arrive to a huge metallic door\n";
        std::cout << "It´s probably the hangar where the shuttles can be found\n";
        std::cout << "But again, another password should be enter, and this time the door is headed with a " << Difficulty;
        std::cout << ".\nIf you were able to take one of those ships...\n";
    }
    else if (PhaseCounter == 2)
    {
        std::cout << "\nYou are now on the pilot´s seat. You are so close to be free again!\n";
        std::cout << "You see strange symbols on the panel control, but you already know how these codes work\n";
        std::cout << "You just have to enter the right numbers...\n";
    }

    else if (PhaseCounter == 3)
    {
        std::cout << "\nOh! You were so close, but for some reason the engine stopped working. All you room is now shining in blue.\n";
        std::cout << "That code was right, you were sure, but... What is happening? It's like if they were using... \n";
        std::cout << "Yes. A sound on the board confirmed it, the aliens are using a trap ray!\n";
        std::cout << "You must hack the computer before it's too late!\n";
    }

    else if (PhaseCounter == 4)
    {
        std::cout << "\nOkey, WHAT? You are free from the ray, but you are still on trouble.\n";
        std::cout << "In the rush, you didn't notice that this ship had an anti-theft mecanism, and now you have a countdown on the monitor\n";
        std::cout << "If you don't enter the right numbers very quickly, you will blow up!!!\n";
        std::cout << "Come on! Do it! NOW!\n";
    }
}

void PrintSuccess(int PhaseCounter)
{
    if (PhaseCounter == 0)
    {
        std::cout << "\nYou enter the three numeric values of the code and take a look back at the aliens... They are recovering!\n";
        std::cout << "There's a metallic sound, the door opens.\n";
        std::cout << "Run! You did it!\n";
    }
    else if (PhaseCounter == 1)
    {
        std::cout << "\nYou enter the third number and wait for the right *beep* that confirm you are right\n";
        std::cout << "A phaser ray makes a smoking hole near your head...\n";
        std::cout << "But the doors opens! You are now at the hangar, and you see a nice white ship\n";
        std::cout << "The ramps is down and you are able to get inside it. You are very close to make your way out of there!\n";
    }
    else if (PhaseCounter == 2)
    {
        std::cout << "\nWith a big roar the engine wakes up and start glowing\n";
        std::cout << "You feel how the ship lifts from the floor and you breathe deeply while pulling the joystic down to make it fly\n";
        std::cout << "Almost there...\n";
    }

    else if (PhaseCounter == 3)
    {
        std::cout << "\nAfter entering the security code, the blue light stops blinking and it goes back to the previous red\n";
        std::cout << "You are free from the ray!\n";
        std::cout << "Let's try again!\n";
    }

    else if (PhaseCounter == 4)
    {
        std::cout << "\n5...4...3...2...\n";
        std::cout << "You close your eyes and press the last number...\n";
        std::cout << "Hurray! The countdown stopped!!\n";
    }
}

void PrintFail(int Lifes)
{
    if (Lifes == 1)
    {
        std::cout << "\nThe last number shines in red again. You had failed again. You look back to check your pursuers and try to get focus.\n";
        std::cout << "Suddenly, a big shadow pounces on you. You are captured again, and this time... you won't be able to escape.\n\n";
        std::cout << "GAME OVER\n";
        std::cout << "Thank you for playing Alien TripleX by JJCA\n";
    }
    else if (Lifes == 2)
    {
        std::cout << "\nOh no! You failed again!\n";
        std::cout << "Steps are closer, aliens are almost there\n";
        std::cout << "Quickly, try again! But don't get wrong this time!\n";
    }
    else if (Lifes == 3)
    {
        std::cout << "\n*Bzzt* The panel shines in red, you were wrong!\n";
        std::cout << "Fortunately, you had some time, you may try again\n";
        std::cout << "Think wisely and press those numbers correctly\n";
    }
}

bool PlayGame(int Difficulty, int PhaseCounter, int Lifes)
{
    PrintIntroduction(Difficulty, PhaseCounter);

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
        PrintSuccess(PhaseCounter);
        return true;
    }
    else
    {
        PrintFail(Lifes);
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
        else
        {
            Lifes--;
            if (Lifes == 0)
            {
                LevelDifficulty = MaxDifficulty;
            }
        }
    }

    if (Lifes != 0)
    {
        std::cout << "\nThe ship finally speed up to leave that nightmare behind\n";
        std::cout << "You have espcaped from the aliens, and now you have an awesome tale to tell to your grandchildren...\n";
        std::cout << "If they ever believe you!\n\n";
        std::cout << "Congratulations and thank you for playing Alien TripleX by JJCA\n";
    }
    return 0;
}