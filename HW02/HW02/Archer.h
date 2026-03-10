#pragma once
#include "Player.h"

class Archer : public Player
{
public:
    Archer(string nickName);
    
    void attack();
    void attack(Monster* monster);
};
