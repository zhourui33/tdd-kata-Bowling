#include "BowlingGame.h"

int BowlingGame::scoring()
{
    int score = 0;
    size_t rollIdx = 0;
    for(int round = 0; round < 10; round++)
    {
        if(isStrike(rollIdx))
        {
            score += (10 + getStrikeBonus(rollIdx));
            rollIdx++;
        }
        else if(isSpare(rollIdx))
        {
            score += (10 + getSpareBonus(rollIdx));
            rollIdx += 2;
        }
        else
        {
            score += (pouredNum[rollIdx] + pouredNum[rollIdx+1]);
            rollIdx += 2;
        }
        
    }
    return score;
}
void BowlingGame::roll(int n)
{
    pouredNum.push_back(n);
}

bool BowlingGame::isStrike(size_t rollIdx)
{
    return 10 == pouredNum[rollIdx];
}
bool BowlingGame::isSpare(size_t rollIdx)
{
    return pouredNum[rollIdx+1] == (10 - pouredNum[rollIdx]);
}
int BowlingGame::getStrikeBonus(size_t rollIdx)
{
    return pouredNum[rollIdx+1] + pouredNum[rollIdx+2];
}
int BowlingGame::getSpareBonus(size_t rollIdx)
{
    return pouredNum[rollIdx+2];
}