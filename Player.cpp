#include "Player.hpp"

namespace coup{
    Player::Player(){

    }
    
    Player::Player(int numOfCoins, string const &name, string role) {
        this->_numOfCoins = numOfCoins;
        this->_name = name;
        this->_role = std::move(role);
    }
    
    Player::~Player() {
    }

    int Player::income() {
        return 0;
    }
    int Player::foreign_aid() {
        return 0;
    }
    int Player::coup(Player const &player) {
        return 0;
    }
    
    string Player::role() {
        return this->_role;
    }
    int Player::coins() {
        return 0;
    }
}