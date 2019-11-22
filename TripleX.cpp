#include <iostream>

//I want to thank "DiegoTheOneEyedCat" for her help with grammar corrections and writting ideas.

void PrintIntroduction()
{

    std::cout << "====================================================================================================" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "     **     **       ** ******** ****     **   ********** *******   ** *******  **       ******** **     **" << std::endl;
    std::cout << "    ****   /**      /**/**///// /**/**   /**  /////**/// /**////** /**/**////**/**      /**///// //**   ** " << std::endl;
    std::cout << "   **//**  /**      /**/**      /**//**  /**      /**    /**   /** /**/**   /**/**      /**       //** **  " << std::endl;
    std::cout << "  **  //** /**      /**/******* /** //** /**      /**    /*******  /**/******* /**      /*******   //***   " << std::endl;
    std::cout << " **********/**      /**/**////  /**  //**/**      /**    /**///**  /**/**////  /**      /**////     **/**  " << std::endl;
    std::cout << "/**//////**/**      /**/**      /**   //****      /**    /**  //** /**/**      /**      /**        ** //** " << std::endl;
    std::cout << "./**     /**/********/**/********/**    //***      /**    /**   //**/**/**      /********/******** **   //**" << std::endl;
    std::cout << "//      // //////// // //////// //      ///       //     //     // // //       //////// //////// //     // " << std::endl;
    std::cout << std::endl;
    std::cout << "====================================================================================================" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    //Print welcome messages to the terminal
    std::cout << "You had been abducted!! You are at the spaceship and the aliens have you lying on a table to make experiments with your body.\n";
    std::cout << "In a mislead of your kidnappers, you have released one of your hands and punch one of those aliens in the head.\n";
    std::cout << "Taking advantage of the confusion, you have break free and run onto the door.\n";
    std::cout << "There, you have to solve and strange password to keep on scaping...\n\n";
}

void PlayGame()
{
    PrintIntroduction();

    //Declare first 3 number code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 3;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print sum and product to the terminal
    std::cout << "\n+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    //Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if the player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou enter the three numeric values of the code and take a look back at the aliens... They are recovering!\n";
        std::cout << "There's a metallic sound, the door opens.\n";
        std::cout << "Run! You did it!\n";
    }
    else
    {
        std::cout << "\nYour fingers enter the numbers... but it doesn't work!\n";
        std::cout << "The aliens are getting closer each second.\n";
        std::cout << "Suddenly, a big shadow pounces on you. You are captured again, and this time... you won't be able to escape.\n\n";
        std::cout << "GAME OVER\n";
    }
}

int main()
{
    PlayGame();
    return 0;
}