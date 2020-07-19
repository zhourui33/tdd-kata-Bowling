#include <gtest/gtest.h>
#include "BowlingGame.h"

#define ROLLS(poured, times) do{                                \
                                for(int i = 0; i < times; ++i)  \
                                    bowling.roll(poured);       \
                               }while(0);

TEST(test_bowling_scoring, should_got_0_scores_when_every_round_roll_0)
{
    BowlingGame bowling;
    ROLLS(0, 20);
    ASSERT_TRUE(0 == bowling.scoring());
}

TEST(test_bowling_scoring, should_got_60_scores_when_every_round_roll_3)
{
    BowlingGame bowling;
    ROLLS(3, 20);
    ASSERT_TRUE(60 == bowling.scoring());
}

TEST(test_bowling_scoring, should_got_70_scores_when_roll_one_strike_and_others_3)
{
    BowlingGame bowling;
    bowling.roll(10);
    ROLLS(3, 18);
    ASSERT_TRUE(70 == bowling.scoring());
}

TEST(test_bowling_scoring, should_got_67_scores_when_roll_one_spare_and_others_3)
{
    BowlingGame bowling;
    ROLLS(5, 2);
    ROLLS(3, 18);
    ASSERT_TRUE(67 == bowling.scoring());
}

TEST(test_bowling_scoring, should_got_300_scores_when_every_roll_strike)
{
    BowlingGame bowling;
    ROLLS(10, 12);
    ASSERT_TRUE(300 == bowling.scoring());
}