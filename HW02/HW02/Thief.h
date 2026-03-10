#pragma once
#include "Player.h"

class Thief : public Player
{
public:
    Thief(string nickName);
    
    void attack();
    void attack(Monster* monster);
};
