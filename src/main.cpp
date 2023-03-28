// Copyright 2022 UNN-IASR
#include "Automata.h"

int main() {
    Automata aut;

    aut.off();
    aut.on();
    aut.getMenu();
    aut.choice(1);
    aut.coin(120);
    aut.check();
    aut.finish(1);
    return 0;
}
