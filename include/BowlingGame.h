#ifndef _BOWLING_GAME_H_
#define _BOWLING_GAME_H_

#include <vector>

struct BowlingGame
{
    int scoring();
    void roll(int n);
    private:
    bool isStrike(size_t rollIdx);
    bool isSpare(size_t rollIdx);
    int getStrikeBonus(size_t rollIdx);
    int getSpareBonus(size_t rollIdx);
    private:
    std::vector<int> pouredNum;
};

#endif