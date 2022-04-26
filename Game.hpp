#pragma once
#include <iostream>
#include <vector>

using namespace std;

namespace coup {
    class Game {
        public:
            vector<string> _players;
            int _winner;
        
            Game();
            ~Game();


            int turn();
            vector<string> players();
            int winner();
    };
    
}