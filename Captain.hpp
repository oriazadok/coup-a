#pragma once
#include "Game.hpp"
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Player.hpp"
#endif


namespace coup {
    class Captain : public Player {
    private:
        Game _game;
        string name;
    public:
        Captain(Game game, string name);
        ~Captain();

        
        int block(Player duke);
        int steal(Player contessa);
    };
}