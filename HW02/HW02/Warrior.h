#pragma once
#include "Player.h"

class Warrior : public Player
{
public:
    Warrior(string nickName);
    
    void attack();
    void attack(Monster* monster);
    
};
