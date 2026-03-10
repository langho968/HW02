#pragma once
#include "Player.h"

class Magician : public Player
{ 
public:
    Magician(string nickName);
    
    void attack();
    void attack(Monster* monster);
};
