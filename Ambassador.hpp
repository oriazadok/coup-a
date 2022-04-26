#include "Assassin.hpp"
/**
 * @brief 
 * Ambassador can take a coin from one player to another player
 * Ambassador can prevent stealing
 */
namespace coup {
    class Ambassador : public Player {
        private:
            Game _game;
            string _name;
        public:
            Ambassador(Game game, string name);
            ~Ambassador();
            
            int transfer(Player duke, Assassin assassin);
        };
}