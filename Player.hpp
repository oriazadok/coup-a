#pragma once
#include <iostream>
using namespace std;

namespace coup {
    class Player {
        protected:
            int _numOfCoins;
            string _name;
            string _role;

        public:
            Player();
            Player(int numOfCoins, string const &name, string role);
            ~Player();

            static int income();
            static int foreign_aid();
            static int coup(Player const &player);

            string role();
            static int coins();
        };
}