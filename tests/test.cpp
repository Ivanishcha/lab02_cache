// Copyright 2021 Ivanishcha <ivanishcha@gmail.com>

#include <gtest/gtest.h>

#include "header.hpp"
TEST(Example, EmptyTest) {
  EXPECT_TRUE(true);
}

TEST(PROGRAMM, WORK){
  int L1 = 32;
  int L3 = 8192;

  Tester exp1(L1, L3);

  std::stringstream str;
  exp1.show_Experiment(str);
  std::cout << str.str();
  EXPECT_TRUE(true);
}

TEST(PROGRAMM, DEFINE_SERIES){
  int L1 = 32;
  int L3 = 8192;
  Tester exp2(L1, L3);
  exp2.define_series();
  std::stringstream str;
  exp2.show_series(str);
  std::string ref_string = "16 32 64 128 256 512 1024 2048 4096 8192 12288 \n";

  EXPECT_EQ(str.str(), ref_string);
}
