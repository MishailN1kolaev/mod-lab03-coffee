// Copyright 2022 UNN-IASR
#include <gtest/gtest.h>
#include "Automata.h"

TEST(task1, test1) {
    Automata a;
    EXPECT_EQ(Automata::State::OFF, a.getState());
}

TEST(task2, test2) {
    Automata a;
    a.on();
    EXPECT_EQ(Automata::State::WAIT, a.getState());
    a.off();
    EXPECT_EQ(Automata::State::OFF, a.getState());
}

TEST(task3, test3) {
    Automata a;
    a.on();
    a.coin(120);
    a.choice(0);
    ASSERT_EQ(Automata::State::CHECK, a.getState());
    ASSERT_TRUE(a.check());
    ASSERT_EQ(Automata::State::COOK, a.getState());
}

TEST(task4, test4) {
    Automata a;
    a.on();
    a.coin(50);
    a.choice(0);
    ASSERT_EQ(Automata::State::ACCEPT, a.getState());
    int refund = a.cancel();
    ASSERT_EQ(50, refund);
    ASSERT_EQ(Automata::State::WAIT, a.getState());
}
