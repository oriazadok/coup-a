#include "doctest.h"

#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

#include <iostream>
#include <sstream>
using namespace coup;

#include <string>
#include <algorithm>
using namespace std;

Game game{};

Duke duke{game, "Moshe"};
Assassin assassin{game, "Yossi"};
Ambassador ambassador{game, "Meirav"};
Captain captain{game, "Reut"};
Contessa contessa{game, "Gilad"};

TEST_CASE("GAME") {
    
    vector<string> players = game.players();
    for (size_t i = 0; i < 5; i++) {
        CHECK(players.at(0).compare("Moshe") == 0);
        CHECK(players.at(1).compare("Yossi") == 0);
        CHECK(players.at(2).compare("Meirav") == 0);
        CHECK(players.at(3).compare("Reut") == 0);
    }
}

TEST_CASE("PLAYER") {
    CHECK(assassin.coins() == 0);
    CHECK(assassin.role().compare("Yossi"));
}

TEST_CASE("AMBASSADOR") {
    CHECK(ambassador.coins() == 0);
    CHECK(ambassador.role().compare("ambassador"));
}

TEST_CASE("ASSASSIN") {
    CHECK(assassin.coins() == 0);
    CHECK(assassin.role().compare("assassin"));
    
}

TEST_CASE("CAPTAIN") {
    CHECK(captain.coins() == 0);
    CHECK(captain.role().compare("captain"));
    
}

TEST_CASE("CONTESSA") {
    
    CHECK(contessa.coins() == 0);
    CHECK(contessa.role().compare("contessa"));
}

TEST_CASE("DUKE") {
    CHECK(duke.coins() == 0);
    CHECK(duke.role().compare("doke"));
    
}