// Copyright 2022 UNN-IASR
#pragma once
#include <iostream>
#include <string>

using std::string;

class Automata {
 public:
    enum State { OFF, WAIT, ACCEPT, CHECK, COOK };

    int cash = 0;
    string menu[3] = { "Coffee", "Tea", "Milk" };
    int prices[3] = { 100, 200, 150 };
    State state = OFF;
    int choice_p;
    void on();
    void off();
    void coin(int m);
    string* getMenu();
    State getState() { return state; }
    void choice(int ch);
    bool check();
    int cancel();
    void cook();
    void finish(int f);
};
