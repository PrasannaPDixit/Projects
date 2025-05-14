#include <iostream>
#include <vector>

namespace CodingTest
{
    /*
    /// @Brief  - Program calculating the score of a single player in bowling game. 
    /// @Input  - Vector containing score of each roll, adjuscent even-odd index pair will be considered as a single frame. 
    /// @Output - Integral value denoting the score of a single player in bowling game. 
    /// @Author - Prasanna Prabhakarrao Dixit
    /// @Date   - 14/05/2025
    */
    class BowlingGame 
    {
        private:
        std::vector<int> rolls;
        int strikeBonus(int index); 
        int spareBonus(int index);
        public:
        BowlingGame()=default;
        ~BowlingGame()=default;
        void addRoll(std::vector<int> &pins);
        int calculateScore();
    };


    int BowlingGame::strikeBonus(int index) 
    {
        return rolls[index + 1] + rolls[index + 2];
    }

    int BowlingGame::spareBonus(int index) 
    {
        return rolls[index + 2];
    }

    void BowlingGame::addRoll(std::vector<int> &pins) 
    {
        rolls = std::move(pins);
    }

    int BowlingGame::calculateScore() 
    {
        int totalScore = 0;
        int rollIndex = 0;

        for (int frame = 0; frame < 10; ++frame) 
        {
            //Strike
            if (rolls[rollIndex] == 10) 
            {
                totalScore += 10 + strikeBonus(rollIndex);
                rollIndex += 1;
            }
            //Spare
            else if (rolls[rollIndex] + rolls[rollIndex + 1] == 10) 
            {
                totalScore += 10 + spareBonus(rollIndex);
                rollIndex += 2;
            }
            else 
            {
                totalScore += rolls[rollIndex] + rolls[rollIndex + 1];
                rollIndex += 2;
            }
        }

        return totalScore;
    }    
}


int main() 
{
    CodingTest::BowlingGame game;

    std::vector<int> inputRolls = 
       {1, 4, 
        4, 5, 
        6, 4, 
        5, 5, 
        10, 0, 
        1, 7, 
        3, 6, 
        4, 10, 
        6, 4, 6};

    game.addRoll(inputRolls);

    int totalScore = game.calculateScore();
    std::cout << "Total Bowling Score: " << totalScore << std::endl;

    return 0;
}

