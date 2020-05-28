#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // Print Intro Messages to the terminal
    std::cout <<"\n";
    std::cout <<"                                           \n";
    std::cout <<"===========================================\n";
    std::cout <<"             YO SLUG!                      \n";
    std::cout <<"===========================================\n";
    std::cout <<"                                           \n";
    std::cout <<"                                           \n";
    std::cout <<"                                           \n";
    std::cout << "You are walking down the street one day...\n";
    std::cout << "You encounter a hip-looking slug with a backwards baseball cap.\n";
    std::cout << "Slug: \"PSST! Yo dawg! What's the password numba\"?\n";
    std::cout << "Slug: \"It\'s a difficulty level " << Difficulty  << " password...\"\n";
    std::cout << "\n\n";

}

void PrintNextPassword(int Difficulty, bool playIntro)
{
    if (playIntro = false)
    {
        std::cout << "\n\n"; 
        std::cout << "Slug: \"Here's the next password\n";
        std::cout << "Slug: \"It\'s a difficulty level " << Difficulty  << " password...\"\n";
        std::cout << "\n\n";  
    }
}

bool PlayGame(int Difficulty, bool playIntro)
{
    PrintNextPassword(Difficulty, playIntro);
    // Initialize 3 Number Code
    const int CodeA = (rand() % Difficulty) + Difficulty;
    const int CodeB = (rand() % Difficulty) + Difficulty;
    const int CodeC = (rand() % Difficulty) + Difficulty;


    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << "There are three numbers in the password\n";
    std::cout << "The numbers add up to: " << CodeSum << "\n";
    std::cout << "The numbers multiply to give: " << CodeProduct << "\n\n";

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    std::cout << "\n";
    std::cout << "\n";

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;


    // Check if player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n\n\n\n\n\n\n\n";
        std::cout << "Slug: \"You have guessed correctly! Wo!\"\n";
        std::cout << "Slug: \"Let's see how you handle the next password.\"\n";
        std::cout << "\n\n";
        return true;
    }
    else
    {
        std::cout << "\n\n\n\n\n\n\n\n";
        std::cout << "Slug: \"Yo dog, that is incorrect.\"\n";\
        std::cout << "Slug: \"Give it another trah!\"\n";
        std::cout << "\n\n";
        return false;
    }
}


int main()
{
    bool playIntro = true;
    srand(time(NULL));
    int LevelDifficulty = 1;
    const int MaxLevelDifficulty = 8;

    if (playIntro = true)
    {
        PrintIntroduction(LevelDifficulty);
        playIntro = false;
    }

    while (LevelDifficulty <= MaxLevelDifficulty) // Loop game until all levels are complete
    {
        bool bLevelComplete = PlayGame(LevelDifficulty, playIntro);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            // Increase the level difficulty
            ++LevelDifficulty;

        }
        
    }
    std::cout << "\n        ...                            \n";
    std::cout << "\nSlug: \"Just kidding! You did it man!\"\n";
    std::cout << "Slug: \"That's all the passwords.\"\n";
    std::cout << "Slug: \"Go on to the rest of yo life dude!\"\n";
    return 0;
}
