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
        std::cout << "\n\nYou have been abducted. You are on a spaceship, lying on a table while aliens are conducting experiments on you.\n";
        std::cout << "You free one of your hands, taking your captors by surprise. You punch one of the aliens in the head.\n";
        std::cout << "Taking advantage of the confusion you break free and run into a door with a number " << Difficulty;
        std::cout << " on top of it.\nYou need to find a password to open the door and continue your escape\n\n";
    }
    else if (PhaseCounter == 1)
    {
        std::cout << "\nYou run through a corridor and find yourself in front of a huge metal door\n";
        std::cout << "It must be the hangar with the shuttles\n";
        std::cout << "Yet again, you must enter a password, and this time the door is headed with a " << Difficulty;
        std::cout << ".\nIf only you could take one of those ships...\n";
    }
    else if (PhaseCounter == 2)
    {
        std::cout << "\nYou are in the pilot seat. You are so close to freedom!\n";
        std::cout << "You see the strange symbols on the control panel, but you already know how these codes work\n";
        std::cout << "You just need to enter the right numbers...\n";
    }

    else if (PhaseCounter == 3)
    {
        std::cout << "\nOh! You were so close but for some reason the engine has stopped working. The room is glowing blue.\n";
        std::cout << "You entered the right code, you are sure of it, but... what’s happening? It’s like they are using... \n";
        std::cout << "Yes, you hear the sound confirming your suspicions. The aliens are using a trap ray!\n";
        std::cout << "You must hack the computer before it’s too late!\n";
    }

    else if (PhaseCounter == 4)
    {
        std::cout << "\nOK, what? You are free from the ray but you are still in trouble\n";
        std::cout << "In the rush to escape you did not notice that the ship was using an anti-theft mechanism. A countdown appears on the monitor\n";
        std::cout << "If you don’t enter the right numbers immediately, the ship will blow up!!!\n";
        std::cout << "Come on! Do it! NOW!\n";
    }
}

void PrintSuccess(int PhaseCounter)
{
    if (PhaseCounter == 0)
    {
        std::cout << "\nYou enter the three numeric values of the code and take a look back at the aliens... They are coming!\n";
        std::cout << "There's a metallic sound and the door opens.\n";
        std::cout << "Run! You did it!\n";
    }
    else if (PhaseCounter == 1)
    {
        std::cout << "\nYou enter the third number and wait for the sound *beep* confirming it’s correct\n";
        std::cout << "A phase ray makes a smoking hole next to your head...\n";
        std::cout << "Finally, the door opens! You are now in the hangar and you see a nice, white ship\n";
        std::cout << "The ramp is down and you are able to get inside of it. You are so close to making it out of here!\n";
    }
    else if (PhaseCounter == 2)
    {
        std::cout << "\nWith a loud roar, the engine comes to life and starts glowing\n";
        std::cout << "You feel the ship lift off and you breathe in deep as you pull the controls down to make it fly\n";
        std::cout << "Almost there...\n";
    }

    else if (PhaseCounter == 3)
    {
        std::cout << "\nUpon entering the security code, the blue light stops flashing and goes back to red\n";
        std::cout << "You are free from the ray!\n";
        std::cout << "Let's try again!\n";
    }

    else if (PhaseCounter == 4)
    {
        std::cout << "\n5...4...3...2...\n";
        std::cout << "You close your eyes and enter the final number...\n";
        std::cout << "Hurray! The countdown has stopped!!\n";
    }
}

void PrintFail(int Lifes)
{
    if (Lifes == 1)
    {
        std::cout << "\nThe final number flashes red once more. You have failed again. You look back at your pursuers and try to focus.\n";
        std::cout << "Suddenly, a big shadow pounces on you. You are captured again, and this time… you won’t be able to escape.\n\n";
        std::cout << "GAME OVER\n";
        std::cout << "Thank you for playing Alien TripleX by JJCA\n";
    }
    else if (Lifes == 2)
    {
        std::cout << "\nOh no! You’ve failed again!\n";
        std::cout << "Steps are coming closer, the aliens are almost there\n";
        std::cout << "Quick, try it again! But don’t get it wrong this time!\n";
    }
    else if (Lifes == 3)
    {
        std::cout << "\n*Bzzt* The panel glows red, you were wrong!\n";
        std::cout << "Fortunately, there is still time, you can try again\n";
        std::cout << "Think hard, try to press the numbers in the right order\n";
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
            LevelDifficulty += rand() % 3 + 1;
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
        std::cout << "\nThe ship finally speeds up and you leave the nightmare behind\n";
        std::cout << "You managed to escape the aliens and now you have an awesome tale to tell to your grandchildren...\n";
        std::cout << "If they believe you!\n\n";
        std::cout << "Congratulations and thank you for playing Alien TripleX by JJCA\n";
    }
    return 0;
}