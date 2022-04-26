#pragma once
#include <iostream>
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Player.hpp"
#endif
#include "Game.hpp"

using namespace std;
using namespace coup;


namespace coup {
    class Assassin : public Player {
        private:
            Game _game;
            string _name;
        public:
            Assassin(Game game, string name);
            ~Assassin();


    };
    
}