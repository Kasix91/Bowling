#include <gtest/gtest.h>
#include "Game.hpp"

struct GameTests: public ::testing::Test
{
};

TEST_F(GameTests, AddFrames)
{
    Game game;
    game.addFrames("Someone:32|4");
}

