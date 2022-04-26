#pragma once
// #include <iostream>
#include "Game.hpp"
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Player.hpp"
#endif

namespace coup {
    class Contessa : public Player {
    private:
        Game _game;
        string _name;
    public:
        Contessa(Game game, string name);
        ~Contessa();
        
        // int block();
        int block(Player assassin);
    };
    
}