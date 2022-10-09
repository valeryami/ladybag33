#ifndef TEST_TICTACTOE_H
#define TEST_TICTACTOE_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "myfunc.hpp"

extern "C" {
#include "myfunc.hpp"
}

TEST(x_win, row)
{
    std::string output_text = "Игрок Х выиграл игру!!!";

    testing::internal::CaptureStdout();

    int select[]={4,2,6,3,5};
    int size=sizeof(select)/4;

    tictactoe(select, size);
    std::string text = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(text.c_str(), output_text.c_str());
}

TEST(x_win, column)
{
    std::string output_text = "Игрок Х выиграл игру!!!";

    testing::internal::CaptureStdout();

    int select[]={3,5,6,1,9};
    int size=sizeof(select)/4;

    tictactoe(select, size);
    std::string text = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(text.c_str(), output_text.c_str());
}

TEST(x_win, diagonal)
{
    std::string output_text = "Игрок Х выиграл игру!!!";

    testing::internal::CaptureStdout();

    int select[] = {1,2,5,6,9};
    int size=sizeof(select)/4;

    tictactoe(select, size);
    std::string text = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(text.c_str(), output_text.c_str());
}

TEST(o_win, row)
{
    std::string output_text = "Игрок О выиграл игру!!!";

    testing::internal::CaptureStdout();

    int select[]= {5,1,9,3,7,8,4,2};
    int size=sizeof(select)/4;

    tictactoe(select, size);
    std::string text = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(text.c_str(), output_text.c_str());
}

TEST(o_win, column)
{
    std::string output_text = "Игрок О выиграл игру!!!";

    testing::internal::CaptureStdout();

    int select[]={2,5,1,3,8,9,7,6};
    int size=sizeof(select)/4;

    tictactoe(select, size);
    std::string text = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(text.c_str(), output_text.c_str());
}

TEST(o_win, diagonal)
{
    std::string output_text = "Игрок О выиграл игру!!!";

    testing::internal::CaptureStdout();

    int select[]={1,5,6,3,8,7};
    int size=sizeof(select)/4;

    tictactoe(select, size);
    std::string text = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(text.c_str(), output_text.c_str());
}



#endif
