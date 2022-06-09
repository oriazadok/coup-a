#pragma once
#include <iostream>
#include "Game.hpp"
#include "Assassin.hpp"

namespace coup {
    class Duke : public Player {
        private:
            Game _game;
            string _name;
        public:
            Duke(Game game, string name);
            ~Duke();

            int block(Player assassin);
            int tax();
        };
}

